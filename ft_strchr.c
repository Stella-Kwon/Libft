/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:38:48 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/15 13:35:19 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "hello";
// 	int	c = 'l';
// 	const char	*res = ft_strchr(str,c);
	
// 	if (res)
// 	{
// 		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
// 		printf("the letter you called %c // index of the position : %td \n", c, res - str);
// 	}

// 	return 0;
// }