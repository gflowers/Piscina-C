/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:39:09 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/26 18:04:10 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int rt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	rt = 2;
	while (rt * rt <= nb)
	{
		if (rt * rt == nb)
			return (rt);
		rt++;
	}
	return (0);
}
