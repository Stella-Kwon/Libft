/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:18:53 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/01 19:23:06 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s) -1;

	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "hello";
// 	int	c = 'h';
// 	const char	*res = ft_strrchr(str,c);
	
// 	if (res)
// 	{
// 		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
// 		printf("the letter you called %c // index of the position : %td \n", c, res - str);
// 	}

// 	return 0;
// }