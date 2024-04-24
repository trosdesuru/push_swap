/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perror_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:41:39 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/23 17:32:13 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//  All print arguments passed functions
void	perror_printer(void)
{
	fprintf(stderr, "*/*/*/* Error */*/*/*\n");
}

void	perror_printargc(void)
{
	fprintf(stderr, "Type some more arguments passed.\nError\n");
}

void	perror_printargv(void)
{
	fprintf(stderr, "Type any digit, you can do it.\nError.\n");
}

void	printer(void)
{
	fprintf(stderr, "NULL passed as argument.\nError.\n");
}