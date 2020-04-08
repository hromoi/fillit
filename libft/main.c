/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:05:28 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/03 11:49:49 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{

	char *src = "abc";
	char *src1 = "abd";
	char *src2 = "abc";
	char *src3 = "abd";

/*//////////////ft_bzero///////ft_memset
	int i;
	int n;
	char *f;

	n = 4;
	i = 0;
	char src[] = "1234567";
	f = src;
	ft_bzero(src, n);
	while (i != sizeof(f))
	{
		printf("%c", f[i]);
		i++;
	}
*/

/*///////ft_memcpy///////ft_memccpy//////
	size_t n;
	int c;

	c = '\200';
	n = 21;
	unsigned char src[] = "string with\200inside !";
	unsigned char dest[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned char dest1[] = "abcdefghijklmnopqrstuvwxyz";
	printf("custom: %s\n", ft_memccpy(dest, src, c, n));
	printf("original: %s\n", memccpy(dest1, src, c, n));
	return (0);
*/

/*///////ft_memmove//////
	size_t n;
	n = 5;

	printf("original: %s\n", memmove(src + 2, src, n));
	printf("custom: %s\n", ft_memmove(src1 + 2, src1, n));
*/
/*//////ft_memchr/////
	char c;
	size_t n;

	n = 10;
	c = 52;
	
	printf("original: %s\n", memchr(src, c, n));
	printf("custom: %s\n", ft_memchr(src1, c, n));
*/
/*////////ft_memcmp/////
	size_t n;

	n = 10;

	printf("original: %d\n", memcmp(src, src1, n));
	printf("custom: %d\n", ft_memcmp(src, src1, n));
*/
/*////ft_strncpy//////
 	size_t num;
	num = 29;

	printf("original: %s\n", strncpy(src1, src, num));
	printf("custom: %s\n", ft_strncpy(src3, src2, num));
*/	
/*///////ft_strlen//////
	printf("original: %lu\n", strlen(src));
	printf("custom: %lu\n", ft_strlen(src2));
*/
/*//////ft_strncpy////
	size_t n;
	n = 3;
	printf("custom: %s\n", ft_strncpy(src3, src2, n));
	printf("original: %s\n", strncpy(src1, src, n));
*/
/*//////ft_strdup////
	printf("original: %s\n", strdup(src));
	printf("custom: %s\n", ft_strdup(src1));
*/
/*/////ft_strcpy////
 	printf("original: %s\n", strcpy(src1, src));
	printf("custom: %s\n", ft_strcpy(src3, src2));
*/
/*///////ft_strcat////
	printf("original: %s\n", strcat(src1, src));
	printf("custom: %s\n", ft_strcat(src3, src2));
*/
/*///////ft_strlcpy/////
 	size_t n;
	
	n = 0;
	printf("original: %s\n", strncat(src1, src, n));
	printf("custom: %s\n", ft_strncat(src3, src2, n));
*/
/*//////ft_strlcat///////	
 	size_t n;

	n = 1;
	printf("original: %lu\n", strlcat(src, src1, n));
	printf("custom: %lu\n", ft_strlcat(src2, src3, n));
*/
/*//////ft_strchr////////
 	int n;

	n = '4';
	printf("original: %s\n", strchr(src, n));
	printf("custom: %s\n", ft_strchr(src2, n));
*/
/*//////ft_strrchr//////
 	int i;

	i = '\0';
	printf("original: %s\n", strrchr(src, i));
	printf("custom: %s\n", ft_strrchr(src2, i));
*/
/*  /////ft_strstr//////ft_strnstr///////	
	size_t n;

	n = strlen(src1);
	printf("original: %s\n", strnstr(src, src1, n));
	printf("custom: %s\n", ft_strnstr(src2, src3, n));
*/
 /////ft_strncmp///////
 	size_t num;

	num = 2;
	printf("original: %d\n", strncmp(src, src1, num));
	printf("custom: %d\n", ft_strncmp(src2, src3, num));

/*/////ft_isalpha//////
	int c;

	c = 95;
	printf("original: %d\n", isalpha(c));
	printf("custom: %d\n", ft_isalpha(c));
*/	
/*///////ft_isdigit/////
	int c;

	c = 50;
	printf("original: %d\n", isdigit(c));
	printf("custom: %d\n", ft_isdigit(c));
*/
/*///////ft_iaslnum/////////
	int c;

	c = 93;
	printf("original: %d\n", isalnum(c));
	printf("custom: %d\n", ft_isalnum(c));
*/
/*///////ft_isascii//////	
 	int c;

	c = 128;
	printf("original: %d\n", isascii(c));
	printf("custom: %d\n", ft_isascii(c));
*/
/*/////ft_isprint////
 	int c;

	c = 31;
	printf("original: %d\n", isprint(c));
	printf("custom: %d\n", ft_isprint(c));
*/
/*/////ft_tolower///////
 	int c;

	c = 66;
	printf("original: %c\n", tolower(c));	
	printf("custom: %c\n", ft_tolower(c));
*/
/*
	const  char	*s1 = "*hello*fellow***students*";
	char	c = '*';
	char **s = ft_strsplit(s1, c);
	int i = 0;
	while (s[i])
	{
		ft_putstr(s[i]);
		ft_putchar('\n');
		i++;
	}
*/
	return (0);
}
