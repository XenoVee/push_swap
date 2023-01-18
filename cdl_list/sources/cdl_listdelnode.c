/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cdl_listdelnode.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 17:02:37 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/09 15:51:07 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cdl_list.h"
#include <stdlib.h>

//deletes and frees the N'th node of LIST, and returns a pointer to the content
int	cdl_listdelnode(t_dllist *list, int n)
{
	t_dlnode	*node;
	int			content;

	node = cdl_listpopnode(list, n);
	content = node->content;
	free(node);
	return (content);
}
