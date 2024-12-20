/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:27:24 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:01:11 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
