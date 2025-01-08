/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:32 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char	*word;
	size_t	len;

	len = 0;
	while (**s == c)
	{
		(*s)++;
	}
	while ((*s)[len] && (*s)[len] != c)
	{
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == 0)
	{
		return (NULL);
	}
	ft_strlcpy(word, *s, len + 1);
	*s = *s + len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;
	size_t	counter;

	counter = 0;
	if (s == 0)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == 0)
		return (NULL);
	while (counter < word_count)
	{
		result[counter] = get_next_word(&s, c);
		if (result[counter] == 0)
		{
			while (counter > 0)
				free(result[--counter]);
			free(result);
			return (NULL);
		}
		counter++;
	}
	result[counter] = NULL;
	return (result);
}

/*
int main(void)
{
	const char *str = "Hola mundo! Esto es una prueba.";
	char delimiter = ' ';
	char **result;
	int i;

	result = ft_split(str, delimiter);

	if (result != NULL)
	{
		printf("Cadena original: \"%s\"\n", str);
		printf("Caracter delimitador: '%c'\n", delimiter);
		printf("Palabras separadas:\n");

		i = 0;
		while (result[i] != NULL)
		{
			printf("  [%d]: \"%s\"\n", i, result[i]);
			free(result[i]); // Liberar memoria de cada palabra
			i++;
		}
		free(result); // Liberar el array de punteros
	}
	else
	{
		printf("Error: No se pudo dividir la cadena.\n");
	}
	return (0);
}
*/
