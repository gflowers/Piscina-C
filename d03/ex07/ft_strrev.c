/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 22:20:39 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/24 23:35:57 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int i;
	int size;
	char temp;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (i < size)
	{
		temp = str[size];
		str[size] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return (str);
}
