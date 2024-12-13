/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/11 18:36:14 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
