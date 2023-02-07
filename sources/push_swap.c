/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 17:40:00 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/07 15:31:02 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static t_stacks	*init_stacks(void)
{
	t_stacks	*stacks;
	t_dllist	*stacka;
	t_dllist	*stackb;

	stacka = cdl_listinit();
	if (stacka == NULL)
		return (NULL);
	stackb = cdl_listinit();
	if (stackb == NULL)
	{
		cdl_listclear(stacka);
		return (NULL);
	}
	stacks = malloc(sizeof(t_stacks));
	if (stacks == NULL)
	{
		cdl_listclear(stacka);
		cdl_listclear(stackb);
		return (NULL);
	}
	stacks->a = stacka;
	stacks->b = stackb;
	return (stacks);
}

// static void	print_stack(t_dllist *list)
// {
// 	if (list->head == NULL)
// 	{
// 		ft_printf("\n");
// 		return ;
// 	}
// 	list->current = list->head;
// 	ft_printf("%i.\t\tindex: %i\n", list->current->content,
// 		list->current->index);
// 	list->current = list->current->next;
// 	while (list->current != list->head)
// 	{
// 		ft_printf("%i.\t\tindex: %i\n",
// 			list->current->content, list->current->index);
// 		list->current = list->current->next;
// 	}
// }

// static void	print_both(t_stacks *stacks)
// {
// 	ft_printf("Stack A:\n");
// 	print_stack(stacks->a);
// 	ft_printf("Stack B:\n");
// 	print_stack(stacks->b);
// 	ft_printf("-------\n");
// }

int	sorted(t_stacks *stacks)
{
	unsigned int	ind;

	ind = 0;
	stacks->a->current = stacks->a->head;
	while (stacks->a->current->next != stacks->a->head)
	{
		if (stacks->a->current->index != ind)
			return (0);
		stacks->a->current = stacks->a->current->next;
		ind++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	stacks = init_stacks();
	if (parsing(argc, argv, stacks) != 0)
		return (1);
	indexer(stacks);
	if (sorted(stacks))
		return (error(stacks, 0));
	if (stacks->a->listlen <= 3)
		sort_three(stacks);
	if (stacks->a->listlen <= 5)
		sort_five(stacks);
	else
		sort_long(stacks);
	free_stacks(stacks);
}
	// print_both(stacks);
