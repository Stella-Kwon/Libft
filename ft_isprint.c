/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:06:21 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/15 11:56:15 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(void)
// {
//     printf("isprintf: %d \n", isprint('f'));
//     printf("isprintf: %d \n", isprint(1));
//     printf("isprintf: %d \n", ft_isprint('f'));
//     printf("isprintf: %d \n", ft_isprint(1));
//     return 0;
// }