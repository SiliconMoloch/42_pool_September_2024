/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:03:57 by yabokhar          #+#    #+#             */
/*   Updated: 2024/09/26 16:06:59 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		plus(int x, int y);
int		minus(int x, int y);
int		multiply(int x, int y);
int		divide(int x, int y);
int		modulo(int x, int y);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
