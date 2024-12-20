/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:41:41 by yabokhar          #+#    #+#             */
/*   Updated: 2024/09/29 23:45:03 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_operators(char *str)

{
	if (!ft_strcmp("+", str))
		return (1);
	else if (!ft_strcmp("-", str))
		return (1);
	else if (!ft_strcmp("*", str))
		return (1);
	else if (!ft_strcmp("/", str))
		return (1);
	else if (!ft_strcmp("%", str))
		return (1);
	ft_putstr("0\n");
	return (0);
}

int	main(int argc, char **argv)

{
	if (argc != 4)
		return (-1);
	if (!check_operators(argv[2]))
		return (0);
	if (!ft_strcmp("/", argv[2]) && !ft_atoi(argv[3]))
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (!ft_strcmp("%", argv[2]) && !ft_atoi(argv[3]))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	if (!ft_strcmp("+", argv[2]))
		ft_putnbr(plus(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (!ft_strcmp("-", argv[2]))
		ft_putnbr(minus(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (!ft_strcmp("*", argv[2]))
		ft_putnbr(multiply(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (!ft_strcmp("/", argv[2]))
		ft_putnbr(divide(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (!ft_strcmp("%", argv[2]))
		ft_putnbr(modulo(ft_atoi(argv[1]), ft_atoi(argv[3])));
	write(1, "\n", 1);
}
