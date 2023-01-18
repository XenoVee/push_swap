/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cdl_listuaddback.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 16:16:44 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/11 13:44:02 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cdl_list.h"
#include <stdlib.h>

// add new node NODE to the back of LIST, as long as CONTENT is unique in LIST
// If LIST is empty, it sets NODE as head. 
// returns 0 on succes, nonzero otherwise
int	cdl_listuaddback(t_dllist *list, t_dlnode *node)
{
	t_dlnode	*tmp;

	if (list->head == NULL)
	{
		cdl_listaddback(list, node);
		return (0);
	}
	tmp = list->head;
	if (tmp->content == node->content)
		return (1);
	tmp = tmp->next;
	while (tmp != list->head)
	{
		if (tmp->content == node->content)
			return (1);
		tmp = tmp->next;
	}
	cdl_listaddback(list, node);
	return (0);
}
