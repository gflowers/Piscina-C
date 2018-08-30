/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:49:09 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/29 20:55:31 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	while (--argc >= 1)
	{
		while (*argv[argc])
			ft_putchar(*argv[argc]++);
		ft_putchar('\n');
	}
	return (0);
}
