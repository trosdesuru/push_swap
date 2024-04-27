/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:50:28 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/27 17:50:36 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	long				nbr;
	long				index;
	struct s_stack		*next;
}	t_stack;

int			check_duplicate(t_stack *a);
int			ft_atoint(const char *str);
int			lst_size(t_stack *lst);
int			check_isdigit(int c);
int			nbr_min(t_stack *a);
int			nbr_max(t_stack *a);
void		stack_addback(t_stack **stack, t_stack *stack_addnew);
void		perror_printer(void);
t_stack		check_args(int argc, char **argv);
t_stack		*stack_addnew(int content);
t_stack		*lst_last(t_stack *lst);

#endif