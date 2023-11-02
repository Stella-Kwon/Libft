/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:23:01 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/02 11:40:13 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_isalnum(int c)
// {
//     if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
//         return c;
//     return 0;   
// }

//esier way and boolean way, it was returning 1 even if the return value was set to 'c'value. 
// but the original function should return 1 if it is true so changed all the function to return 1 when it is true.
int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
    
int main(void)
{
    printf("if there is any characters return number other than 0 : %d\n", ft_isalnum('d'));
    printf("if there is any characters return number other than 0 : %d\n", ft_isalnum(1));
    printf("if there is any characters return number other than 0 : %d\n", ft_isalnum('8'));
    printf("if there is any characters return number other than 0 : %d\n", ft_isalnum('5'));
    return 0;
}