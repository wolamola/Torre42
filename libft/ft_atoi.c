/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:37:22 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/*
int main(void)
{
	const char *str1 = "   -123456";
	const char *str2 = "42";
	const char *str3 = "    +78abc";
	const char *str4 = "abc123";

	printf("Cadena: '%s', Entero: %d\n", str1, ft_atoi(str1)); // -12345
	printf("Cadena: '%s', Entero: %d\n", str2, ft_atoi(str2)); // 42
	printf("Cadena: '%s', Entero: %d\n", str3, ft_atoi(str3)); // 78
	printf("Cadena: '%s', Entero: %d\n", str4, ft_atoi(str4)); // 0
	return (0);
}
*/
