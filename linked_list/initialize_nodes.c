/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_nodes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:00:47 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 06:05:51 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	initialize_a(t_stack *a, t_stack *b)
{
	indexing(a);
	indexing(b);
	target_node_a(a, b);
	cost_node_a(a, b);
	set_best_move(a);
}

void	initialize_b(t_stack *a, t_stack *b)
{
	indexing(a);
	indexing(b);
	target_node_b(a, b);
}