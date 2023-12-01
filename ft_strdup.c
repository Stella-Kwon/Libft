/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:40:27 by suminkwon         #+#    #+#             */
/*   Updated: 2023/12/01 17:08:50 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!res || !s1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	const char	*original;
// 	char		*duplicate;

// 	original = "Hello, World!";
// 	// strdup을 사용하여 문자열 복제
// 	duplicate = strdup(original);
// 	// 복제된 문자열 사용
// 	if (duplicate != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Duplicate: %s\n", duplicate);
// 	}
// 	else
// 	{
// 		fprintf(stderr, "Memory allocation failed.\n");
// 		return (1);
// 	}
// 	// 복제된 문자열의 메모리 해제
// 	free(duplicate);
// 	return (0);
// }
