/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:42:49 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/26 14:19:19 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int count;
	int result;

	count = 1;
	result = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (count <= nb)
		{
			result *= count;
			count++;
		}
		return (result);
	}
}
