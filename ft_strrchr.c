/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:40:38 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/27 07:42:26 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int				i;

	i = ft_strlen;

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

int	main(void)
{
	const char str[] = "hello";
	int	c = 'l';
	const char	*res = ft_strrchr(str,c);
	
	if (res)
	{
		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
		printf("the letter you called %c // index of the position : %td \n", c, res - str);
	}

	return 0;
}