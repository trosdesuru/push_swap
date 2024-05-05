/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:15:50 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/30 18:13:09 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Check the number of arguments passed as parameters.
void	check_args(int argc, char **argv, t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*root;

	int	i;
	int	nbr;	

	i = 1;
	root = *stack_a;
	temp = NULL;
	if (argc <= 2)
	{
		perror_printer();
	}
	else
	{
		while (argv[i])
		{
			nbr = atoint(argv[i]);
			if (!root)
			{
				root = stack_addnew(nbr);
				temp = root;
			}
			else
			{
				temp->next = stack_addnew(nbr);
				temp = temp->next;
			}
			i++;
			
		}
		*stack_a = root;
	}
}
