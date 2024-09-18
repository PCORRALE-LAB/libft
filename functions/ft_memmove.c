/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:17:11 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/18 17:51:04 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcpy.c"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	const unsigned char		*ptr_src;

	if (!n || dest == src)
		return (dest);

    ptr_src = ( const unsigned char*)src;
	ptr_dest = (unsigned char*)dest;

	if (ptr_dest < ptr_src)
		return (ft_memcpy(dest, src, n));

	while (n--)
	{
		ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}
int	main(void)
{
	char src[] = "Hello world!";
	char dest[] = "Helllo! Welcome to 42. This is your new adventure.";

	printf("Src: %s\n", src);
	printf("Dest: %s\n\n\n", dest);

	ft_memmove(dest, src, 18);

	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);

	return (0);
}