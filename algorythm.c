/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:37:43 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/06 16:46:03 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculate and decides which rotation
// combination is best to use to sort the stack.
int	rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = a;
	i = case_rrarrb(a, b, a->nbr);
	while (temp)
	{
		if (i > case_rarb(a, b, temp->nbr))
			i = case_rarb(a, b, temp->nbr);
		if (i > case_rrarrb(a, b, temp->nbr))
			i = case_rrarrb(a, b, temp->nbr);
		if (i > case_rarrb(a, b, temp->nbr))
			i = case_rarrb(a, b, temp->nbr);
		if (i > case_rrarb(a, b, temp->nbr))
			i = case_rrarb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack.
int	rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = b;
	i = case_rrarrb_a(a, b, b->nbr);
	while (temp)
	{
		if (i > case_rarb_a(a, b, temp->nbr))
			i = case_rarb_a(a, b, temp->nbr);
		if (i > case_rrarrb_a(a, b, temp->nbr))
			i = case_rrarrb_a(a, b, temp->nbr);
		if (i > case_rarrb_a(a, b, temp->nbr))
			i = case_rarrb_a(a, b, temp->nbr);
		if (i > case_rrarb_a(a, b, temp->nbr))
			i = case_rrarb_a(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

// This function rotates both stack_a and stack_b in the same direction.
int	apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && find_place_b(*b, c) > 0)
			mv_rr(a, b, 0);
		while ((*a)->nbr != c)
			mv_ra(a, 0);
		while (find_place_b(*b, c) > 0)
			mv_rb(b, 0);
		mv_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && find_place_a(*a, c) > 0)
			mv_rr(a, b, 0);
		while ((*b)->nbr != c)
			mv_rb(b, 0);
		while (find_place_a(*a, c) > 0)
			mv_ra(a, 0);
		mv_pa(a, b, 0);
	}
	return (-1);
}

// This function rotate both stack_a and stack_b in reverse.
int	apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && find_place_b(*b, c) > 0)
			mv_rrr(a, b, 0);
		while ((*a)->nbr != c)
			mv_rra(a, 0);
		while (find_place_b(*b, c) > 0)
			mv_rrb(b, 0);
		mv_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && find_place_a(*a, c) > 0)
			mv_rrr(a, b, 0);
		while ((*b)->nbr != c)
			mv_rrb(b, 0);
		while (find_place_a(*a, c) > 0)
			mv_rra(a, 0);
		mv_pa(a, b, 0);
	}
	return (-1);
}

// This function rotate the stack_a in reverse direction.
int	apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			mv_rra(a, 0);
		while (find_place_b(*b, c) > 0)
			mv_rb(b, 0);
		mv_pb(a, b, 0);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			mv_rra(a, 0);
		while ((*b)->nbr != c)
			mv_rb(b, 0);
		mv_pa(a, b, 0);
	}
	return (-1);
}
