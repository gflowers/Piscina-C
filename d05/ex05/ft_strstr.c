/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:29:03 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/28 19:47:43 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int find_size;

	i = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == find_size - 1)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
