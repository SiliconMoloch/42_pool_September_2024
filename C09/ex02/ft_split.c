/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:42:34 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:45:40 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//here comes again the ugly ass split lmao

char	**empty_charset_case(char *str)

{
	char	**ret;
	int		size;
	int		i;

	ret = malloc(2 * sizeof(char *));
	if (!ret)
		return (NULL);
	size = 0;
	i = 0;
	while (str[size])
		size++;
	ret[0] = malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		ret[0][i] = str[i];
		i++;
	}
	ret[0][i] = '\0';
	ret[1] = 0;
	return (ret);
}

int	is_a_separator(char *charset, char c)

{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)

{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		while (is_a_separator(charset, str[i]))
			i++;
		if (!is_a_separator(charset, str[i]) && str[i])
		{
			count++;
			while (!is_a_separator(charset, str[i]) && str[i])
				i++;
		}
		i++;
	}
	return (count + 1);
}

char	*get_word(char *str, char *charset)

{
	int		i;
	int		size;
	char	*ret;

	i = 0;
	size = 0;
	while (!is_a_separator(charset, str[size]))
		size++;
	ret = malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(char *str, char *charset)

{
	int		i;
	int		j;
	char	**ret;

	i = 0;
	j = 0;
	if (!charset[0])
		return (empty_charset_case(str));
	ret = malloc(count_words(str, charset) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_a_separator(charset, str[i]))
			i++;
		if (str[i] && !is_a_separator(charset, str[i]))
		{
			ret[j++] = get_word(&str[i], charset);
			while (!is_a_separator(charset, str[i]) && str[i])
				i++;
		}
	}
	ret[j] = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)

{
	(void)argc;
	char	**ret = ft_split(argv[1], argv[2]);
	int	size = 0;
	while (ret[size])
		size++;
	int	i = 0;
	while (i < size)
	{
		printf("string[%d] = %s\n", i, ret[i]);
		i++;
	}
}*/
