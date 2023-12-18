/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:09:22 by suminkwon         #+#    #+#             */
/*   Updated: 2023/12/18 18:21:48 by sukwon           ###   ########.fr       */
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
		return(ft_strdup("0"));
	length = length_count(n);
	res = (char *)malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	first_index(&res, n, length);
	return (res);
}

// int	main(void)
// {
// 	int	c;

// 	c = -2147483647 -1; // min일때는 2147483647 보다 많은 2147483648 이라서 그렇기 떄문에 n을 그 이상 넘어가는 수에서는 사용할수없다.
// 	printf("%d\n", length_count(c));
// 	printf("%s\n", ft_itoa(c));
// 	return (0);
// }


// static int	count_len(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n < 1)
// 		len++;
// 	while (n)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// /**
//  * Allocates (with malloc(3)) and returns a string
//  * representing the integer received as an argument.
//  * Negative numbers must be handled.
//  */
// char	*ft_itoa(int n)
// {
// 	long	nbr;
// 	int		len;
// 	char	*str;
// 	int		i;

// 	nbr = n;
// 	len = count_len(nbr);
// 	str = malloc((len + 1) * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	str[len] = '\0';
// 	if (nbr < 0)
// 	{
// 		str[0] = '-';
// 		nbr = -nbr;
// 	}
// 	i = len - 1;
// 	while (i >= 0 && nbr >= 0)
// 	{
// 		str[i--] = nbr % 10 + '0';
// 		nbr /= 10;
// 		if (nbr == 0)
// 			break ;
// 	}
// 	return (str);
// }