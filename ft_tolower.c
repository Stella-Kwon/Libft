/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:12:17 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/14 18:46:24 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c < 91 && c > 64)
		return (c + 32);
	return (c);
}

// int	main()
// {
// 	int c = 'A';
// 	printf("%c", ft_tolower(c));
// 	return(0);
// }