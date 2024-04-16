/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:42:08 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/13 13:42:12 by edhernan         ###   ########.fr       */
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
	long			nbr;
	long			index;
	struct s_stack	*next;
}	t_stack;

int         check_args(int argc, char **argv);
int	        check_argv(char **argv);
int	        check_isdigit(char c);
int         check_ischar(char c);
int         check_spaces(char **argv);
void	    perror_printerger(void);
void	    perror_printerdup(void);
void	    perror_printchar(void);
void	    perror_printargc(void);
void	    perror_printargv(void);
void	    perror_printint(void);
void	    perror_printer(void);
void	    printer(void);

#endif