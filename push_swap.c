/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/01/26 15:31:22 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
    bool    parse;

	if (ac < 2)
		return (0);
	a.top = NULL;
	b.top = NULL;
	b.len = 0;
	parse = parsing(ac, av, &a);
    if (parse == true)
	    puts("Correct input");
    else
        puts("Error");
	return (0);
}
