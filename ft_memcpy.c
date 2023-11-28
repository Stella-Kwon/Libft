/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:23:38 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/27 14:07:17 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	// if (n > ft_strlen(dst)) {
	//     fprintf(stderr, "error: 'ft_memcpy' will always overflow; destination buffer has size %zu, but size argument is %zu\\n", sizeof(dst), n);
	//     exit(EXIT_FAILURE);
	// } this is just for showing an error message in console
	while (++i < n)
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	return (dst);
}

// int main(void)
// {
//     char dst[] = "hello";
//     // char *src = dst + 1;
//     char src[] = "min";
//     printf("%s\n", dst);
//     printf("%lu\n",sizeof(dst));
//     printf("%s\n",src);
//     // printf("%lu\n",sizeof(src));//포인터이기 때문에 8바이트나오지만
// 	// printf("%s\n", memcpy(dst,src,7));//여기서는 src가 가리키는 메모리에서 5바이트를 dst복사하는것 : 단순히 메모리르 복사하기때문에 무관.
//     char *res = (char *)ft_memcpy(dst,src,7);
// 	printf("%s\n",res);

// 	//int로 구현할때
// 	//int dst[5] = {18, 5, 5, 6, 1};
//     // int *src = dst + 1;
//     // memcpy(dst,src, 3 * sizeof(int));//만약 3개의 int바이트만 src에서 커피 해주고 싶을때
//     // for(int i = 0; i < 5; i++){
//     //     printf("%d ", dst[i]);
//     // }
//     // printf("\n");
//     return 0;
// }





