/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cdl_nodenew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 16:15:18 by rmaes         #+#    #+#                 */
/*   Updated: 2022/12/15 16:22:30 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cdl_list.h"
#include <stdlib.h>

// creates and allocates a new t_dlnode, using the given content
// the prev and next pointers are set to NULL
t_dlnode	*cdl_nodenew(void *content)
{
	t_dlnode	*node;

	node = malloc(sizeof(t_dlnode));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->next = NULL;
	node->content = content;
	return (node);
}
