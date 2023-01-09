/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 21:29:35 by rmaes         #+#    #+#                 */
/*   Updated: 2022/12/15 21:37:13 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

t_dllist	*parsing(int argc, char **argv)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (cdl_listinit());
}
