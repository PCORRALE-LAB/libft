/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:52:17 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/23 14:42:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;
    size_t src_len;

    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    j = dest_len;
    i = 0;

    if(dest_len < size -1 && size > 0)
    {
        while (src[i] && dest_len + i < size - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[j] = 0;
    }
    if (dest_len >= size)
        dest_len = size;
    return (dest_len + src_len);
}
#include <stdio.h>

int main (void)
{
    char dest[] ="Welcome, ";
    char source[] = "Hello World!";

    printf("First: %s, %s \n", dest, source);
    printf("Now:   %lld |%s|\n", ft_strlcat(dest,source, 23), dest); 

    return 0;
}