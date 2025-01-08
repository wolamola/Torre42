/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:28 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *o, size_t n)
{
	char	*or;
	char	*de;

	or = (char *)o;
	de = (char *)d;
	if (or < de)
	{
		while (n > 0)
		{
			n--;
			de[n] = or[n];
		}
	}
	else
		ft_memcpy(de, or, n);
	return (d);
}

/*
int main(void)
{
	char str[50] = "Hello, world!";
	printf("Antes de ft_memmove: %s\n", str);
	ft_memmove(str + 6, str, 5);
	printf("Después de ft_memmove: %s\n", str);
	return (0);
}
*/
