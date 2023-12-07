/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:42:15 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/07 15:41:47 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

//하나의 메모리당 1바이트를 가진다
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		*(unsigned char *)(b + i) = (unsigned char)c;
		// ((unsigned char *)b)[i] = (unsigned char)c;
		// b[i] = (unsigned char)c;//incomplete type 'void' is not assignable 라고 나옴 에러가
		//*(b + i) = (unsigned char)c; //incomplete type 'void' is not assignable 라고 나옴 에러가
	return (b);
}

// int main(void)
// {
// 	int myArray[10];
// 	printf("sizeof(): %lu\n", sizeof(myArray));
// 	// memset(myArray, 0, sizeof(myArray));
// 	// myArray[i] 값이 0으로 설정된다면 => 해당 요소가 초기화된 것, 즉 0또는 null로 표기된다.
// 	// sizeof 연산자는 컴파일 타임에 평가되며, 반환 값은 정수 형태이며, 바이트 단위의 크기를 나타낸다
// 	ft_bzero(myArray,sizeof(myArray));
// 	for (int i = 0; i < 10; i++) {
// 		printf("print : %d ", myArray[i]); // 0 0 0 0 0 0 0 0 0 0 출력
// 	}
	
// 	return 0;
// }