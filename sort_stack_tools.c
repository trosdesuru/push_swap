/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:26:25 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/05 18:41:12 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (lst_size(*stack_a) == 2)
		mv_sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		i = find_index(*stack_a, find_min(*stack_a));
		if (i < lst_size(*stack_a) - i)
		{
			while ((*stack_a)->nbr != find_min(*stack_a))
				mv_ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != find_min(*stack_a))
				mv_rra(stack_a, 0);
		}
	}
}
