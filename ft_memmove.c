/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:17:11 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 12:38:40 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (!n || dest == src)
		return (dest);
	ptr_src = (const unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (ptr_dest < ptr_src)
		return (ft_memcpy(dest, src, n));
	while (n--)
	{
		ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}
