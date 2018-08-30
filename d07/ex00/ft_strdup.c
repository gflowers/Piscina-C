/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:37:27 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/30 17:27:59 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}
