/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:50:28 by edhernan          #+#    #+#             */
/*   Updated: 2024/05/06 14:36:07 by edhernan         ###   ########.fr       */
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

void		stack_addback(t_stack **stack, t_stack *stack_addnew);
void		check_args(int argc, char **argv, t_stack **stack_a);
void		mv_pb(t_stack **stack_a, t_stack **stack_b, int j);
void		mv_pa(t_stack **a, t_stack **b, int j);
void		mv_ss(t_stack **a, t_stack **b, int j);
void		mv_rr(t_stack **a, t_stack **b, int j);
void		mv_rrr(t_stack **a, t_stack **b, int j);
void		sort_stacks(t_stack **stack_a);
void		mv_rrr_sub(t_stack **b, int j);
void		sort_three(t_stack **stack_a);
void		mv_rra(t_stack **a, int j);
void		mv_rrb(t_stack **b, int j);
void		mv_ra(t_stack **a, int j);
void		mv_sa(t_stack **a, int j);
void		mv_rb(t_stack **b, int j);
void		mv_sb(t_stack **b, int j);
void		only_free(t_stack **lst);
void		perror_printer(void);
int			find_place_b(t_stack *stack_b, int nbr_push);
int			find_place_a(t_stack *stack_a, int nbr_push);
int			find_index(t_stack *a, int nbr);
int			check_sorted(t_stack *stack_a);
int			check_duplicate(t_stack *a);
int			lst_size(t_stack *lst);
int			check_isdigit(int c);
int			find_min(t_stack *a);
int			find_max(t_stack *a);
t_stack		*stack_addnew(int content);
t_stack		*lst_last(t_stack *lst);
long		atoint(const char *str);

#endif
