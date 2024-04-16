/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:39:47 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/14 18:38:16 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int argc, char **argv)
{
	if (argc >= 2)
		check_argv(argv);
	else
	{
		perror_printargc();
		return ;
	}
}

int	check_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j])
		{
			if (check_isdigit(argv[i][j]) || check_spaces(argv[i][j]))
				j++;
			if (check_ischar(argv[i][j]))
			{
				perror_printer();
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	check_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

int	check_ischar(char c)
{
	if (c >= 33 && c <= 255)
		return (1);
	return (0);
}

int	check_spaces(**argv)
{
	int	i;

	i = 0;
	if (argv[i][j] == ' ' || argv[i][j] == '\t')
		return (0);
	return (1);
}