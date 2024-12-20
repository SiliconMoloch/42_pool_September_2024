/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:35:51 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:33:29 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	ft_strlen(char *base)

{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)

{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			if (base[i] == '-' || base[i] == '+')
				return (0);
			if (base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	pouf(long int nbr, int base_length, char *base)

{
	if (nbr >= base_length)
		pouf(nbr / base_length, base_length, base);
	ft_putchar(base[nbr % base_length]);
}

void	ft_putnbr_base(int nbr, char *base)

{
	long int	base_length;
	long int	nb;

	base_length = ft_strlen(base);
	nb = nbr;
	if (base_is_valid(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		pouf(nb, base_length, base);
	}
}
