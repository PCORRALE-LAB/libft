/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:53:09 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 10:53:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char*)s1;
    p2 = (unsigned char*)s2;

    i = 0;

    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}
// #include <stdio.h>

// int main (void)
// {
//     char a[] = "Hello World!";
//     char b[] = "Hello world!";
//     int result;

//     result = ft_memcmp(a, b, 8);

//     printf("String 1: %s\n", a);
//     printf("String 2: %s\n", b);
//     printf("Difference %i\n", result);
//     return 0;
// }
