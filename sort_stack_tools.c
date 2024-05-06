/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:26:25 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/06 16:28:44 by edhernan         ###   ########.fr       */
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

// This function sort and push stacks until 3 members left behind.
void	sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;

	while (lst_size(*stack_a) > 3 && !check_sorted(*stack_a))
	{
		temp = *stack_a;
		i = rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb(*stack_a, *stack_b, temp->nbr))
				i = apply_rarb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == case_rrarrb(*stack_a, *stack_b, temp->nbr))
				i = apply_rrarrb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == case_rarrb(*stack_a, *stack_b, temp->nbr))
				i = apply_rarrb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == case_rrarb(*stack_a, *stack_b, temp->nbr))
				i = apply_rrarb(stack_a, stack_b, temp->nbr, 'a');
			else
				temp = temp->next;
		}
	}
}

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (lst_size(*stack_a) > 3 && !check_sorted(*stack_a))
		mv_pb(stack_a, &stack_b, 0);
	if (lst_size(*stack_a) > 3 && !check_sorted(*stack_a))
		mv_pb(stack_a, &stack_b, 0);
	if (lst_size(*stack_a) > 3 && !check_sorted(*stack_a))
		sort_b_till_3(stack_a, &stack_b);
	if (!check_sorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

t_stack	**sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;

	while (*stack_b)
	{
		temp = *stack_b;
		i = rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb_a(*stack_a, *stack_b, temp->nbr))
				i = apply_rarb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == case_rarrb_a(*stack_a, *stack_b, temp->nbr))
				i = apply_rarrb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == case_rrarrb_a(*stack_a, *stack_b, temp->nbr))
				i = apply_rrarrb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == case_rrarb_a(*stack_a, *stack_b, temp->nbr))
				i = apply_rrarb(stack_a, stack_b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (stack_a);
}
