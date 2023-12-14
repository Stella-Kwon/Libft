/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:03:06 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/14 16:18:45 by sukwon           ###   ########.fr       */
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

// static void function(void *content)
// {
//     if (!content)
//         return;

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
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// To check the result properly i have changed the ft_lstiteri funciton 
//as there is no way to check through main.

//1.
// t_list	*ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list *start;
	
// 	if (!lst || !f)
// 		return NULL;
// 	start = lst;  // 리스트의 시작을 복사
	
// 	while (lst)
// 	{
// 		f(lst->content);
// 		lst = lst->next;
// 	}
// 	return start; 
// }

// int	main()
// {
// 	char a[] = "hello,";
// 	char b[] = "my name is";
// 	char c[] = " sumin kwon.";
// 	t_list *lst = ft_lstnew(a); 
// 	t_list *new1 = ft_lstnew(b);
// 	t_list *new2 = ft_lstnew(c);
	
// 	ft_lstadd_back(&lst, new1);
// 	ft_lstadd_back(&lst, new2);
	
// 	t_list *temp = ft_lstiter(lst,function);

// 	while(temp)
// 	{
// 		printf("%s", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&lst,delete_content);
// 	printf("\n");
// 	return 0;
// }

//2.
// void	ft_lstiter(t_list **lst, void (*f)(void *))
// {
// 	if (!lst ||!(*lst) || !f)
// 		return ;
// 	while (*lst)
// 	{
// 		f((*lst)->content);
// 		*lst = (*lst)->next;
// 	} 
// }

// int	main()
// {
// 	// 수정할수없는..리터럴값을 넣어줬다.
// 	// t_list *lst = ft_lstnew("hello,"); 
// 	// t_list *new1 = ft_lstnew("my name is");
// 	// t_list *new2 = ft_lstnew(" sumin kwon.");

// 	//수정할 수 있게 변경
// 	char a[] = "hello,";
// 	char b[] = "my name is";
// 	char c[] = " sumin kwon.";
// 	t_list *lst = ft_lstnew(a); 
// 	t_list *new1 = ft_lstnew(b);
// 	t_list *new2 = ft_lstnew(c);
// 	t_list *temp = lst; //lstclear을 위한
	
// 	ft_lstadd_back(&lst, new1);
// 	ft_lstadd_back(&lst, new2);
	
// 	ft_lstiter(&lst,function);

// 	while(temp)
// 	{
// 		printf("%s", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&lst,delete_content);
// 	printf("\n");
// 	return 0;
// }