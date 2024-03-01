/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/01 11:55:57 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	foo(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	atexit(foo);
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	parsing(ac, av, &a);
	if (!sorted(a))
	{
		if (lstsize(a) == 2)
			sa(&a);
		else if (lstsize(a) == 3)
			sort_three(&a);
		else
			sort_big(&a, &b);
	}
	stack_freeing(&a);
	exit(EXIT_SUCCESS);
}
