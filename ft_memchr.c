/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:06:37 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 11:06:37 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	q;

	q = (unsigned char)c;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == q)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
