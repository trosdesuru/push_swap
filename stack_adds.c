/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:06:33 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/23 15:33:26 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create a new Nod
t_stack	*stack_addnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void	stack_addback(t_stack **stack, t_stack *stack_addnew)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_addnew;
	else
		(stck_last(*stack))->next = stack_addnew;
}