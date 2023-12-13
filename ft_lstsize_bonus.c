/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:01:25 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/13 15:37:42 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
//	free(lst);
//	free(new1);
//	free(new2);
//     return 0;	
// }