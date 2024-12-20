/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:58:26 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 18:24:23 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)

{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	dest_size;
	unsigned int	len;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	len = ft_strlen(src);
	i = 0;
	if (size <= dest_size)
		len += size;
	else
		len += dest_size;
	while (src[i] && (dest_size + 1 < size))
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (len);
}
