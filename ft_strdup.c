/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:40:27 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/27 05:52:23 by suminkwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *str)
{
    char    *res;
    int i;
    
    res = (char *)malloc(sizeof(str));
    if(!res || !str)
        return NULL
    i = 0;
    while(str[i] != '\0')
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main()
{
    const char *original = "Hello, World!";

    // strdup을 사용하여 문자열 복제
    char *duplicate = strdup(original);

    // 복제된 문자열 사용
    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
    }
    else
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // 복제된 문자열의 메모리 해제
    free(duplicate);

    return 0;
}
