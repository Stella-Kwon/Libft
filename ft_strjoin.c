/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:48:10 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/01 11:13:28 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	res = (char *)malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, sizeof(res));
	// ft_strlcat(res, s2, sizeof(res));
	ft_strlcat(res, s2, s1_len + s2_len + 1);
	return (res);
}

int	main(void)
{
	char const *s1 = "Hello, ";
	char const *s2 = "World!";
	char *res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	free(res);
	return (0);
}