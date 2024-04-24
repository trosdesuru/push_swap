/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:40:45 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/23 17:32:51 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = check_args(argc, argv);
	if (!a || check_duplicate(a))
	{
		free(&a);
		perror_printer();
	}
	if (!check_sorted(a))
		sort(&a);
	ft_free(&a);
	return (0);
}