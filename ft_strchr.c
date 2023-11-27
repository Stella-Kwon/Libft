/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:38:48 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/27 07:16:32 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int				i;

	i = 0;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)character)
			return ((char *) &str[i]);
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
int	main(void)
{
	const char str[] = "hello";
	int	c = 'l';
	const char	*res = ft_strchr(str,c);
	
	if (res)
	{
		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
		printf("the letter you called %c // index of the position : %td \n", c, res - str);
	}

	return 0;
}