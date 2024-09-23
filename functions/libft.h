/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:03:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 13:03:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
} t_list;

void    ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strnstr (const char *big, const char *little, size_t len);
char *ft_strchr(const char *s, int c);
char *strrchr(const char *s, int c);

int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int    ft_isalnum(char c);
int     ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
int ft_toupper(int c);
int ft_tolower(int c);

#endif