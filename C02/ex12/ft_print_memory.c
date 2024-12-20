/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:45:43 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:08:44 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)

{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)

{
	char	*xvi_radix;

	xvi_radix = "0123456789abcdef";
	ft_putchar(xvi_radix[c / 16]);
	ft_putchar(xvi_radix[c % 16]);
}

void	print_address(unsigned long addr)

{
	int		i;
	char	*xvi_radix;
	char	buffer[16];

	i = 15;
	xvi_radix = "0123456789abcdef";
	while (i >= 0)
	{
		buffer[i] = xvi_radix[addr % 16];
		addr /= 16;
		i--;
	}
	write (1, buffer, 16);
	write (1, ": ", 2);
}

void	print_line(unsigned char *addr, unsigned int offset)

{
	unsigned int	i;

	print_address((unsigned long)addr);
	i = 0;
	while (i < 16)
	{
		if (i < offset)
			ft_puthex(addr[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < offset)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)

{
	unsigned int	offset;

	offset = 0;
	while (size > offset)
	{
		if (size - offset > 16)
			print_line((unsigned char *)addr + offset, 16);
		else
			print_line((unsigned char *)addr + offset, size - offset);
		offset += 16;
	}
	return (addr);
}
