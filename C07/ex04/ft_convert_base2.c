/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:35:08 by yabokhar          #+#    #+#             */
/*   Updated: 2024/09/23 13:51:16 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)

{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]
				|| base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-')
				return (0);
			if ((base[i] >= 9 && base[i] <= 13)
				|| base[i] == ' ' || base[j] == ' '
				|| (base[j] >= 9 && base[j] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index(char c, char *base)

{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

long int	ft_atoi_base(char *str, char *base)

{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 1;
	value = 0;
	if (base_is_valid(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (get_index(str[i], base) != -1)
		{
			value *= ft_strlen(base);
			value += get_index(str[i], base);
			i++;
		}
	}
	return (sign * value);
}
