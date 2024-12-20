/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:40:53 by yabokhar          #+#    #+#             */
/*   Updated: 2024/09/20 10:08:48 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (max - min));
	if (!res)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}
