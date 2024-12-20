/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:23:13 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:00:22 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
