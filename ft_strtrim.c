/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:18:45 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/01 19:29:40 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h> // for free()

// static char	*find_set(char const *s1, char const *set, char *res)
// {
// 	size_t i;
// 	size_t j;
// 	size_t	start;
// 	size_t next_start;

// 	start = 0;
// 	next_start = 0;
// 	i = 0;
// 	j = 0;
// 	while (i < ft_strlen(s1) && s1[next_start] != '\0')
// 	{
// 		printf("1 s1: %c 그리고 인덱스 : %zu\n",s1[i],i);
// 		printf("2 set: %c 그리고 인덱스 : %zu\n",set[j],j);
// 		if (s1[i] == set[j])
// 		{
// 			printf("같아 s1:%c 그리고 인덱스 : %zu\n",s1[i],i);
// 			printf("같아 set: %c 그리고 인덱스 : %zu\n",set[j],j);
// 			start = i;
// 			while (s1[i] == set[j] && set[j] != '\0')
// 			{
// 				//set++; //이렇게 주면 위에서 set[0]이 이미 위치가 지나가버려서 제대로 돌아오지않음.
// 			printf("같아서 체크해 : 1 s1: %c\n",s1[i]);
// 			printf("같아서 체크해 : 2 set: %c\n",set[j]);
// 				j++;
// 				i++;
// 			}
// 			if (set[j] == '\0')
// 			{
// 				next_start = i ;
// 				printf("그래서 start : s1: %c\n",s1[start]);
// 				printf("그래서 next_start : s1: %c\n",s1[next_start]);
// 				// i = i - 1;
// 				// printf("그래서 i : s1: %c\n",s1[i]);
// 			}
// 			else
// 				i = start;
// 			j = 0;
// 		}
// 		res[start] = s1[next_start];
// 		// printf("3 s1: %c\n",s1[i]);
// 		start++;
// 		next_start++;
// 		printf("마지막 start : s1: %c\n",s1[start]);
// 		printf("마지막 next_start : s1: %c\n",s1[next_start]);
// 		printf("마지막 i : s1: %c\n",s1[i]);
// 		i++;
// 	}
// 	res = ft_strdup(res); // 다시 메모리 strlen에 맞게 맞춰주기
// 	return (res);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*res;

// 	if (!s1)
// 		return (NULL);
// 	if (!set)
// 		return ((char	*)s1);
// 	res = ft_strdup(s1);
// 	if (!res)
// 		return (NULL);

// 	// while (i < ft_strlen(s1) && s1[i] != '\0')
// 	// {
// 	// 	if (s1[i] == set[0])
// 	// 	{
// 	// 		start = i;
// 	// 		while (s1[++i] == *set && *set != '\0')
// 	// 			set++;
// 	// 		if (*set != '\0')
// 	// 			next_start = i;
// 	// 		else
// 	// 			i = start + 1;
// 	// 	}
// 	// 	res[start] == s1[next_start];
// 	// 	start++;
// 	// 	next_start++;
// 	// 	i++;
// 	// }
// 	res = find_set(s1, set, res);
// 	return (res);
// }

// #include "libft.h"

// static int	find_set(char c, char const *set)
// {
// 	while (*set)
// 	{
// 		if (c == *set)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	len;
// 	char	*temp;
// 	char	*start;
// 	char	*end;

// 	if (!s1)
// 		return (NULL);
// 	if (!set)
// 		return ((char *)s1);
// 	printf("hello\n");
// 	start = (char *)s1;
// 	end = start + ft_strlen(s1) - 1;
// 	while (*start && find_set(*start, set))
// 		start++;
// 	printf("start : %c\n" , *start);
// 	if (*start == '\0')
// 		return (ft_strdup(""));
// 	while (*end && find_set(*end, set))
// 		end--;
// 	len = end - start + 1;
// 	temp = (char *)malloc(sizeof(char) * len + 1);
// 	if (!temp)
// 		return (NULL);
// 	ft_strlcpy(temp, start, len);
// 	return (temp);
// }
#include "libft.h"

static int	ft_inset(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_inset(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_inset(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

int main(void)
{
	char const s1[] = "Hello, my nallme is ella.";
	char const *set = "ll";
	char *res = ft_strtrim(s1, set);
	printf("%s", res);
	free(res);
	return (0);
}