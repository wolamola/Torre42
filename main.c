/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/13 16:36:20 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


int main(void)
{
	//printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	//printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
	//printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));
	//printf("ft_isascii(128): %d\n", ft_isascii(128));
	//printf("ft_isprint('salto de linea'): %d\n", ft_isprint('\n'));
	//printf("ft_strlen('Hola'): %d\n", ft_strlen("Hola"));
	////ft_memset
		//char strmemset[50] = "Hello, world!";
		//printf("Antes de ft_memset: %s\n", strmemset);
		//ft_memset(strmemset, 'X', 5);
		//printf("Después de ft_memset: %s\n", strmemset);
	////ft_bzero
		//char strbzero[50] = "Hello, world!";
		//printf("Antes de ft_bzero: %s\n", strbzero);
		//ft_bzero(strbzero, 5);
		//printf("Después de ft_bzero: %s\n", strbzero);
		//for (int i = 0; i < 13; i++)
		//	printf("strbzero[%d]: %d\n", i, strbzero[i]);
	////ft_memcpy
//		char origin[50] = "Hello, World!";
//		char destination[50];
//		printf("Antes de ft_memcpy:\n");
//		printf("origin: %s\n", origin);
/*		printf("destination: %s\n", destination);
		ft_memcpy(destination, origin, 50);
		printf("\nDespués de ft_memcpy:\n");
		printf("origin: %s\n", origin);
		printf("destination: %s\n", destination);
	////ft_memmove
	char str[50] = "Hello, world!";
	printf("Antes de ft_memmove: %s\n", str);
	ft_memmove(str + 6, str, 5);
	printf("Después de ft_memmove: %s\n", str);

	/////ft_strlcpy
	char o[] = "Hello, world!";
	char d[10];

	size_t len = ft_strlcpy(d, o, sizeof(d));
	printf("Origen: %s\n", o);
	printf("Destino: %s\n", d);
	printf("Longitud del Origen: %zu\n", len);

	////ft_strlcat	
	char d[20] = "Hello, ";
	char o[] = "world!";
	size_t dsize = sizeof(d);

	size_t len = ft_strlcat(d, o, dsize);
	printf("Fuente: %s\n", o);
	printf("Destino (concatenado): %s\n", d);
	printf("Longitud total esperada: %zu\n", len);

	////ft_toupper
	char letra = 'a';
	printf("Original: %c\n", letra);
	letra = ft_toupper(letra);
	printf("Mayúscula: %c\n", letra);

	////ft_tolower
	char letra = 'A';
	printf("Original: %c\n", letra);
	letra = ft_tolower(letra);
	printf("Minuscula: %c\n", letra);

	////ft_strchr
	const char *str = "Hola, Mundo!";
	char c1 = 'u';
	char c2 = 'z';
	char c3 = '\0';

	char *result1 = ft_strchr(str, c1);
	char *result2 = ft_strchr(str, c2);
	char *result3 = ft_strchr(str, c3);

	printf("Cadena original: %s\n", str);
	printf("Carácter '%c': %s\n", c1, result1 ? result1 : "No encontrado");
	printf("Carácter '%c': %s\n", c2, result2 ? result2 : "No encontrado");
	printf("Carácter '\\0': %s\n", result3 ? result3 : "No encontrado");
*/

const char *str = "Hola, Mundo!";
	char c1 = 'o';
	char c2 = 'z';
	char c3 = '\0';

	char *result1 = ft_strrchr(str, c1);
	char *result2 = ft_strrchr(str, c2);
	char *result3 = ft_strrchr(str, c3);

	printf("Cadena original: %s\n", str);
	printf("Carácter '%c': %s\n", c1, result1 ? result1 : "No encontrado");
	printf("Carácter '%c': %s\n", c2, result2 ? result2 : "No encontrado");
	printf("Carácter '\\0': %s\n", result3 ? result3 : "No encontrado");


/*
	
	printf("ft_strncmp(128): %d\n", ft_strncmp(128));
	printf("ft_memchr(128): %d\n", ft_memchr(128));
	printf("ft_memcmp(128): %d\n", ft_memcmp(128));
	printf("ft_strnstr(128): %d\n", ft_strnstr(128));
	printf("ft_atoi(128): %d\n", ft_iatoi(128));
	printf("ft_calloc(128): %d\n", ft_calloc(128));
	printf("ft_strdup(128): %d\n", ft_strdup(128));
	*/
	return 0;
}
