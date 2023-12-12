/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:32:19 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/12 19:13:31 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	main(void)
{
	t_list	*lst = ft_lstnew("life");
	t_list	*new = ft_lstnew("what a ");
	t_list 	*last = ft_lstnew("!");

	ft_lstadd_front(&lst, new);
	ft_lstadd_back(&lst, last);
	while (lst)
	{
		printf("%s", lst ->content);
		lst = lst->next;
	}
	printf("\n");
	return(0);
}