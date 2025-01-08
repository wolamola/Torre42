/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:41 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_length;
	char	*substr;
	size_t	counter;

	if (s == NULL)
		return (NULL);
	str_length = ft_strlen(s);
	if (start >= str_length)
		return (ft_strdup(""));
	if (len > str_length - start)
		len = str_length - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	counter = 0;
	while (counter < len)
	{
		substr[counter] = s[start + counter];
		counter++;
	}
	substr[counter] = '\0';
	return (substr);
}

/*
int main(void)
{
	printf("%s\n", ft_substr("HOLA PEPE QUE TAL ESTAS ESTA TARDE?", 8, 3));
	return (0);
}
*/
