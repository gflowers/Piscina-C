#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct	s_opp
{
	char	operation;
	int	(*func)(int, int);
}		t_opp;

t_opp g_opstable[] =
{
	{'+', &ft_sum},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod}
};

#endif
