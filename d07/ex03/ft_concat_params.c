/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:45:58 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/30 21:07:59 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argvlen(int argc, char **argv)
{
	int i;
	int j;
	int argvlen;

	i = 1;
	j = 0;
	argvlen = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			j++;
			argvlen++;
		}
		j = 0;
		i++;
	}
	return (argvlen);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char*)malloc(sizeof(*str) * ft_argvlen(argc, argv) + 1);
	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		j = 0;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
