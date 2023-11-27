/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:03 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/02 11:38:55 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

// int main(void)
// {
//     printf("is it a digit number character? if not return 0 : %d ", ft_isdigit('5'));
//     printf("is it a digit number character? if not return 0 : %d ", ft_isdigit(0));
//     return 0;
// }