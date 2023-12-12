/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:32:19 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/12 15:59:59 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new) //lst는 **lst의 주소가 NULL인가
        return ;
    if (!(*lst)) //lst가 가르키는 주소에 있는 값이 NULL -> lst->next를 말한다. 맨뒤로 보내줘야하기때문에 해준다.
        *lst = new;
    else
    {
        
    }
}

int main(void)
{
    
    return 0;
}