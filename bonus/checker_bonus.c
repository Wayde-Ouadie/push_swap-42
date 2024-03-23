/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:19:11 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 10:05:10 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	bool	check;
	
	a = NULL;
	b = NULL;
	check = parsing(ac, av, &a);
	if (check == false)
		ft_putendl_fd("KO", 1);
	else
		ft_putendl_fd("OK", 1);
}