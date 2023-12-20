/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:09:22 by suminkwon         #+#    #+#             */
/*   Updated: 2023/12/20 10:10:25 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	length_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	first_index(char **res, int n, int length)
{
	long long	nbr;

	nbr = n;
	if (n < 0)
		nbr = nbr * -1;
	(*res)[length] = '\0';
	while (--length > 0)
	{
		(*res)[length] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		(*res)[0] = '-';
	else
		(*res)[0] = (nbr % 10) + '0';
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	char			*res;

	if (n == 0)
		return (ft_strdup("0"));
	length = length_count(n);
	res = (char *)malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	first_index(&res, n, length);
	return (res);
}
