/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:05:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 01:05:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr (const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (!little)
        return ((char *)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] 
        && ((i + j) < len) && (big[i + j] == little[j]))
        {
            j++;
            if (!little[j])
                return ((char*)big+i);
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main(void)
{
    char a[] = "This is just an example of using strnstr function as it was the original";
    char b[] = "just";

    printf("Text: %s\nTo find: %s\n",a, b);
    printf("We found: %s \n", ft_strnstr(a,b, 15));
    return 0;
}