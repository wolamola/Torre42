/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/12 15:25:08 by hcorcuer         ###   ########.fr       */
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
