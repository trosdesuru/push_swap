/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm_03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:44:26 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/06 16:44:41 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculates how many times we should rotate the stacks
int	case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_place_b(b, c);
	if (i < find_index(a, c))
		i = find_index(a, c);
	return (i);
}

// This function calculates how many times we should rotate the stacks together.
int	case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = lst_size(b) - find_place_b(b, c);
	if ((i < (lst_size(a) - find_index(a, c))) && find_index(a, c))
		i = lst_size(a) - find_index(a, c);
	return (i);
}

// This function do same calculations for rra+rb case.
int	case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(a, c))
		i = lst_size(a) - find_index(a, c);
	i = find_place_b(b, c) + i;
	return (i);
}

// This function do same calculations for ra+rrb case.
int	case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = lst_size(b) - find_place_b(b, c);
	i = find_index(a, c) + i;
	return (i);
}
