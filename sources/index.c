/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 14:35:43 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/01 13:32:24 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static void	print_stack(t_dllist *list)
{
	if (list->head == NULL)
	{
		ft_printf("\n");
		return ;
	}
	list->current = list->head;
	ft_printf("%i.\t\tindex: %i\n", list->current->content, list->current->index);
	list->current = list->current->next;
	while (list->current != list->head)
	{
		ft_printf("%i.\t\tindex: %i\n",
			list->current->content, list->current->index);
		list->current = list->current->next;
	}
}

static t_dlnode	*find_lowest(t_dlnode *low, t_dllist *list)
{
	t_dlnode	*found;
	int			i;

	i = 0;
	list->current = list->head;
	found = list->head;
	while ((found->index != 0 && low != NULL) || found == low)
		found = found->next;
	while (list->current != list->head || i == 0)
	{
		if (list->current->content < found->content && list->current->index == 0
			&& (list->current != low || low == NULL))
			found = list->current;
		list->current = list->current->next;
		i++;
	}
	return (found);
}

void	indexer(t_stacks	*stacks)
{
	unsigned int	index;
	t_dlnode		*found;
	t_dlnode		*low;

	index = 1;
	low = NULL;
	low = find_lowest(low, stacks->a);
	while (stacks->a->listlen > index)
	{
		found = find_lowest(low, stacks->a);
		found->index = index;
		index++;
	}
	print_stack(stacks->a);
}
