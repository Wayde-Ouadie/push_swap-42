/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:19:11 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/24 06:50:00 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	error_msg(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;
	bool	check;

	a = NULL;
	b = NULL;
	if (ac < 2)
		error_msg();
	check = parsing(ac, av, &a);
	if (check == false)
		error_msg();
	while (get_next_line(0, &line))
	{
		oper_check(&line, &a, &b);
		free(line);
	}
	if (lstsize(b) == 0 && sorted(a))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	stack_freeing(&a);
	stack_freeing(&b);
}
