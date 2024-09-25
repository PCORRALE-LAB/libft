/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:44:47 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 11:44:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_bzero.c"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = (void*)malloc(count * size);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr, count*size);
    return(ptr);
}

#include <stdio.h>
int main (void)
{
    int *arr;
    size_t n;

    n = 5;
    arr = (int *)ft_calloc(n, sizeof(arr));
    if(!arr)
    {
        printf("FAIL\n");
        return (1);
    }
    size_t i = 0;
    while (i < n)
    {   
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);
    return (0);    
}