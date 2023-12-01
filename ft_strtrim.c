/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:18:45 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/01 12:17:47 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> // for free()

static int	find_set(char *res, char const *set)
{
	int i;
	int start;

	i = 0;
	while (i < ft_strlen(res) && res[i] != '\0')
	{
		if (res[i] = set[0])
		{
			start = i;
			while (res[++i] == *set && *set != '\0')
				set++;
			if (*set != '\0')
				return (i);
		}
		i++;
	}
	return (0)
}

static trim_set(char *res)
{
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	res = ft_strdup(s1);
	if (!res)
		return (NULL);
}

int	main(void)
{
	char const *s1 = "Hello, my name is ella.";
	char const *set = "ll";
	char *res = ft_strtrim(s1, set);
	printf("%s", res);
	free(res);
	return (0);
}