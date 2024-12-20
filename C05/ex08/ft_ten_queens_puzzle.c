/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:08:04 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:05:51 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	print_solutions(int *board, int n)

{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int	safety_check(int *board, int x, int y)

{
	int	i;

	i = 0;
	while (i < y)
	{
		if (board[i] == x)
			return (0);
		else if ((board[i] - x) == (y - i) || (x - board[i]) == (y - i))
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *board, int y, int *count, int n)

{
	int	x;

	if (y == n)
	{
		print_solutions(board, n);
		(*count)++;
		return ;
	}
	x = 0;
	while (x < n)
	{
		if (safety_check(board, x, y))
		{
			board[y] = x;
			solve(board, y + 1, count, n);
		}
		x++;
	}
}

int	ft_ten_queens_puzzle(void)

{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count, 10);
	return (count);
}
