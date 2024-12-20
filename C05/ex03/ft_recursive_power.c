/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:32:41 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 19:58:25 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)

{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
