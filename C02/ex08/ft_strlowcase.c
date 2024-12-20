/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:14:25 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:02:14 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
