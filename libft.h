/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:02:16 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/28 18:07:19 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>

size_t	ft_strlen(const char *s);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*calloc(size_t num_elements, size_t element_size);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
char	*ft_strrchr(const char *str, int character);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int character);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif