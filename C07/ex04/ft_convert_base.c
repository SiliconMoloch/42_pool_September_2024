/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:44:21 by yabokhar          #+#    #+#             */
/*   Updated: 2024/12/20 20:29:08 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	base_is_valid(char *base);
int	get_index(char c, char *base);
int	ft_atoi_base(char *str, char *base);

char	*zero_case(char *base)

{
	char	*ret;

	ret = malloc(sizeof(int) * 2);
	ret[0] = base[0];
	ret[1] = '\0';
	return (ret);
}

void	ft_rev_int_tab(char *str)

{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
}

char	*ft_itoa_base(long int nb, char *base)

{
	int			i;
	int			base_length;
	int			negative;
	static char	ret[34];

	base_length = ft_strlen(base);
	i = 0;
	negative = 0;
	if (nb < 0)
	{
		negative = 1;
		nb *= -1;
	}
	while (nb)
	{
		ret[i] = base[nb % base_length];
		nb /= base_length;
		i++;
	}
	if (negative)
		ret[i++] = '-';
	ret[i] = '\0';
	ft_rev_int_tab(ret);
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)

{
	long int	nb;
	char		*res;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (nb == 0)
		return (zero_case(base_to));
	res = ft_itoa_base(nb, base_to);
	return (res);
}
