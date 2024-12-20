/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:47:03 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:25:29 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)

{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc((max - min) * sizeof(int));
	if (!arr || min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
