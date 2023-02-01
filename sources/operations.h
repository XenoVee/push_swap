/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 18:32:45 by rmaes         #+#    #+#                 */
/*   Updated: 2023/01/20 17:04:17 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "push_swap.h"

typedef struct s_stacks
{
	t_dllist	*a;
	t_dllist	*b;
}				t_stacks;

// swap top 2 of stack A
int	sa(t_stacks *stacks);

// swap top 2 of stack B
int	sb(t_stacks *stacks);

// swap top 2 of stack A & B
int	ss(t_stacks *stacks);

// push from stack B to stack A
int	pa(t_stacks	*stacks);

// push from stack A to stack a
int	pb(t_stacks	*stacks);

// Rotate stack A
int	ra(t_stacks *stacks);

// Rotate stack B
int	rb(t_stacks *stacks);

// Rotate stack A and stack B
int	rr(t_stacks *stacks);

// Reverse rotate stack A
int	rra(t_stacks *stacks);

// Reverse rotate stack B
int	rrb(t_stacks *stacks);

// Reverse rotate stack A and stack B
int	rrr(t_stacks *stacks);

#endif