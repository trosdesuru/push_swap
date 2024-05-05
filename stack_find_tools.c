/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_find_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:19:04 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/05 18:39:57 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find and returns the smallest number.
int	find_min(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

// Find and returns the biggest number.
int	find_max(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

// This function checks the index of a number.
int	find_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->nbr != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

// This function finds the correct place of the number in stack_b.
int	find_place_b(t_stack *stack_b, int nbr_push)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr_push > stack_b->nbr && nbr_push < lst_last(stack_b)->nbr)
		i = 0;
	else if (nbr_push > find_max(stack_b) || nbr_push < find_min(stack_b))
		i = find_index(stack_b, find_max(stack_b));
	else
	{
		temp = stack_b->next;
		while (stack_b->nbr < nbr_push || tmp->nbr > nbr_push)
		{
			stack_b = stack_b->next;
			temp = stack_b->next;
			i++;
		}
	}
	return (i);
}

// This function finds the correct place of the number in stack_a.
int	find_place_a(t_stack *stack_a, int nbr_push)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr_push < stack_a->nbr && nbr_push > lst_last(stack_a)->nbr)
		i = 0;
	else if (nbr_push > find_max(stack_a) || nbr_push < find_min(stack_a))
		i = find_index(stack_a, find_min(stack_a));
	else
	{
		temp = stack_a->next;
		while (stack_a->nbr > nbr_push || temp->nbr < nbr_push)
		{
			stack_a = stack_a->next;
			temp = stack_a->next;
			i++;
		}
	}
	return (i);
}
