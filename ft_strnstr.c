/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:08:25 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/15 16:49:50 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	if (ft_strlen(needle) == 0) //needle = ""
		return ((char *)haystack);
	if (len == 0 || ft_strlen(haystack) == 0)
		return (NULL);
	while (i < len  && *(haystack + i) != '\0')
	{
		start = i;
        j = 0;
		while (i < len && *(haystack + i) == *(needle + j)&& *(needle + j) != '\0')
		{
			//i < len 기준을 또 주어야 넘어가지않는다.
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
			return ((char *)(haystack + start));
		i = start + 1; //그 다음 수로 다시 고정.
	}
	return (NULL);
}
// #include <stddef.h>

// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
//     size_t i;
//     size_t start;

//     i = 0;
//     if (ft_strlen(needle) == 0)
//         return ((char *)haystack);
//     if (len == 0 || ft_strlen(haystack) == 0)
//         return (NULL);

//     while (i < len && *(haystack + i) != '\0')
//     {
//         start = i;
//         size_t j = 0;

//         while (i < len && *(haystack + i) == *(needle + j) && *(needle + j) != '\0')
//         {
//             i++;
//             j++;
//         }

//         if (*(needle + j) == '\0') // needle이 haystack 내에 존재하는 경우
//             return ((char *)haystack + start);

//         i = start + 1; // 다시 탐색을 시작할 위치를 조정
//     }

//     return (NULL);
// }

// int	main(void)
// {
// 	const char *haystack = "Hello, world!";
// 	const char *needle = "ll";
// 	char *result = ft_strnstr(haystack, needle, -2); // -로 들어가면 전체 탐색이 이루어진다 
// 	// char *result = ft_strnstr(haystack, needle, ft_strlen(haystack));
// 	if (result != NULL)
// 		printf("Found at index : %ld and %s\n", result - haystack, result);
// 	else
// 		printf("Not found\n");
// 	return 0;
// }