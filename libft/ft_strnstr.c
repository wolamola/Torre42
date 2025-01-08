/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 13:58:54 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	if (*small == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (small[j] != '\0' && big[i + j] == small[j] && (i + j) < n)
			{
				if (small[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	const char *str = "Hola, Mundo!";
	const char *needle = "Mundo";
	size_t len = 8; // Limitar la búsqueda a los primeros 12 caracteres

	char *result = ft_strnstr(str, needle, len);

	printf("Cadena original: %s\n", str);
	if (result)
	printf("Subcadena encontrada: %s\n", result);
	else
	printf("Subcadena no encontrada.\n");
	return (0);
}
*/
