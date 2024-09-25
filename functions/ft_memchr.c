/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:30:07 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 10:30:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *p;
    unsigned char q;

    if (!s)
        return (NULL);

    q = (unsigned char)c;
    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if(p[i]==q)
            return((void*)(p + i));        
        i++;
    }
    return (NULL);
}
#include <stdio.h>

int main (void)
{
    char a[] = "This is just an example of using strnstr function as it was the original";
    char b = 'j';
    char *result = (char *)ft_memchr(a,b,15);
    printf("Text: %s\nTo find: %c\n",a, b);
    printf("We found: %s \n", result);
    return 0;
}