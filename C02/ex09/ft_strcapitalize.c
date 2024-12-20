/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:55:19 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:09:13 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	digit(char c)

{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	lowercase(char c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	uppercase(char c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	letter(char c)

{
	if (lowercase(c) || uppercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	if (lowercase(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (lowercase(str[i]) && !letter(str[i - 1]) && !digit(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
