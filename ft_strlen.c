/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:59:05 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/02 14:14:36 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

size_t  ft_strlen(const char *s)
{
    int c;
    
    c = 0;
    while (s[c] !='\0')
        c++;
    
    return c;
}

// int main(void)
// {
//     const char *s = " ";
//     printf("the normal strlen : %lu \n", strlen(s));
//     printf("My ft_strlen : %lu \n", ft_strlen(s));
//     return 0;
// }