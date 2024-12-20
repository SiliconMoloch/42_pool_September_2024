/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:03:35 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:01:51 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (lowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
