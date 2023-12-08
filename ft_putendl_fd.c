/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:39:08 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/08 16:42:39 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> //open
#include <unistd.h> //write
#include <stdio.h> //system

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	ft_putchar_fd('\n',fd);
}

int	main(void)
{
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644); // O_CREAT 추가해서 파일이 없으면 생성하도록 함
	if (fd < 0)
	{
		perror("Error opening file");
		return 1;
	}
	char *str = "HELLO";
	ft_putendl_fd(str, fd);
	ft_putendl_fd("stella", fd);

	
	if (close(fd) < 0)
	{

		perror("Error closing file");
		return 1;
	}

	FILE *file = fopen("test.txt", "r");

    if (file == NULL) {
        perror("파일 열기 실패");
        return 1;
    }
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c); 
    }

    fclose(file);

	return (0);
}