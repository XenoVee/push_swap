/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   long.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 17:23:59 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/07 15:30:28 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_long(t_stacks *stacks)
{
	unsigned int	i;
	unsigned int	m;

	m = 1;
	while (!sorted(stacks))
	{
		i = 0;
		while (i < stacks->a->listlen + stacks->b->listlen)
		{
			if ((stacks->a->head->index & m) == m)
				ra(stacks);
			else
				pb(stacks);
			i++;
		}
		while (stacks->b->listlen > 0)
			pa(stacks);
		m = m << 1;
	}
}
