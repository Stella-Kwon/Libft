/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:38:31 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/28 15:46:50 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	// printf("sizeof(dst) : %lu\n", sizeof(dst));
	if (size == 0)
		return (srclen);
	if (size < dstlen -1)
		return (srclen + size);
	if (size >= dstlen -1)
	{
		while (i < (size - dstlen - 1))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	dstlen;
// 	size_t	srclen;

// 	srclen = ft_strlen(src);
// 	if (dstsize == 0)
// 		return (srclen);
// 	dstlen = ft_strlen(dst);
// 	if (dstlen >= dstsize)
// 		return (dstsize + srclen);
// 	if (srclen < dstsize - dstlen)
// 		ft_memcpy(dst + dstlen, src, srclen + 1);
// 	else if (srclen >= dstsize - dstlen)
// 	{
// 		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
// 	}
// 	*(dst + dstsize - 1) = '\0';
// 	return (dstlen + srclen);
// }

int main() {
	char destination[20] = "hello, ";
	char ft_destination[20] = "hello, ";
	const char *source = "wrd!";
	
	printf("before_ft: lenth of dest String: %lu\n", strlen(ft_destination));
	printf("before: lenth of dest String: %lu\n\n", strlen(destination));

	size_t concatenated_length = strlcat(destination, source, 10);
	size_t concatenated_length1 = ft_strlcat(ft_destination, source, 10);

	
	printf("after_Ft: lenth of dest String: %lu\n", strlen(ft_destination));
	printf("after: lenth of dest String: %lu\n\n", strlen(destination));
	
	printf("ft_Concatenated String: %s\n", ft_destination);
	printf("Concatenated String: %s\n\n", destination);
	
	printf("ft_ :::Length of Concatenated String: %zu\n", concatenated_length1);
	printf("Length of Concatenated String: %zu\n", concatenated_length);
	return 0;
}
