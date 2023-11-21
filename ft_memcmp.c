/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:46:08 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/21 22:54:07 by suminkwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <string.h>

// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
    
// }

// int main()
// {
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hellp";

    int result = memcmp(str1, str2, 5);

    if (result == 0) {
        printf("The two strings are equal.\n");
    } else if (result < 0) {
        printf("The first differing character in str1 is smaller.\n");
    } else {
        printf("The first differing character in str1 is larger.\n");
    }

    return 0;
}
