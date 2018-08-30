/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:26:51 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/27 21:53:20 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (-1);
}
