/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 17:31:01 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/07 15:41:09 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_ind(t_dllist *list, unsigned int *ind)
{
	unsigned int	tmpind[3];
	unsigned int	i;

	tmpind[0] = list->head->index;
	tmpind[1] = list->head->next->index;
	tmpind[2] = list->head->next->next->index;
	ind[0] = ft_min(ft_min(tmpind[0], tmpind[1]), tmpind[2]);
	ind[2] = ft_max(ft_max(tmpind[0], tmpind[1]), tmpind[2]);
	i = 1;
	ind[1] = tmpind[0];
	while (ind[1] == ind[0] || ind[1] == ind[2])
	{
		ind[1] = tmpind[i];
		i++;
	}
}

int	sort_three(t_stacks *stacks)
{
	unsigned int	ind[3];
	t_dllist		*list;

	list = stacks->a;
	find_ind(list, ind);
	if (list->head->index == ind[0] && list->head->next->index == ind[2])
	{
		sa(stacks);
		ra(stacks);
		return (0);
	}
	else if (list->head->index == ind[1] && list->head->next->index == ind[0])
		return (sa(stacks));
	else if (list->head->index == ind[1] && list->head->next->index == ind[2])
		return (rra(stacks));
	else if (list->head->index == ind[2] && list->head->next->index == ind[1])
	{
		sa(stacks);
		rra(stacks);
		return (0);
	}
	else if (list->head->index == ind[2] && list->head->next->index == ind[0])
		return (ra(stacks));
	return (1);
}

static void	loop(t_stacks *stacks)
{
	int				dist;
	unsigned int	i;

	i = 0;
	while (stacks->a->listlen > 3)
	{
		stacks->a->current = stacks->a->head;
		dist = 0;
		while (stacks->a->current->index != i)
		{
			stacks->a->current = stacks->a->current->next;
			dist++;
		}
		if (dist > 2)
			while (stacks->a->head->index != i)
				rra(stacks);
		else
			while (stacks->a->head->index != i)
				ra(stacks);
		pb(stacks);
		i++;
	}
}

int	sort_five(t_stacks *stacks)
{
	loop(stacks);
	sort_three(stacks);
	pa(stacks);
	pa(stacks);
	return (0);
}
