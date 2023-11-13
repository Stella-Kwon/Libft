
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

void *  ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (dst == src && len == 0)
        return dst;
    // if src is in the middle of dst, copy from backwards
    i = len+1;
    if (dst > src && dst + len < src)
    {
        while( --i >= 0)//str이기때문에
            *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
    }
    else
        ft_memcpy(dst,src,len);
    return (dst);
}

// \0 도 1바이트차지한다. 문자열을 cpy나 move할때 꼭 이것도 고려해서 넣어줘야한다.
//sizeof()하면 \0까지 바이트로 쳐너 결과나와.
// int main()
// {
//     char dst[6] = "hello";
//     char *src = dst + 2; // 이렇게 겹치게 해주는 건 가능한데 다른 값을 지정해줄수가 없기때문에. 그럼 
//     // strncpy(src, "src", sizeof(dst)); 이렇게 다른값 지정해주는데 그럼 dst값이 바뀌어버려바로 
    
//     printf("%s\n", dst);  // 출력: hello
//     printf("%s\n", src);  // 출력: ello
//     // memmove(dst,src,sizeof(dst));

//     ft_memmove(dst,src,sizeof(dst));
//     printf("%s\n", dst);
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