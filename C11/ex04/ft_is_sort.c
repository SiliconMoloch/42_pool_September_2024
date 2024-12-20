/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:52:04 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:52:02 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))

{
	int	i;
	int	stonks;
	int	not_stonks;

	i = 1;
	stonks = 1;
	not_stonks = 1;
	if (length <= 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			not_stonks = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			stonks = 0;
		i++;
	}
	if (stonks || not_stonks)
		return (1);
	return (0);
}
