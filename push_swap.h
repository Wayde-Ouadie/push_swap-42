/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:54 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 04:49:53 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				cost;
	bool			half;
	bool			efficient;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// utils
int		ft_atoi(const char *str);
int		ft_isdigit(int a);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char *s, int fd);

//printf
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *str, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_putnbr_unsigned(unsigned int nbr, int *size);
void	ft_puthexlow(unsigned int nbr, int *size);
void	ft_puthexup(unsigned int nbr, int *size);
void	ft_putadress(unsigned long nbr, int *size);

// parsing
bool	parsing(int ac, char **av, t_stack *a);
bool	parse_check(const char *str);
#endif