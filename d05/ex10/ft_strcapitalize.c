/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:05:50 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/28 22:23:14 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_low(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_low(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = (str[i + 1] - 32);
		i++;
	}
	return (str);
}
