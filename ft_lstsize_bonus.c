/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:01:25 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/12 16:58:39 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}

// int main(void)
// {
// 	t_list *lst = ft_lstnew("to meet you!");
// 	t_list *new1 = ft_lstnew("nice ");

// 	// ft_lstadd_front(&lst,new);
// 	// ft_lstadd_front(&lst,new);// 같은 노드를 두 번 추가하는 문제 발생 
// 	// while (lst) //lst부를때 결국 next가 new를 부르고 new->next가 또 lst가나오니까 무한루프
// 	// {
// 	// 	printf("%s\n", lst->content);
// 	// 	lst = lst->next;
// 	// }
	
// 	t_list *new2 = ft_lstnew("to see you!");

//     ft_lstadd_front(&lst, new1);
//     ft_lstadd_front(&lst, new2);

//     // 출력 루프
//     // t_list *current = lst;
// 	printf("%d\n", ft_lstsize(lst));
//     while (lst)
//     {
//         printf("%s\n",lst->content);
//        lst =lst->next;
//     }
// 	//printf("%d\n", ft_lstsize(lst)); // 밑에하면 0이 나옴 이미 끝까지가서
//     printf("\n");
//     return 0;	
// }