
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:23:38 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/13 10:07:00 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
void * ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = -1;
    // if (n > ft_strlen(dst)) {
    //     fprintf(stderr, "error: 'ft_memcpy' will always overflow; destination buffer has size %zu, but size argument is %zu\n", sizeof(dst), n);
    //     exit(EXIT_FAILURE);
    // }
    while(++i < n)
        *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
    return (dst);
}

// restrict를 사용하면 컴파일러는 해당 포인터가 가리키는 메모리 영역에 대한 
// 다른 포인터들이 접근하지 않을 것으로 가정하고 최적화를 수행할 수 있습니다.
// 이는 컴파일러가 특정 최적화를 적용함으로써 성능 향상을 이끌어낼 수 있는 상황에서 특히 유용합니다.
// restrict를 사용할 때 주의해야 합니다. 
// 만약 프로그래머가 restrict를 잘못 사용하여 실제로 겹치는 메모리 영역에 대한
// 제약을 걸면, 예측할 수 없는 동작이 발생할 수 있습니다. 
// 즉, restrict는 프로그래머가 컴파일러에게 "이 포인터는 다른 어떤 포인터와도 겹치지 않는다"는 보장을 제공하는 것이므로,
// 이 보장이 유지되어야 합니다.









//char *dst = "hello";와 같이 문자열 리터럴을 가리키는 포인터로는 
// 해당 문자열을 수정하려고 시도하면 예기치 않은 동작이나 오류가 발생할 수 있습니다.
// 그렇기 때문에 동적할당 malloc을 하던지 배열로 줘야한다.

// 그리고 str일때는 전체 문장이 하나로 취급되어 printf하면 하나씩 돌려서 전체가 나오지만..
// int의 배열일땐 for문으로 하나한 프린트 해줘야 나옴.

//memcpy원래 겹치면 안해주는게 맞는데... 그래도 결과가 잘 반영되서 나오지만 데이터 보존이 안될수도잇다.

// int main(void)
// {
//     char dst[] = "hello";
//     // char *src = dst + 1;
//     char src[] = "min";
//     printf("%s\n", dst);
//     printf("%lu\n",sizeof(dst));
//     printf("%s\n",src);
//             // printf("%lu\n",sizeof(src));//포인터이기 때문에 8바이트나오지만
//             // printf("%s\n", memcpy(dst,src,7));//여기서는 src가 가리키는 메모리에서 5바이트를 dst복사하는것 : 단순히 메모리르 복사하기때문에 무관.
//     printf("%s\n",ft_memcpy(dst,src,7));



//     // int dst[5] = {18, 5, 5, 6, 1};
//     // int *src = dst + 1;
//     // memcpy(dst,src, 3 * sizeof(int));//만약 3개의 int바이트만 src에서 커피 해주고 싶을때
//     // for(int i = 0; i < 5; i++){
//     //     printf("%d ", dst[i]);
//     // }
//     // printf("\n");
//     // return 0;
// }



// 멜록사용해서 구현 
// #include <stdlib.h>
// int main() {
//     char *dst = malloc(6);  // 메모리 동적 할당
//     char *src;

//     if (dst == NULL) {
//         // 동적 할당 실패
//         return 1;
//     }

//     // 할당해준 dst위치에 문자열 복사
//     strcpy(dst, "hello");

//     // src에 dst+1의 주소를 할당
//     src = dst + 1;

//     // 메모리 수정
//     dst[0] = 'X';

//     // 변경된 값을 출력
//     printf("%s\n", dst);
//     printf("%s\n", src);

//     // 메모리 해제
//     free(dst);

//     return 0;
// }




