/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 06:18:34 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	bool	parse;

	a = NULL;
	b = NULL;
	parse = parsing(ac, av, a);
	if (parse == false)
		return (ft_putendl_fd("Bad input", 2), 1);
	else
	{
		if (!sorted(a))
		{
			if (lstsize(a) == 2)
				swap(a);
			else if (lstsize(a) == 3)
				sort_three(&a);
			else
				big_sort(&a, &b);
		}
	}
	return (0);
}
