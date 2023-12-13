/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:37:12 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/13 15:36:17 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

// int main(void)
// {
//     t_list *new = ft_lstnew("hello, ");
//     t_list *lst = ft_lstnew("sumin");

//     ft_lstadd_front(&lst, new);

//     while (lst)//*lst = new로 바꿔주었지 계속 새로운게 앞으로가라고,
//     {
//         printf("%s", (char *)lst->content);
//         lst = lst->next; // NULL이 되면 멈추겠지
//     }
//     printf("\n");
// 	free(lst);
// 	free(new);
//     return (0);
// }