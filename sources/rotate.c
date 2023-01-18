/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:59:54 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 18:31:57 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stacks *stacks)
{
	if (stacks->a->listlen < 2)
		return (1);
	cdl_listincr(stacks->a);
	return (0);
}

int	rb(t_stacks *stacks)
{
	if (stacks->b->listlen < 2)
		return (-1);
	cdl_listincr(stacks->b);
	return (0);
}

int	rr(t_stacks *stacks)
{
	if (stacks->a->listlen < 2)
		return (1);
	cdl_listincr(stacks->a);
	if (stacks->b->listlen < 2)
		return (-1);
	cdl_listincr(stacks->b);
	return (0);
}
