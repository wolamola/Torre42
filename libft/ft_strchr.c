/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:33 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int main(void)
{
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

	return (0);
}
*/
