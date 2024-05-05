/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:40:29 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/30 16:27:18 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	atoint(const char *str)
{
	int		mod;
	long	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!check_isdigit(*str))
			perror_printer();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
	{
		
		write(1, "fefe", 4);
		perror_printer();
	}
	
	return (mod * i);
}

// Find all digits passed as arguments[i].
int	check_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
