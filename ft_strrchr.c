/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:18:53 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/30 11:30:29 by sukwon           ###   ########.fr       */
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