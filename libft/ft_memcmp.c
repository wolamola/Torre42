/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:40:07 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

/*
int main(void)
{
	char str1[] = "Hola";
	char str2[] = "Holb";

	// Comparando los bloques de memoria
	int result1 = ft_memcmp(str1, str2, 4);
	int result2 = ft_memcmp(str1, str2, 4);

	//Imprimir los resultados
	printf("ft_memcmp result: %d\n", result1);
	printf("ft_memcmp result: %d\n", result2);
	return (0);
}
*/
