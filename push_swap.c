/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:40:45 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/16 16:01:07 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
	{
		perror_printargc();
	}
	if (argc == 2)
	{
		perror_printer();
	}
	else
	{
		while (i < argc)
		{
			j = atoint(argv[i]);
			ft_add_back(&a, ft_stack_new[j]);
			i++;
		}
	}
}
