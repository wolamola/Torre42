/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:28 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *origin, size_t n)
{
	unsigned char		*d;
	const unsigned char	*o;
	size_t				i;

	if (!destination && !origin)
		return (NULL);
	d = (unsigned char *)destination;
	o = (const unsigned char *)origin;
	i = 0;
	while (i < n)
	{
		d[i] = o[i];
		i++;
	}
	return (destination);
}

/*
int main(void)
{
	char origin[50] = "Hello, World!";
	char destination[50];
	printf("Antes de ft_memcpy:\n");
	printf("origin: %s\n", origin);
	printf("destination: %s\n", destination);
	ft_memcpy(destination, origin, 50);
	printf("\nDespués de ft_memcpy:\n");
	printf("origin: %s\n", origin);
	printf("destination: %s\n", destination);
	return (0);
}
*/
