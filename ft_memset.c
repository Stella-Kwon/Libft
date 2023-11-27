/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:42:15 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/27 06:36:07 by sukwon           ###   ########.fr       */
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
	return (b);
}

//void = 반환값이 없는 함수.
//초기화 작업일때 종료언급용으로 return값을 돌려줄 수 있다. => 그리고 그냥 기존의 memset반환값이 다시 b의 주소를 가르키는것이 답

// b[i] = c;
// b를 배열처럼 직접 사용하려고 하면 컴파일 오류가 발생합니다. 이는 b가 void * 형식의 포인터로 선언되었기 때문
//void * 포인터는 일반적으로 메모리 주소를 가리키고 있으며 데이터 타입 정보가 없습니다. 이것은 임의의 데이터 타입을 가리킬 수 있지만,
//  void * 포인터를 사용하여 해당 메모리를 직접 엑세스하려고 하면 컴파일러가 경고 또는 오류를 발생시킵니다.
//그래서 타입캐스팅을 해주던 포인터를 움직여야한다.

// size_t len : 총 얼마만큼의 바이트를 => 주로 sizeof(str)나타낸다고 보면된다. 즉, 총 바이트들
// :  그래서 int라면 int만큼의 바이트를 count해서 그것만큼

// int c :  어떤 바이트의 크기로 =>  주로 0으로 초기화
// 여기서 int로 받게되면 데이터 손실이 일어나게될수도 있다 왜냐 1바이트가 아닌 4 또는 8바이트 int로 받을수도 있기떄문에
//Unsigned char로 타입캐스팅을 해주어 둘다 매칭(

// void * str: 포인터를 바꿀것인지
// 를 판단한다.


int main(void)
{
	int myArray[10];
	printf("sizeof(): %lu\n", sizeof(myArray));
	// memset(myArray, 0, sizeof(myArray));
	// myArray[i] 값이 0으로 설정된다면 => 해당 요소가 초기화된 것, 즉 0또는 null로 표기된다.
	// sizeof 연산자는 컴파일 타임에 평가되며, 반환 값은 정수 형태이며, 바이트 단위의 크기를 나타낸다
	ft_bzero(myArray,sizeof(myArray));
	for (int i = 0; i < 10; i++) {
		printf("print : %d ", myArray[i]); // 0 0 0 0 0 0 0 0 0 0 출력
	}
	
	return 0;
}