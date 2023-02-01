/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 17:41:07 by rmaes         #+#    #+#                 */
/*   Updated: 2023/02/01 13:49:48 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../cdl_list/include/cdl_list.h"
# include "../libftprintf/libft.h"

# include "operations.h"

int		parsing(int argc, char **argv, t_stacks *stacks);
int		isint(char *str);
void	free_stacks(t_stacks *stacks);
void	indexer(t_stacks *stacks);
int		error(t_stacks *stacks, int v);

#endif