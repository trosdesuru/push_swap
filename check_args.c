/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:39:47 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/16 16:04:26 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	if (argc > 2)
		check_argv(argv);
	else
	{
		perror_printargc();
		return (1);
	}
	return (0);
}

int	check_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	
	while (argv[i] != NULL)
	{
		j = 0;
		if (argv[i][j] == '\0')
			printer();
		while (argv[i][j])
		{
			if (check_isdigit(argv[i][j]) || check_spaces(&argv[i]))
				printf("check_isdigit & check_spaces:	TODO OK JOSE LUIS\n");
			if (check_ischar(argv[i][j]))
			{
				perror_printer();
				return (1);
			}
			j++;
		}
		i++;
	}
	printf("check_argv:	TODO OK JOSE LUIS\n");
	return (0);
}

int	check_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		printf("check_isdigit:	TODO OK JOSE LUIS\n");	
		return (0);
	}
	return (1);
}

int	check_ischar(char c)
{
	if (c > 32 && c <= 126)
	{
		printf("check_ischar:	TODO OK JOSE LUIS\n");
		return (0);
	}
	return (1);
}

int	check_spaces(char **argv)
{
	int	j;

	j = 0;
	if (*argv[j] == ' ' || *argv[j] == '\t')
	{
		printf("TODO OK JOSE LUIS");
		return (0);
	}
	return (1);
}
