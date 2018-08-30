/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:46:44 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/30 20:18:33 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
