/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:39:47 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/13 18:01:27 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"                                              /* FIXED */

int check_args(int argc, char **argv)
{
    if (argc >= 2)
		check_argv(argv);
    else
		perror_printargc();
	return (1);
}

int check_argv(char **argv)                                         /* FIXED */
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

int	check_isdigit(char **argv)                                      /* FIXED */
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i][j])
    {
        if (argv[i][j] >= '0' && argv[i][j] <= '9')
            //write(1, &argv[i][j], 1);
            j++;
        else if (argv[i][j] >= 'a' && argv[i][j] <= 'z' ||
                    argv[i][j] >= 'A' && argv[i][j] <= 'Z')
        {
            perror_printerdup();
            return (0);
        }
    }
    i++;
	return (1);
}

check_ischar(char **argv)                                           /* FIXED */
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i][j])
    {
        if (argv[i][j] <= '0' && argv[i][j] >= '9')
        {
            perror_printchar();
            return (0);
        }
        j++;
    }
    i++;
}

int check_ischar(char **argv)
{
    int i;;
    int j;

    i = 1;
    while (argv[i] != NULL)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 33 && argv[i][j]c <= 255)
            {
                perror_printchar();
                return (0);
            }
            j++;
        }
        i++;
    }
    return 1;
}