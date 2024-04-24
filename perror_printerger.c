/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perror_printerger.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:40:50 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/23 17:32:26 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//  All print value functions
void	perror_printchar(void)
{
	fprintf(stderr, "No integers in string.\nError.\n");
}

void	perror_printint(void)
{
	fprintf(stderr, "Error.\n");
}

void	perror_printerdup(void)
{
	fprintf(stderr, "Duplicate integer detected.\nError.\n");
}

void	perror_printadd(void)
{
	fprintf(stderr, "Cannot add new *lst.\nError.\n");
}