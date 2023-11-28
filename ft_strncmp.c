/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:52:35 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/28 09:58:38 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 || !str2 || !n)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main() 
{
	char str1[] = "Hello";
	char str2[] = "Hellc";
	int result = ft_strncmp(str1, str2, 5);

	if (result == 0) {
		printf("Both strings are equal.\n");
	} else if (result < 0) {
		printf("str1 is less than str2. : %d \n", result);
	} else {
		printf("str1 is greater than str2: %d \n", result);
	}

	return 0;
}
