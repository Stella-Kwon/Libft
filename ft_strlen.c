/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:59:05 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/27 06:36:48 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

// int main(void)
// {
//     const char *s = " ";
//     printf("the normal strlen : %lu \n", strlen(s));
//     printf("My ft_strlen : %lu \n", ft_strlen(s));
//     return 0;
// }