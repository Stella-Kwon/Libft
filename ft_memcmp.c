/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:46:08 by suminkwon         #+#    #+#             */
/*   Updated: 2023/12/15 11:25:03 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	// if(ft_strlen(s1) == 0 || ft_strlen(s2) == 0|| s1 == s2)
	//     return 0;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			// return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
			return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*point_s1;
// 	unsigned char	*point_s2;

// 	point_s1 = (unsigned char *)s1;
// 	point_s2 = (unsigned char *)s2;
// 	while (n--)
// 	{
// 		if (*point_s1 != *point_s2)
// 			return (*point_s1 - *point_s2);
// 		point_s1++;
// 		point_s2++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	const char s1[] ="hello";
// 	const char s2[] = "hellp";

// 	int result = ft_memcmp(s1, s2, 5);
// 	// int result = memcmp(s1, s2, 5);
// 	if (result == 0)
// 		printf("%s","2strings are equal\n");
// 	else if(result < 0)
// 		printf("s1 is smaller than s2");
// 	else
// 		printf("s2 is smaller than s1");
// 	printf("the value return : %d\n", result);
// 	return 0;
// }

