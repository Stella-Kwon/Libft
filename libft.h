
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:02:16 by suminkwon         #+#    #+#             */
/*   Updated: 2023/11/13 09:39:15 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *  ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void *  ft_memcpy(void *dst, const void *src, size_t n);
void *  ft_memmove(void *dst, const void *src, size_t len);
#endif