/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swaps.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:18:42 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 18:34:12 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_dllist *list)
{
	if (list->listlen < 2)
		return (1);
	cdl_listadfront(list, cdl_listpopnode(list, 1));
	return (0);
}

int	sa(t_stacks *stacks)
{
	return (swap(stacks->a));
}

int	sb(t_stacks *stacks)
{
	return (swap(stacks->b));
}

int	ss(t_stacks *stacks)
{
	if (sa(stacks) != 0)
		return (1);
	if (sb(stacks) != 0)
		return (-1);
}
