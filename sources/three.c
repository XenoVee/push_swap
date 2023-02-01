/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   three.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 17:31:01 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/01 17:31:04 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_three(t_stacks *stacks)
{
	if (stacks->a->head->index == 0)
	{
		sa(stacks);
		ra(stacks);
		return (0);
	}
	if (stacks->a->head->index == 1 && stacks->a->head->next->index == 0)
		return (sa(stacks));
	if (stacks->a->head->index == 1 && stacks->a->head->next->index == 2)
		return (rra(stacks));
	if (stacks->a->head->index == 2 && stacks->a->head->next->index == 1)
	{
		sa(stacks);
		rra(stacks);
		return (0);
	}
	if (stacks->a->head->index == 2 && stacks->a->head->next->index == 0)
		return (ra(stacks));
	return (0);
}
