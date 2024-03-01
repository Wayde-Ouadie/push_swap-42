/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/01 11:42:27 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h> // Remove this line

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	// close(STDOUT_FILENO);
	// close(STDERR_FILENO);
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
	exit(EXIT_SUCCESS);
}
