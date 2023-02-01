/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 21:29:35 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/01 13:49:38 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>

static int	intsize(char *str)
{
	int		sign;
	char	*itoa;
	int		ret;

	sign = 1;
	ret = 1;
	if (str[0] == '-')
		sign = -1;
	if (str[0] == '-' || str[0] == '+')
		str++;
	if ((int)ft_strlen(str) < ft_digitcount(INT_MAX))
		return (1);
	if ((int)ft_strlen(str) > ft_digitcount(INT_MAX))
		return (0);
	itoa = ft_itoa(INT_MAX);
	if (sign == 1)
		if (ft_strcmp(str, itoa) < 0)
			ret = 0;
	if (sign == -1)
		if (ft_strcmp(str, itoa) > 0)
			ret = 0;
	free(itoa);
	return (1);
}

int	parsing(int argc, char **argv, t_stacks *stacks)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		if (isint(argv[i]) == 0)
			return (error(stacks, 1));
		if (intsize(argv[i]) == 0)
			return (error(stacks, 1));
		if (cdl_listuaddback(stacks->a, cdl_nodenew(ft_atoi(argv[i]))) == 1)
			return (error(stacks, 1));
		i++;
	}
	return (0);
}
	// tmp = stacks->a->head;
	// do {
	// 	ft_printf("%i\n", tmp->content);
	// 	tmp = tmp->next;
	// } while (tmp != stacks->a->head);
