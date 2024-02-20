/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 04:51:19 by oel-feng         ###   ########.fr       */
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
	if (ac < 2)
		return (ft_putendl_fd("Bad input", 2), 1);
	parse = parsing(ac, av, a);
	if (parse == false)
		return (ft_putendl_fd("Bad input", 2), 1);
	else
	 	ft_putendl_fd("Correct input", 0);
	return (0);
}
