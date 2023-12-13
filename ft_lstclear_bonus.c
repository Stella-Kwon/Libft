/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:08:11 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/13 17:00:51 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// static void	delete_content(void *content)
// {
// 	if (!content)
// 		return ;
// 	//free(content); //하는 순간 버스에러 에러난다...
// 	content = NULL;
// }
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	
	if (!lst | !(*lst) | !del)
		return ;
	while(*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("hello,");
// 	t_list *new1 = ft_lstnew(" nice");
// 	t_list *new2 = ft_lstnew(" to meet you.");
	
	
// 	ft_lstadd_back(&lst,new1);
// 	ft_lstadd_back(&lst,new2);

// 	t_list *temp = lst; //첫주소 저장
	
// 	while (temp)
// 	{
// 		printf("%s",(char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&lst,delete_content);
// 	printf("\n after erasing\n");
// 	while (lst)
// 	{
// 		printf("%s",(char *)lst->next);
// 		lst = lst->next;
// 	}
// 	return 0;
// }