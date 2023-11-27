/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:25:20 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/27 11:36:38 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	ptr = (void *)malloc(num_elements * element_size);
	if (!ptr)
		return (0);
	ft_bzero (ptr, num_elements * element_size);
	return (ptr);
}

int	main(void)
{
	size_t	num_e;
	size_t	size_e;
	int	*arr;

	num_e = 5;
	size_e = sizeof(int);
	arr = (int *)calloc(num_e, size_e);
	for (size_t i = 0; i < num_e; i++)
		printf("%d ", arr[i]);
	free(arr);
	return (0);
}