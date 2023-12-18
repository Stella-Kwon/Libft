/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:18:53 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/18 11:51:54 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
	
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}


// int	main(void)
// {
// 	// const char str[] = "hel\0lo";
// 	const char str[] = "123456789";
// 	// int	c = '\0';
// 	int	c = 'a';
// 	const char	*res = ft_strrchr(str,c);
	
// 	if (res)
// 	{
// 		printf("the letter you called %c // address of point :%p\n", c, (void *)res);
// 		printf("the letter you called %c // index of the position : %td \n", c, res - str);
// 	}

// 	return 0;
// }

// #include <stdlib.h>
// #include <stdio.h>

// int main() {
//     char *src = ft_calloc(10, sizeof(char));
    
//     if (src == NULL) {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }

//     // electric_alloc 함수는 적절한 초기화를 수행해야 함
//     // 여기서 초기화를 확인하는 코드 추가

//     __builtin___strcpy_chk(src, "123456789", __builtin_object_size(src, 2 > 1 ? 1 : 0));
//     ft_strrchr(src, 'a');

//     free(src);  // 메모리 해제

//     src = ft_calloc(10, sizeof(char));
    
//     if (src == NULL) {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }

//     // electric_alloc_rev 함수도 적절한 초기화를 수행해야 함
//     // 여기서 초기화를 확인하는 코드 추가

//     __builtin___strcpy_chk(src, "123456789", __builtin_object_size(src, 2 > 1 ? 1 : 0));
//     ft_strrchr(src, 'a');

//     free(src);  // 메모리 해제

//     exit(0);
// }
