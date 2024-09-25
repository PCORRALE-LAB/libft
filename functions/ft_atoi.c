/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:13:15 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 11:13:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    size_t i;
    int sign;
    long result;

    result = 0;
    sign = 1;
    i = 0;
    if(!str)
        return (0);
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <=13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = sign * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return ((int)(result * sign));
}
#include <stdio.h>

int main (void)
{
    char a[] = "  +42";

    printf("String: %s --> %d\n", a, ft_atoi(a));

    return 0;
}
