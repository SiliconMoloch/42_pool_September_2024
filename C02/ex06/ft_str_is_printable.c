/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:40:52 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:08:57 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)

{
	if (c >= ' ' && c != 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
