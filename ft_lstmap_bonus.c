/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:14 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/18 22:29:44 by sukwon           ###   ########.fr       */
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

// static void *function(void *content)
// {
// 	void *temp;
	
//     if (!content)
//         return (NULL);
// 	temp = content;
//     if (sizeof(*(char *)content) == 1)
//     {
//         char *c = (char *)content;
//         while (*c != '\0')
//         {
//             *c += 1;
//             c++;
//         }
//     }
//     else if (sizeof(*(int *)content) == sizeof(int))
//     {
//         int *num = (int *)content;
//         (*num)++;
//     }
// 	return (temp);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
	t_list *head;
	t_list *new;
	
	if (!lst || !f || !del)
		return NULL;
	// head를 시작주소하기 위해 먼저 하나 만들어주기
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	new = head;
	// new = lst->next;
	lst = lst->next;
	while (lst)
	{
		//25줄을 줄이기 위해 if()안에다가 실행시키면 일단실행된후에 값이 NULL이면 블록안에 있는 ft_lstclear가 실행될것이다.
		if( !(new->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
			// break;			
		}
		new = new->next;	
		lst = lst->next;
	}
	return (head); 
}

// int main(void)
// {
// 	char a[] = "hello, ";
// 	char b[] = "have a nice ";
// 	char c[] = "a day!";
// 	t_list *lst = ft_lstnew(a);
// 	t_list *new1 = ft_lstnew(b);
// 	t_list *new2 = ft_lstnew(c);
// 	ft_lstadd_back(&lst, new1);
// 	ft_lstadd_back(&lst, new2);
// 	t_list *temp = lst;
// 	t_list *temp1 = lst;
// 	while(temp1)
// 	{
// 		printf("%s", (char *)temp1->content);
// 		temp1 = temp1->next;
// 	}
// 	t_list *res = ft_lstmap(lst, &function, delete_content);
// 	while(temp)
// 	{
// 		printf("%s", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&lst, delete_content);
// 	return 0;
// }