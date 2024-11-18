/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:19:15 by yabokhar          #+#    #+#             */
/*   Updated: 2024/10/12 18:24:25 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_display(int n, int *arr)

{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_lezgongue(int n, int *arr, int i)

{
	if (i == 0)
		arr[i] = 0;
	else
		arr[i] = arr[i - 1] + 1;
	if (i < n)
	{
		while (arr[i] <= 9)
		{
			ft_lezgongue(n, arr, i + 1);
			arr[i]++;
		}
	}
	else
		ft_display(n, arr);
}

void	ft_print_combn(int n)

{
	int	arr[9];

	ft_lezgongue(n, arr, 0);
}
