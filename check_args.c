/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:50 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/23 17:30:05 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Check the number of arguments passed as parameters.
t_stack	check_args(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc <= 2)
	{
		perror_printargc();
	}
	else
	{
		while (i < argc)
		{
			j = atoint(argv[i]);
			stack_addback(&a, stack_addnew[j]);
			i++;
		}
	}
	return (a);
}