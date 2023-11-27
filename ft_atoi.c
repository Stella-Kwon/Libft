/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suminkwon <suminkwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:11:49 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/22 14:50:12 by suminkwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


static long long	check_res(const char *str)
{
	int		i;
	long long	res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 45 || str[i] == 43) && str[i + 1] > 47 && str[i + 1] < 58)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

int	ft_atoi(const char *str)
{
	long long	result;

	result = check_res(str);
	if (result)
	{
		if (result < -2147483649)
			printf("error : lower than -2147483648 : overflow error\n");
		else if (result > 2147483647)
			printf("error : higher than 2147483647 : overflow error\n");
	}
	return (result);
}

int main()
{
	printf("%d\n", atoi("-2147483650 2 tnos 4df\n"));
	printf("%lld\n", check_res("-2147483650 2 tnos 4df"));
    printf("%d\n", ft_atoi("-2147483650 2 tnos 4df"));

	puts("\v\n");//수직탭
	puts("a\r");//\n과 다름없는듯..?다음줄 맨앞커서로 옮겨줌
    puts("\rb");
	puts("r\bdf");//r이 지워진다
	puts("hello\vhow\vare\vyou");
	
	// printf("%d\n", ft_atoi("+1233*dndlk tnos 4df\n"));
	// printf("%d\n", ft_atoi("\a-1234sk.fsl123 3 tnos 4df"));
	return 0;
}