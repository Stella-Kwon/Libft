/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:45:17 by sukwon            #+#    #+#             */
/*   Updated: 2023/11/27 07:46:29 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src && len == 0)
		return (dst);
	// if src is in the middle of dst, copy from backwards
	i = len + 1;
	if (dst > src && dst + len < src)
	{
		//str이기때문에
		while (--i >= 0)
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

#include <stdio.h>
int main()
{
	char dst[6] = "hello";
	char *src = dst + 2; 
		// 이렇게 겹치게 해주는 건 가능한데 다른 값을 지정해줄수가 없기때문에. 
	// strncpy(src, "src", sizeof(dst)); 이렇게 strcpy사용해서 지정해주는데 
		//그럼 dst값이 바뀌게 된다. 즉 src값은 사라짐..
	
	printf("%s\n", dst);  // 출력: hello
	printf("%s\n", src);  // 출력: ello
	// memmove(dst,src,sizeof(dst));

	ft_memmove(dst,src,sizeof(dst));
	printf("%s\n", dst);
	return 0;
	
	// char dst[6] = "hello";
	// char src[] = "yellow";
	// printf("%s\n", dst);  // 출력: hello
	// printf("%s\n", src);  // 출력: ello
	// memmove(dst,src,sizeof(dst)-1);
	// dst[sizeof(dst)-1] = '\0';
	// printf("%s\n", dst);
	// return 0;
}