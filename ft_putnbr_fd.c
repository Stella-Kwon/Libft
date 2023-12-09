/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:02:55 by skwon2            #+#    #+#             */
/*   Updated: 2023/12/09 21:48:14 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> //open
#include <unistd.h> //write
#include <stdio.h> //system
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
        return ;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1; //플러스로 만들어주기
	}
	if (n >= 10) //while로 써도 되지만 재귀함수할때는 if가 낫다.
		ft_putnbr_fd ((n / 10), fd); //계속 나눠주기 (재귀함수쓰는 이유는 그 위치에서 머물러있다가 while이 끝난후 부터 뒤에서 처음까지 돌아가기때문에)
	ft_putchar_fd((n % 10) + '0', fd); //어차피 10 미만은 나눠줬을때 나머지로 프린트되야하니까
}

// int main(void)
// {
//     int fd = open("t.txt", O_WRONLY | O_CREAT, 0644);
//     if (fd < 0)
//     {
//         perror("Error opening file");
//         return 1;
//     }
//     ft_putnbr_fd(153, fd);
//     if (close(fd) < 0)
//     {
//         perror("Error closing file");
//         return 1;
//     }

//     FILE *file = fopen("t.txt", "r");
//     if (file == NULL)
//     {
//         perror("Error in opening file");
//         return 1;
//     }
// 		// 파일 끝으로 이동
// 		if (fseek(file, 0, SEEK_END) == -1)
//     {
//         perror("Error resetting file position");
//         return 1;
//     }
// 		// 파일 크기 구하기
//     long size = ftell(file);
// 	if (size == -1)
//     {
//         perror("Error resetting file position");
//         return 1;
//     }
// 		// 파일 시작으로 이동
// 		if (fseek(file, 0, SEEK_SET) == -1)
//     {
//         perror("Error resetting file position");
//         return 1;
//     }

//     char *buffer = malloc(size + 1); // 크기만큼 동적 할당
// 		// 파일 내용을 버퍼에 읽어옴
// 		if ( fread(buffer, 1, size, file) == (size_t)-1) 
// 		{
//         perror("Error reading from file");
//         fclose(file);
//         return 1;
//     }
//     buffer[size] = '\0'; // 문자열 끝에 NULL 추가

//     printf("File content: %s\n", buffer);

//     free(buffer);
//     fclose(file);

//     return 0;
// }


