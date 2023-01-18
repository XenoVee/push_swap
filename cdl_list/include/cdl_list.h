/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cdl_list.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: athena <athena@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 13:05:43 by athena        #+#    #+#                 */
/*   Updated: 2023/01/11 13:39:49 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CDL_LIST_H
# define CDL_LIST_H

# include <stddef.h>

// A singular node in the list. 
// Prev and Next point to the previous and next nodes in the list respectively
// Content is a pointer to the node's content
typedef struct s_dlnode
{
	struct s_dlnode	*prev;
	int				content;
	struct s_dlnode	*next;
}				t_dlnode;

// The list struct itself.
// listlen contains the amount of nodes in the list
// it is modified by my functions that add or remove nodes
//
// head points to the first entry of the list
typedef struct s_dllist
{
	size_t		listlen;
	t_dlnode	*head;
}				t_dllist;

void		cdl_listaddback(t_dllist *list, t_dlnode *node);
void		cdl_listaddfront(t_dllist *list, t_dlnode *node);
int			cdl_listuaddback(t_dllist *list, t_dlnode *node);
int			cdl_listuaddfront(t_dllist *list, t_dlnode *node);
void		cdl_listdecr(t_dllist *list);
void		cdl_listincr(t_dllist *list);
int			cdl_listdelnode(t_dllist *list, int n);
void		cdl_listclear(t_dllist *list);
t_dlnode	*cdl_listgetnode(t_dllist *list, int n);
t_dllist	*cdl_listinit(void);
t_dlnode	*cdl_listpopnode(t_dllist *list, int n);
t_dlnode	*cdl_nodenew(int content);

#endif