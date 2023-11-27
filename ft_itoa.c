/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:09:22 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/24 12:54:40 by suminkwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	length_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	n *= -1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	unsigned int	nbr;
	char			*res;

	nbr = 0;
	length = length_count(n);
	res = (char *)malloc(length + 1);
	if (!res)
		return (0);
	if (n < 0)
		nbr = n * -1;
	res[length] = '\0';
	while (nbr && length > 0)
	{
		res[length - 1] = (nbr % 10) + '0';
		nbr /= 10;
		length--;
	}
	if (n < 0)
		res[0] = '-';
	else
		res[0] = (nbr % 10);
	return (res);
}

int	main(void)
{
	int	c;

	c = -232;
	printf("%d\n", length_count(c));
	printf("%s\n", ft_itoa(c));
	return (0);
}
