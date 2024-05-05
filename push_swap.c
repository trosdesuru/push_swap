/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:40:45 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/05 18:39:21 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	check_args(argc, argv, &stack_a);
	if (!stack_a || check_duplicate(stack_a))
	{
		free(stack_a);
		perror_printer();
	}
	if (!check_sorted(stack_a))
		sort_stacks(&stack_a);
	only_free(&stack_a);
	return (0);
}
