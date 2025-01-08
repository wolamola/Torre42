/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:39 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_char = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last_char = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (last_char)
		return ((char *)last_char);
	else
		return (NULL);
}

/*
int main(void)
{
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
	return (0);
}
*/
