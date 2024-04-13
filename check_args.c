/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:39:47 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/13 18:56:41 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"                                              /* FIXED */

int	check_args(int argc, char **argv)
{
	if (argc >= 2)
		check_argv(argv);
	else
		perror_printargc();
	return (1);
}

int	check_argv(char **argv)                                         /* FIXED */
{
    int i = 1;
    int j = 0;

    while (argv[i] != NULL)
    {
        while (argv[i][j])
        {
            if (check_isdigit(argv[i][j]) || argv[i][j] == ' ' ||
                    argv[i][j] == '\t')
                j++;
            if (check_ischar(argv[i][j]))
            {
                perror_printer();
                return (0);
            }
            j = 0;
        }
        i++;
    }
    return (1);
}

int	check_isdigit(char c)                                           /* FIXED */
{
	if (c >= '0' && c <= '9')
		return (1);
}

int	check_ischar(char c)                                            /* FIXED */
{
	if (c >= 33 && c <= 255)
        return (1);
}