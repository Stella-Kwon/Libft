/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:54:13 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/30 10:16:17 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) - 1 || len == 0)
		return (ft_strdup(""));
	len = getmin(len, ft_strlen(s) - start);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

int main(void)
{
	// const char s[ 2147483647] = "ㄴㄴㄴ";	//stackoverflow error occur
	const char *s = "hello";
	unsigned int start = 2;
	size_t len = 5;
	char *res = ft_substr(s,start, len);
	printf("\n\n%s",res);
	free(res);
	return 0;
}