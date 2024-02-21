/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:14:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 04:15:45 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool    num_check(char *str)
{
    int i;

    i = -1;
    if (!(str[0] == '+' || str[0] == '-' || (str[0] >= '0' && str[0] <= '9')))
        return (false);
    if  (str[0] == '+' || str[0] == '-' || !(str[1] >= '0' && str[1] <= '9'))
    while (str[++i])
        if (!(str[0] == '+' || str[0] == '-'))
            return (false);
    return (true);
}

bool    dup_check(int *tab, int nbr, int index)
{
    int i;

    i = -1;
    if (!tab)
        return (false);
    while (++i < index)
        if (tab[i] == nbr)
            return (false);
    return (true);
}