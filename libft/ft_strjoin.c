/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:34 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*concatenate(char *joined_str,
				const char *s1,
				const char *s2,
				size_t lengths[2])
{
	size_t	counter;

	counter = 0;
	while (counter < lengths[0])
	{
		joined_str[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter < lengths[1])
	{
		joined_str[lengths[0] + counter] = s2[counter];
		counter++;
	}
	joined_str[lengths[0] + lengths[1]] = '\0';
	return (joined_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_length;
	size_t	s2_length;
	size_t	lengths[2];

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (joined_str == NULL)
		return (NULL);
	lengths[0] = s1_length;
	lengths[1] = s2_length;
	return (concatenate(joined_str, s1, s2, lengths));
}

/*
int main(void)
{
	const char *s1 = "Hola, ";
	const char *s2 = "mundo!";

	char *result = ft_strjoin(s1, s2);

	if (result != NULL)
	{
		printf("Resultado de ft_strjoin: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: No se pudo unir las cadenas.\n");
	}

	return (0);
}
*/
