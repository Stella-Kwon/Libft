/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:02:16 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/27 07:56:54 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
void *  ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void *  ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len)
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *  ft_memchr(const void *s, int c, size_t n);
void	*calloc(size_t num_elements, size_t element_size);
char	*ft_itoa(int n);
int	ft_atoi(const char *str);
char	*ft_strrchr(const char *str, int character);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int character)
#endif