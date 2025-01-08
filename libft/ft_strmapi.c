/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:37 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	counter;
	size_t	length;

	if (s == NULL || f == NULL)
		return (NULL);
	length = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		result[counter] = f(counter, s[counter]);
		counter++;
	}
	result[counter] = '\0';
	return (result);
}

/*
int main(void)
{
    char *result = ft_strmapi("1234", example_function);

    if (result)
    {
        printf("Resultado: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: ft_strmapi devolvió NULL\n");
    }
    return 0;
}
*/
