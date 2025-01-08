/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:36 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *o, size_t dsize)
{
	size_t	i;
	size_t	o_len;

	i = 0;
	o_len = 0;
	while (o[o_len] != '\0')
		o_len++;
	if (dsize > 0)
	{
		while (o[i] != '\0' && i < (dsize -1))
		{
			d[i] = o[i];
			i++;
		}
		d[i] = '\0';
	}
	return (o_len);
}

/*
int main(void)
{
	char o[] = "Hello, world!";
	char d[10];

	size_t len = ft_strlcpy(d, o, sizeof(d));
	printf("Origen: %s\n", o);
	printf("Destino: %s\n", d);
	printf("Longitud del Origen: %zu\n", len);

	return (0);
}
*/
