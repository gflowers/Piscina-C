/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:03:53 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/26 19:04:07 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
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
		if (count <= nb)
			result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
