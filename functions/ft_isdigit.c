/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:27:15 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/18 15:42:07 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char ex[] = "He12345+l-lo";

	printf("Result is %i\n", ft_isdigit(ex[0]));
	printf("Result is %i\n", ft_isdigit(ex[3]));
	printf("Result is %i\n", ft_isdigit(ex[7]));

	return (0);
}