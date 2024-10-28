/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:33:39 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/28 13:45:59 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*ptr_src;
	unsigned char		*ptr_dest;
	size_t				i;

	ptr_src = (const unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	i = 0;
	if (dest == src || !n)
		return (dest);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Hello world!";
// 	char dest[24];

// 	ft_memcpy(dest, src, 12);

// 	printf("Src: %s\n", src);
// 	printf("Dest: %s\n", dest);

// 	return (0);
// }