/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:10:30 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:05:07 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)

{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)

{
	if (nb <= 2)
		return (2);
	while (!is_prime(nb))
		nb++;
	return (nb);
}
