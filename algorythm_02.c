/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:43:56 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/06 16:44:19 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function rotate the stack_b in reverse direction.
int	apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			mv_ra(a, 0);
		while (find_place_b(*b, c) > 0)
			mv_rrb(b, 0);
		mv_pb(a, b, 0);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			mv_ra(a, 0);
		while ((*b)->nbr != c)
			mv_rrb(b, 0);
		mv_pa(a, b, 0);
	}
	return (-1);
}

// This function calculates the required amount of rotation.
int	case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_place_a(a, c);
	if (i < find_index(b, c))
		i = find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
int	case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = lst_size(a) - find_place_a(a, c);
	if ((i < (lst_size(b) - find_index(b, c))) && find_index(b, c))
		i = lst_size(b) - find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
int	case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(b, c))
		i = lst_size(b) - find_index(b, c);
	i = find_place_a(a, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
int	case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = lst_size(a) - find_place_a(a, c);
	i = find_index(b, c) + i;
	return (i);
}
