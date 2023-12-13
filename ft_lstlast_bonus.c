/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:01:21 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/13 15:36:54 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL) 
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list *lst = ft_lstnew("life");
// 	t_list *new = ft_lstnew("what a ");
	
// 	ft_lstadd_front(&lst, new);
// 	t_list *res = ft_lstlast(lst);
// 	while (lst)
// 	{
// 		printf("%s", lst ->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// 	printf("%s\n",res->content);
// 	printf("\n");
// 	free(lst);
// 	free(new);
// 	return(0);
// }