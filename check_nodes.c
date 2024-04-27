/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:50:04 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/27 17:50:10 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

int	check_duplicate(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

// This function checks if the stack is sorted.
int	check_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nbr;
	while (stack_a)
	{
		if (i > stack_a->nbr)
			return (0);
		i = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}

void	sort_stacks(**stack_a)
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