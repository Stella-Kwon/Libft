/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:52:35 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/07 12:37:22 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || !n)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main() 
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Hellc";
// 	int result = ft_strncmp(s1, s2, 5);

// 	if (result == 0) {
// 		printf("Both strings are equal.\n");
// 	} else if (result < 0) {
// 		printf("s1 is less than s2. : %d \n", result);
// 	} else {
// 		printf("s1 is greater than s2: %d \n", result);
// 	}

// 	return 0;
// }
