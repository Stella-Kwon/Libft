/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:25:20 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/24 13:34:39 by suminkwon        ###   ########.fr       */
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
	ft_bzero (ptr,num_elements * element_size);
	return (ptr);
}
