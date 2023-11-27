/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:18:53 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/27 11:23:49 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int				i;

	i = ft_strlen(str) -1;

	if (!str)
		return (NULL);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)character)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	const char str[] = "hello";
	int	c = 'h';
	const char	*res = ft_strrchr(str,c);
	
	if (res)
	{
		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
		printf("the letter you called %c // index of the position : %td \n", c, res - str);
	}

	return 0;
}