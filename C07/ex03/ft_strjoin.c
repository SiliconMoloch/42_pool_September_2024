/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:29:28 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:28:26 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_size(int size, char **strs, char *sep)

{
	int	i;
	int	ret_value;

	i = 0;
	ret_value = 0;
	while (i < size)
	{
		ret_value += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		ret_value += ft_strlen(sep);
		i++;
	}
	return (ret_value + 1);
}

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)

{
	char	*ret;
	int		total_size;
	int		i;

	total_size = get_total_size(size, strs, sep);
	ret = malloc(sizeof(char) * total_size);
	if (!ret)
		return (NULL);
	i = 0;
	ret[i] = '\0';
	while (i < size)
	{
		ret = ft_strcat(ret, strs[i]);
		if (i != size - 1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}
