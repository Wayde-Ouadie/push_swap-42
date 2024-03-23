/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:17:38 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 09:51:35 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// utils
long	ft_atol(char *str);
bool	sorted(t_stack *stack);
t_stack	*lstlast(t_stack *list);
bool	num_check(const char *str);
char	**ft_split(char *s, char c);
void	ft_putendl_fd(char *s, int fd);
int		ft_words(const char *s, char c);
void	ft_memoryfree(char **res, int a);
bool	stack_init(t_stack **a, char **arr);
void	lst_add_back(t_stack **stack, int n);
bool	parsing(int ac, char **av, t_stack **a);
char	*ft_strjoin(int size, char **strs, char *sep);
bool	dup_check(const long *tab, int nbr, int index);

//operations
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);
void	push(t_stack **stack1, t_stack **stack2);

//get_line
char	*ft_strdup(char *s);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin_v2(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif