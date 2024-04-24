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

// Create a new node.
t_stack	*stack_addnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		perror_printadd();
	new->nbr = content;
	new->next = NULL;
	return (new);
}

//Add a new node at the bottom.
void	stack_addback(t_stack **stack, t_stack *stack_addnew)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_addnew;
	else
		(stack_last(*stack))->next = stack_addnew;
}

// This function frees any stack
void	ft_free(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = tmp;
	}
}