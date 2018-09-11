/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimisations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:44:30 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/09/11 16:33:27 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_bigger_sqr(char *str, int position[2], t_instr *info, int size)
{
	int		x;
	int		y;
	int		start;

	x = size - 1;
	y = 0;
	start = info->length + position[0] + (position[1]) * (info->width + 1);
	printf("%d lenght %d positio[0], %d position[1], %d width \n", info->length, position[0], position[1], info->width);
	if (position[0] + size > info->width)
	{printf("%d = x, %d = y, %d=startt\n", x, y, start);
	return (0);}
	else if (position[1] + size > info->height)
		return (0);
	printf("%d = x, %d = y, %d=start t\n", x, y, start);
	while (y < size - 1)
		if (str[start + x + y * (info->width + 1)] == info->empty)
		{y++;
	printf("%d = x, %d = y, %d = start u\n",x , y , start);}
		else 
			return (0);
	x = 0;
	while (x < size)
		if (str[start + x + y * (info->width + 1)] == info->empty)
		{x++;
			printf("%d = x, %d = y, %d = start z\n", x, y, start);}
		else
			return (0);
	return (1);
}
