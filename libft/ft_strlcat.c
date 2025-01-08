/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2025/01/08 15:35:35 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *o);

size_t	ft_strlcat(char *d, const char *o, size_t dsize)
{
	size_t	d_len;
	size_t	o_len;
	size_t	i;
	size_t	total_len;

	d_len = ft_strlen(d);
	o_len = ft_strlen(o);
	if (dsize <= d_len)
		return (dsize + o_len);
	total_len = d_len + o_len;
	i = 0;
	while (o[i] && (d_len + i + 1) < dsize)
	{
		d[d_len + i] = o[i];
		i++;
	}
	d[d_len + i] = '\0';
	return (total_len);
}

/*
int main(void)
{
	char d[20] = "Hello, ";
	char o[] = "world!";
	size_t dsize = sizeof(d);

	size_t len = ft_strlcat(d, o, dsize);
	printf("Fuente: %s\n", o);
	printf("Destino (concatenado): %s\n", d);
	printf("Longitud total esperada: %zu\n", len);
	return (0);
}
*/
