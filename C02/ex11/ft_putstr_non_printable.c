/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:24:50 by yabokhar          #+#    #+#             */
/*   Updated: 2024/09/15 22:58:19 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)

{
	char	*xvi_radix;

	xvi_radix = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(xvi_radix[c / 16]);
	ft_putchar(xvi_radix[c % 16]);
}

int	printable(char c)

{
	if (c >= ' ' && c != 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!printable(str[i]))
			ft_puthex((unsigned char)str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
