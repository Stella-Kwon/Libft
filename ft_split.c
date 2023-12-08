/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:44:33 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/08 12:39:21 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_c(char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}

static size_t	get_each_strlen(char *str, char c)
{
	printf("4 : str += each_strlen : %p\n", (void *)str);
	return (ft_strchr(str, c) - str + 1);
}

// static char	**all_free(char	**res)
// {
// 	이렇게 이중 포인터일때는 [i]로 명료하게 표현해주는것이 좋다. 
// 	while (*res)
// 	{
// 		free(*res);
// 		*res = NULL;
// 		res++;
// 	}
// 	//맬록한번당 하나 고로 char **는 한번불렀으니 한번에 지우기가능
// 	// 맬록 : 한번당 박스배열그려준다생각하면돼. 그리고 그 박스를 지운다생각하고.
// 	free (res);
// 	res = NULL;
// 	return (NULL);
// }

static char	**all_free(char **res)
{
	int		i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		res[i] = NULL;
		i++;
	}
	free(res);
	res = NULL;
	return (NULL);
}

static char	**get_res(char *str, char c)
{
	char	**res;
	size_t	each_strlen;
	size_t	i;
	size_t	res_len;
	
	res_len = count_c(str, c);
	res = (char **)malloc((res_len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < res_len)
	{
		each_strlen = get_each_strlen(str, c);
		printf("5 : Each_strlen : %zu\n", each_strlen);
		res[i] = (char *)malloc((each_strlen + 1) * sizeof(char));
		if (!res[i])
			return (all_free(res));
		ft_strlcpy(res[i], str, each_strlen + 1);
		str += each_strlen;
		i++;
	}
	res[i] = NULL;
	printf("8\n");
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	if (*str == '\0')
		return ((char **)ft_strdup(""));
	res = get_res(str, c);
	return (res);
}

int	main(void)
{
	char const *s = "neaemeee";
	char c = 'e';
	char **res = ft_split(s, c);
	for (int i = 0; res[i] != NULL ; i++)
			printf("res[%d]: %s\n", i, res[i]);
	return (0);
}