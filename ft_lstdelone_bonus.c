/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:26:23 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/13 17:00:35 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// static void	delete_content(void *content) // 첨에는 노드를 주려고했는데 void *로는 struct를 받을 수 없는 타입이라.
// {
// 	if (!content)
// 		return ;
// 	content = NULL;
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst | !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

// int	main(void)
// {
//     t_list *lst = ft_lstnew("life");
//     t_list *new = ft_lstnew("what a ");
//     t_list *last = ft_lstnew("!");
//     t_list *last2 = ft_lstnew(" ohyeah");

//     ft_lstadd_front(&lst, new);
//     ft_lstadd_back(&lst, last);
//     ft_lstadd_back(&lst, last2);

//     t_list *current = lst; // 리스트 첫번째 위치를 저장
//     while (current)
//     {
//         printf("%s", (char *)current->content);
//         t_list *next = current->next;
//         ft_lstdelone(current, delete_content); 
// 		// 호출자에 lst=NULL이 반영되진않겠지만 lst위치가 움직이기떄문에
//         current = next;
//     }
//     printf("\n");
//     return 0;
// }