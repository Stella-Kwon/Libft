/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:18:45 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/18 22:19:14 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> // for free()
#include  <string.h>
// static size_t	findreal(char const *s1, char const *set, size_t next_start)
// {
// 	size_t	start;
// 	size_t	j;

// 	j = 0;
// 	start = next_start;
// 	while (s1[next_start] == set[j] && set[j] != '\0')
// 	{
// 		j++;
// 		next_start++;
// 	}
// 	if (set[j] == '\0' && j == ft_strlen(set))
// 	{
// 		if (s1[next_start] == set[0])
// 			next_start = findreal(s1, set, next_start);
// 	}
// 	else
// 		next_start = start;
// 	j = 0;
// 	return (next_start);
// }

// static char	*find_set(char const *s1, char const *set, char *res)
// {
// 	size_t	i;
// 	size_t	next_start;

// 	next_start = 0;
// 	i = 0;
// 	while (i < ft_strlen(s1) && s1[next_start] != '\0')
// 	{
// 		if (s1[next_start] == set[0])
// 			next_start = findreal(s1, set, next_start);
// 		res[i] = s1[next_start];
// 		next_start++;
// 		i++;
// 	}
// 	res[i] = '\0';
// 	res = ft_strdup(res);
// 	return (res);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*res;

// 	if (!s1)
// 		return (NULL);
// 	if (!set)
// 		return ((char *)s1);
// 	if (*s1 == '\0')
// 		return (ft_strdup(""));
// 	res = ft_strdup(s1);
// 	if (!res)
// 		return (NULL);

// 	res = find_set(s1, set, res);
// 	return (res);
// }

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;
// 	char		*res;

// 	s1 = "Hello, mymy nallme is ella.";
// 	set = "my";
// 	res = ft_strtrim(s1, set);
// 	printf("THE ANSWER : %s\n", res);
// 	free(res);
// 	return (0);
// }



static int	find_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			//printf("Found set character: %c\n", c);
			return (1);			
		}
		set++;
	}
	//printf("Did not find set character: %c\n", c);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*temp;
	char	*start;
	char	*end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = (char *)s1;
	end = start + ft_strlen(s1) - 1;
	while (*start && find_set(*start, set))
	{			
		//printf("start : %c\n", *start);
		start++;
	}
	if (*start == '\0')
		return (ft_strdup(""));
	//printf("end : %c\n", *end);
	while (*end && find_set(*end, set))
	{
		//printf("end : %c\n", *end);
		end--;		
	}
	//printf("end : %c\n", *end);
	len = end - start + 1;
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, start, len + 1);
	//printf("%s\n", temp);
	return (temp);
}


// int main(void)
// {
//     char const s1[] = "my youth ym . ";
//     char const *set;
//     char *res;

//     set = "my";
//     printf("Original String: %s\n", s1);

//     res = ft_strtrim(s1, set);
//     printf("Trimmed String: %s\n", res);
//     printf("\n");

//     free(res);
//     return (0);
// }
