/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/19 15:19:47 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char *p1 = (unsigned char *)ptr1;
	unsigned char *p2 = (unsigned char *)ptr2;

	while (n--)
	{
		if (*p1 != *p2)
		{
			return(*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
