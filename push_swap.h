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

#pragma once

int         check_args(int argc, char **argv);
int	        check_argv(char **argv);
int	        check_isdigit(char c);
void	    perror_printerger(void);
void	    perror_printerdup(void);
void	    perror_printchar(void);
void	    perror_printargc(void);
void	    perror_printargv(void);
void	    perror_printint(void);
void	    perror_printer(void);
void	    printer(void);
