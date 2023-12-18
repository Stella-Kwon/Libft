
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:35:58 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/13 09:52:55 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == src)
		return (dst);
	if (len == 0)
		return (dst);
	i = 0;
	if (dest >= source)
	{
		while (i < len)
		{
			// printf("source[len - i]: %c\ndest[len - i]: %c\n", source[len - i],dest[len - i]);
			dest[len - i - 1] = source[len - i - 1];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len); 
	return (dst);
}

//\0 도 1바이트차지한다. 문자열을 cpy나 move할때 꼭 이것도 고려해서 넣어줘야한다.
//sizeof()하면 \0까지 바이트로 쳐너 결과나와.
// int main()
// {
//     char src[] = "hello";
//     char *dst = src + 2; // 이렇게 겹치게 해주는 건 가능한데 다른 값을 지정해줄수가 없기때문에. 그럼 
//     //strncpy(src, "src", sizeof(dst)); 이렇게 다른값 지정해주는데 그럼 dst값이 바뀌어버려바로 

//     // printf("%s\n", dst);  // 출력: hello
//     // printf("%s\n", src);  // 출력: ello
// 	printf("%td\n", dst-src);
//     memmove(dst,src,sizeof(src));
// 	printf("%s\n", dst);
// 	char src2 [] = "hello";
// 	char *dst2 = src + 2;
//     ft_memmove(dst2,src2,sizeof(src2));
//     printf("%s\n", dst2);
//     return 0;

//     // char dst[6] = "hello";
//     // char src[] = "yellow";
//     // printf("%s\n", dst);  // 출력: hello
//     // printf("%s\n", src);  // 출력: ello
//     // memmove(dst,src,sizeof(dst)-1);
//     // dst[sizeof(dst)-1] = '\0';
//     // printf("%s\n", dst);
//     // return 0;
// }