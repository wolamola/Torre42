/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:22 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t				count;
	long long int		ln;

	count = 0;
	ln = n;
	if (ln == 0)
		return (1);
	if (ln < 0)
	{
		count++;
		ln = -ln;
	}
	while (ln > 0)
	{
		count++;
		ln = ln / 10;
	}
	return (count);
}

static void	fill_string(char *str, long long int ln, size_t length)
{
	if (ln == 0)
	{
		str[0] = '0';
		return ;
	}
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		str[--length] = (ln % 10) + '0';
		ln = ln / 10;
	}
}

char	*ft_itoa(int n)
{
	size_t				length;
	char				*str;
	long long int		ln;

	length = count_digits(n);
	ln = n;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	fill_string(str, ln, length);
	return (str);
}

/*
int main(void)
{
	int numbers[] = {0, 42, -42, 12345, -12345, -2147483648, 2147483647};
	size_t i;
	char *result;

	i = 0;
	printf("Pruebas de ft_itoa:\n");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		result = ft_itoa(numbers[i]);
		if (result != NULL)
		{
			printf("Número: %d -> Cadena: \"%s\"\n", numbers[i], result);
			free(result);
		}
		else
		{
			printf("Error: ft_itoa falló para el número %d\n", numbers[i]);
		}
		i++;
	}
	return (0);
}
*/
