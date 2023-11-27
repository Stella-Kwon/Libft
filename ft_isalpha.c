/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:13:29 by skwon2            #+#    #+#             */
/*   Updated: 2023/11/02 11:38:48 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalpha(int c)
{
    // if ((c >= 101 && c <=132) || (c >= 141 && c <= 172))
    //octal일지 decimal일지 모르겠음.. man에서는 octal로 써있었는데.. 그래서 'a'명시해주는게 좋은거같애
    if ((c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("is this an alphaet? if not give me 0: %d", ft_isalpha('a'));
//     printf("is this an alphaet? if not give me 0: %d", ft_isalpha(101));
//     return 0;
// }