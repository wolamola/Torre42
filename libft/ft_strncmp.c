/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:41:19 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (i < n && ((unsigned char)s1[i] != (unsigned char)s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
int main(void)
{
	const char *str1 = "Hola, Mundo!";
	const char *str2 = "Hola, Mundo!";
	const char *str3 = "Hola, Amigos!";

	int result1 = ft_strncmp(str1, str2, 5);
	int result2 = ft_strncmp(str1, str3, 5);
	int result3 = ft_strncmp(str1, str3, 10);

	printf("Compara '%s' con '%s' (5 caracteres): %d\n", str1, str2, result1);
	printf("Compara '%s' con '%s' (5 caracteres): %d\n", str1, str3, result2);
	printf("Compara '%s' con '%s' (10 caracteres): %d\n", str1, str3, result3);
	return (0);
}
*/
