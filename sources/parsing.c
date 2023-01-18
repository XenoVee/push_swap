/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 21:29:35 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/13 18:26:58 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

t_dllist	*error(t_dllist *list)
{
	write(2, "Error\n", 6);
	cdl_listclear(list);
	return (0);
}

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

t_dllist	*parsing(int argc, char **argv)
{
	int			i;
	t_dllist	*list;
	t_dlnode	*tmp;

	i = 1;
	list = cdl_listinit();
	if (list == NULL)
		return (0);
	while (i < argc)
	{
		if (isint(argv[i]) == 0)
			return (error(list));
		if (intsize(argv[i]) == 0)
			return (error(list));
		if (cdl_listuaddback(list, cdl_nodenew(ft_atoi(argv[i]))) == 1)
			return (error(list));
		i++;
	}
	tmp = list->head;
	do {
		ft_printf("%i\n", tmp->content);
		tmp = tmp->next;
	} while (tmp != list->head);
	return (list);
}
