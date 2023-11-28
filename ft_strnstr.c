/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:08:25 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/28 11:08:14 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	start;

	i = 0;
	if (len == 0 || ft_strlen(haystack) == 0)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && *(haystack + i) != *(needle))
		i++;
	if (i == len)
		return (NULL);
	// printf("i = %zu \n" , i);
	start = i;
	while (i < len && *(needle) != '\0')
	{
		if (*(haystack + i) != *(needle))
			return (NULL);
		i++;
		needle++;
	}
	return ((char *)haystack + start);
}

int	main(void)
{
	const char *haystack = "Hello, world!";
	const char *needle = "ll";
	char *result = ft_strnstr(haystack, needle, strlen(haystack));

	if (result != NULL)
		printf("Found at index : %ld and %s\n", result - haystack, result);
	else
		printf("Not found\n");
	return 0;
}