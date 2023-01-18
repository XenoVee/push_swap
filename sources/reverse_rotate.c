/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 18:31:43 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 18:31:59 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_stacks *stacks)
{
	if (stacks->a->listlen < 2)
		return (1);
	cdl_listdecr(stacks->a);
	return (0);
}

int	rrb(t_stacks *stacks)
{
	if (stacks->b->listlen < 2)
		return (-1);
	cdl_listdecr(stacks->b);
	return (0);
}

int	rrr(t_stacks *stacks)
{
	if (stacks->a->listlen < 2)
		return (1);
	cdl_listdecr(stacks->a);
	if (stacks->b->listlen < 2)
		return (-1);
	cdl_listdecr(stacks->b);
	return (0);
}
