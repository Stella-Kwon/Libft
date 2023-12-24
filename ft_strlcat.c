/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:38:31 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/18 23:41:20 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
		*(dst + srclen + dstlen) = '\0';
	}
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen);
		*(dst + dstsize - 1) = '\0';
	}
	return (dstlen + srclen);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	unsigned int	i;
// 	unsigned int	dstlen;
// 	unsigned int	srclen;

// 	srclen = ft_strlen(src);
// 	if (dstsize == 0)
// 		return (srclen);
// 	dstlen = ft_strlen(dst);
// 	if (dstlen >= dstsize)
// 		return (dstsize + srclen);
// 	i = -1;
// 	while (i < (dstsize - dstlen - 1) && src[I])
    	{
        	dst[i + dstlen] = src[i];
       		i++;
   	}
// 	dst[i + dstlen] = '\0';
// 	return (dstlen + srclen);
// }

// int main() {
// 	char destination[20] = "hello, ";
// 	char ft_destination[20] = "hello, ";
// 	const char *source = "wrd!";
	
// 	printf("before_ft: lenth of dest String: %lu\n", strlen(ft_destination));
// 	printf("before: lenth of dest String: %lu\n\n", strlen(destination));

// 	size_t concatenated_length = strlcat(destination, source, 10);
// 	size_t concatenated_length1 = ft_strlcat(ft_destination, source, 10);

	
// 	printf("after_Ft: lenth of dest String: %lu\n", strlen(ft_destination));
// 	printf("after: lenth of dest String: %lu\n\n", strlen(destination));
	
// 	printf("ft_Concatenated String: %s\n", ft_destination);
// 	printf("Concatenated String: %s\n\n", destination);
	
// 	printf("ft_ :::Length of Concatenated String: %zu\n", concatenated_length1);
// 	printf("Length of Concatenated String: %zu\n", concatenated_length);
// 	return 0;
// }
