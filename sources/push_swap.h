/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 17:41:07 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/18 18:39:51 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../cdl_list/include/cdl_list.h"
# include "../libftprintf/libft.h"
// # include "operations.h"

typedef struct s_stacks
{
	t_dllist	*a;
	t_dllist	*b;
}				t_stacks;

t_dllist	*parsing(int argc, char **argv);
int			isint(char *str);

#endif