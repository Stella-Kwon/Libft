/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:38:48 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/01 19:23:14 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;

	i = 0;

	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
	// 이런식으로 포인터 하나하나씩으로 움직여서 건네주던지
	// 1.
	// while (str[i] != '\0')
	// {
	// 	if (str[i] == (unsigned char)character)
	// 		return ((char *) (str + i));
	// 	i++;
	// }
	// 2.
	// 	while (*str)
	// {
	// 	if (*str == (unsigned char) character)
	// 		return ((char *)str);
	// 	str++;
	// }
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