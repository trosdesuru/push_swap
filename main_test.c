/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:17:42 by edhernan          #+#    #+#             */
/*   Updated: 2024/04/16 16:04:31 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv) 
{
    // Check arguments
    int argsCheckResult = check_args(argc, argv);
    if (argsCheckResult != 0)
        return 1;
    return 0;
}
