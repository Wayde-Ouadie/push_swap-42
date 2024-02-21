/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:20:57 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 06:28:35 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big(t_stack **a, t_stack **b)
{
	int	lst_size;

	lst_size = lstsize(a);
	if (lst_size-- > 3 && !sorted(*a))
		pb(b, a);
	if (lst_size-- > 3 && !sorted(*a))
		pb(b, a);
	while (lst_size > 3 && !sorted(*a))
	{
		initialize_a(*a, *b);
		push_to_b(a, b);
		lst_size--;
	}
	sort_three(a);
	while (*b)
	{
		initialize_b(*a, *b);
		push_to_a(a,b);
	}
	indexing(*a);
}