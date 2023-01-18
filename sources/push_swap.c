/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 17:40:00 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 17:24:15 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_dllist	*list;

	if (argc < 2)
		return (1);
	list = parsing(argc, argv);
	if (list)
		cdl_listclear(list);
	else
		return (1);
}
