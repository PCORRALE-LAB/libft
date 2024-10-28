/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:06:10 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 15:06:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;

    if (!s)
        return(NULL);
    
    while (s[i])
    {
        if(s[i] == (char)c)
            return((char*)(s + i));
        i++;
    }
    if(s[i] == (char)c)
            return((char*)(s + i));
    return (NULL);
}
// #include <stdio.h>
// int main (void)
// {
//     char a[]= "Hello World!";

//     char c = 'W';

//     printf("%s\n", a);
//     printf("Encontrado: %s\n", ft_strchr(a,c));

// }