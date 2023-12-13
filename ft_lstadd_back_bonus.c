/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:32:19 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/13 15:38:34 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_last;


	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		temp_last = ft_lstlast(*lst);
		temp_last -> next = new;
	}
}

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew("life");
// 	t_list	*new = ft_lstnew("what a ");
// 	t_list 	*last = ft_lstnew("!");

// 	ft_lstadd_front(&lst, new);
// 	ft_lstadd_back(&lst, last);
// 	while (lst)
// 	{
// 		// ft_lstadd_back_bonus.c:42:16: error: format specifies type 'char *' but the argument has type 'void *' [-Werror,-Wformat]
//     	// printf("%s", lst ->content);
// 		printf("%s", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// 	free(lst);
// 	free(new);
// 	free(last);
// 	return(0);
// }