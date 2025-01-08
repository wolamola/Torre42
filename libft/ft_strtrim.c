/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:40 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;
	size_t	counter;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trimmed_str == NULL)
		return (NULL);
	counter = 0;
	while (start < end)
		trimmed_str[counter++] = s1[start++];
	trimmed_str[counter] = '\0';
	return (trimmed_str);
}

/*
int main(void)
{
	const char *s1 = "   Hola, mundo!   ";
	const char *set = " ";

	char *result = ft_strtrim(s1, set);

	if (result != NULL)
	{
		printf("Cadena original: '%s'\n", s1);
		printf("Set de caracteres a eliminar: '%s'\n", set);
		printf("Resultado de ft_strtrim: '%s'\n", result);
		free(result); // Liberar la memoria asignada
	}
	else
	{
		printf("Error: No se pudo recortar la cadena.\n");
	}
	return (0);
}
*/
