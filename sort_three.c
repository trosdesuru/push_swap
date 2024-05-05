/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:21:24 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/05 18:41:45 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function sort three elements in the stack.
void	sort_three(t_stack **stack_a)
{
	if (find_min(*stack_a) == (*stack_a)->nbr)
	{
		mv_rra(stack_a, 0);
		mv_sa(stack_a, 0);
	}
	else if (find_max(*stack_a) == (*stack_a)->nbr)
	{
		mv_ra(stack_a, 0);
		if (!check_sorted(*stack_a))
			mv_sa(stack_a, 0);
	}
	else
	{
		if (find_index(*stack_a, find_max(*stack_a)) == 1)
			mv_rra(stack_a, 0);
		else
			mv_sa(stack_a, 0);
	}
}
