/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:08:44 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/21 22:44:37 by suminkwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <string.h>


void *  ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i < n) 
    //(n이 strlen아 같다고 생각해야되기떄문에 =은 안됌.)
    {
        if(*(unsigned char *)(s + i) == (unsigned char)c)
            return((void *)(s+i));
        i++;
    }
    return (NULL);
    
}
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*temp;

// 	temp = (unsigned char *)s;
// 	while (n--)
//     // 0이되면 false여서 whilel loop를 돌지않음.
// 	{
// 		if (*temp == (unsigned char)c)
// 			return ((void *)temp);
// 		temp++;
// 	}
// 	return (NULL);
// }
int main(void)
{
    const char str[] = "Hello, World!";
    int c = 'H';
    
    const void *result = ft_memchr(str, c, ft_strlen(str));
    if (result != NULL) {
        printf("'%c' found at position: %ld\n", c, (char *)result - str + 1);
        //-str + 1을 해주는 이유는 바로 index로 우리가 0부터 세기때문에 
        // 원래 str위치가 2000번이었다면 받은 result값은 2005라면 + 1을 해서 0번째의 순서를 추가해준것
        // 즉 2000번을 세어줘야 1 2 3 4 5 => 6번째로 나오기떄문이다.
    } else {
        printf("'%c' not found in the string.\n", c);
    }
    return 0;
}
