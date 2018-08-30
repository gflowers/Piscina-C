/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:57:15 by fgheorgh          #+#    #+#             */
/*   Updated: 2018/08/30 13:29:26 by fgheorgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rot_maj(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	rot_min(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	rotate(char s)
{
	if (s >= 65 && s <= 90)
		return (rot_maj(s));
	else if (s >= 97 && s <= 122)
		return (rot_min(s));
	else
		return (s);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
