/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:17 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
int main(void)
{
	char strbzero[50] = "Hello, world!";
	printf("Antes de ft_bzero: %s\n", strbzero);
	ft_bzero(strbzero, 5);
	printf("Después de ft_bzero: %s\n", strbzero);
	for (int i = 0; i < 13; i++)
	printf("strbzero[%d]: %d\n", i, strbzero[i]);
	return (0);
}
*/
