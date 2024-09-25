/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:19:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 12:19:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;
    size_t i;

    len = ft_strlen(s1);
    dup = (char *)malloc(sizeof(char) * (len +1));
    if(!dup)
        return(NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

#include <stdio.h>

int main (void)
{
    char src[] = "Hello world!";
    char *dup;

    dup = ft_strdup(src);

    printf("Original: %s\nCopy: %s", src, dup);
    return (0);
}