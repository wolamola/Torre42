/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
/*   Updated: 2024/12/26 20:37:30 by hcorcuer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
void	ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *destination, const void *origin, size_t n);
void	*ft_memmove(void *destination, const void *origin, size_t n);
size_t	ft_strlcpy(char *d, const char *o, size_t dsize);
size_t	ft_strlcat(char *d, const char *o, size_t dsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
char	*ft_strnstr(const char *str, const char *needle, size_t n);
int		ft_atoi(const char *str);


//calloc.c
//strdup.c

#endif
