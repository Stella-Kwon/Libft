/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:33:37 by sukwon            #+#    #+#             */
/*   Updated: 2023/12/11 14:32:55 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> //open
#include <unistd.h> //write
#include <stdio.h> //system

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644); // O_CREAT 추가해서 파일이 없으면 생성하도록 함
// 	if (fd < 0)
// 	{
// 		// open 실패
// 		perror("Error opening file");
// 		return 1;
// 	}

// 	ft_putchar_fd('s', fd);

// 	if (close(fd) < 0)
// 	{
// 		// close 실패
// 		perror("Error closing file");
// 		return 1;
// 	}
// 	// // 파일 내용 확인을 위해 cat 명령어 실행
// 	// system("cat test.txt"); - 쓸수 없어 invalid in c99
	
// 	//그래서 파일을 오픈해서 하나씩 써주기!
// 	FILE *file = fopen("test.txt", "r");

//     if (file == NULL) {
//         perror("파일 열기 실패");
//         return 1;
//     }
// 	// 여기서 int fgetc(FILE *stream);함수는
// 	// stream: 읽을 파일을 가리키는 파일 포인터입니다.
// 	// fgetc 함수는 파일에서 한 문자를 읽어와 ASCII 코드로 반환합니다. 
// 	// 파일의 끝에 도달하거나 읽기 도중 에러가 발생하면 EOF 상수를 반환합니다.
//     int c;
//     while ((c = fgetc(file)) != EOF) {
//         putchar(c); //터미널에 프린팅해주는 함수. printf랑 같지만 이건 한글자만 출력
//     }

//     fclose(file);

// 	return 0;
// }