/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:31:45 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/30 19:25:15 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;
	int		*p;
	int		len;

	i = 0;
	p = &i;
	len = max - min;
	if (min >= max)
		return (p);
	range = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
