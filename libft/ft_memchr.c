/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:24 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*
int main(void)
{
	const char arr[] = "Hoilia, Hiola!";
	char c1 = 'i';
	char c2 = 'z';
	char c3 = '\0';

	char *result1 = ft_memchr(arr, c1, 12);
	char *result2 = ft_memchr(arr, c2, 12);
	char *result3 = ft_memchr(arr, c3, 12);

	printf("Arreglo original: %s\n", arr);
	printf("Buscando '%c': %s\n", c1, result1 ? result1 : "No encontrado");
	printf("Buscando '%c': %s\n", c2, result2 ? result2 : "No encontrado");
	printf("Buscando '\\0': %s\n", result3 ? result3 : "No encontrado");
	return (0);
}
*/
