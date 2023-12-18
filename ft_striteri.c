/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:00:26 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/18 21:13:24 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void function(unsigned int i, char* s)
// {
// 	s[i] += i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;
	
	if (!s || !f)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, s);
		i++;
		s++;
	}
	*s = '\0';
}

// int	main(void)
// {
// 	// char *s = "HELLO";
// 	char s[] = "HELLO";
// 	ft_striteri(s,function);
// 	return (0);
// }