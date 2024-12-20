/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:08:47 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 19:57:20 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)

{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		r *= nb;
		i++;
	}
	return (r);
}
