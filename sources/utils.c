/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 15:20:50 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/01 17:34:10 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	error(t_stacks *stacks, int v)
{
	if (v == 1)
		write(2, "Error\n", 6);
	cdl_listclear(stacks->a);
	cdl_listclear(stacks->b);
	free(stacks);
	return (v);
}

void	free_stacks(t_stacks *stacks)
{
	cdl_listclear(stacks->a);
	cdl_listclear(stacks->b);
	free(stacks);
}

int	isint(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
