/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:54:13 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/29 18:19:27 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	getmin(size_t	len, size_t	max)
{
	if (len > max)
		return (max);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	printf("1 : %zu\n", len);
	if (!s)
		return (NULL);
	printf("2 : %zu\n", len);

	if (start > ft_strlen(s) - 1 || len == 0)
		return (ft_strdup(""));
	printf("3 : %zu\n", len);

	len = getmin(len, ft_strlen(s) - start);
	printf("4: getmin : %zu\n", len);

	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	printf("5: getmin : %zu\n", len);

	i = 0;
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	printf("%s\n",res);
	printf("6: getmin : %zu\n", len);
	return (res);
}

int main(void)
{
	// const char s[ 2147483647] = "ㄴㄴㄴ";	//stackoverflow error occur
	const char *s = "hello";
	unsigned int start = 2;
	size_t len = 5;
	printf("%d\n",start);
	fflush(stdout);

	char *res = ft_substr(s,start, len);
	printf("%s",res);
	free(res);
	return 0;
}