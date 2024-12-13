/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/11 18:38:23 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
