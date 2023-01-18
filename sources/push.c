/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 17:55:49 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 17:59:03 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stacks	*stacks)
{
	if (stacks->b->listlen < 1)
		return (1);
	cdl_listaddfront(stacks->a, cdl_listpopnode(stacks->b, 0));
	return (0);
}

int	pb(t_stacks	*stacks)
{
	if (stacks->a->listlen < 1)
		return (1);
	cdl_listaddfront(stacks->b, cdl_listpopnode(stacks->a, 0));
	return (0);
}
