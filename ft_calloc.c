/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:25:20 by suminkwon         #+#    #+#             */
/*   Updated: 2023/12/14 18:43:45 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero (ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	num_e;
// 	size_t	size_e;
// 	int	*arr;

// 	num_e = 5;
// 	size_e = sizeof(int);
// 	arr = (int *)calloc(num_e, size_e);
// 	for (size_t i = 0; i < num_e; i++)
// 		printf("%d ", arr[i]);
// 	free(arr);
// 	return (0);
// }