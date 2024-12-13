/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/13 16:36:00 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *last_char = NULL;

	while (*s) //while (*s != '\0')
	{
		if (*s == (char)c)
			last_char = s; //copi direcction of s to last_char, for save last ma
		s++;
	}
	if (c == '\0')
		return ((char *)s);

	if (last_char)
		return(char*)last_char;
	else
		return (NULL);
}
