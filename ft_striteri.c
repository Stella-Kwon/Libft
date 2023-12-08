/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:00:26 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/08 15:07:20 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void function(unsigned int i, char* s)
{
	s[i] += i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	//char			*res; // const값도 아니기떄무넹 굳이 포인터로 간접접근해서 s의 값을 바꿔줄이유가없음. 어차피 원본이 변경되는것이기떄문에.
	unsigned int	i;
	i = 0;
	while (i < ft_strlen(s))
	{
		f(i,s);
		i++;
	}
	s[i] = '\0';
	printf("%s\n", s);
}

int	main(void)
{
	// char *s = "HELLO";
	char s[] = "HELLO";
	ft_striteri(s,function);
	return (0);
}