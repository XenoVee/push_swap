/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swaps.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:18:42 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/24 16:03:44 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_dllist *list)
{
	if (list->listlen < 2)
		return (1);
	cdl_listaddfront(list, cdl_listpopnode(list, 1));
	return (0);
}

int	sa(t_stacks *stacks)
{
	ft_printf("sa\n");
	return (swap(stacks->a));
}

int	sb(t_stacks *stacks)
{
	ft_printf("sb\n");
	return (swap(stacks->b));
}

int	ss(t_stacks *stacks)
{
	if (swap(stacks->a) != 0)
		return (1);
	if (swap(stacks->b) != 0)
		return (-1);
	ft_printf("ss\n");
	return (0);
}
