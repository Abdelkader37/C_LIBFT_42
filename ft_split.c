/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:15:28 by aqrafi            #+#    #+#             */
/*   Updated: 2024/10/31 13:17:29 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_word(const char *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cont++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cnt;
	int		i;
	int		len;
	int		j;
	int		f;

	i = 0;
	j = 0;
	cnt = count_word(s, c);
	if (cnt == 0)
	{
		str[j] = NULL;
		return (str);
	}
	str = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		str[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		j++;
	}
	i = 0;
	j = 0;
	while (s[i])
	{
		f = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			str[j][f] = s[i];
			i++;
			f++;
		}
		str[j][f] = '\0';
		j++;
	}
	str[j] = NULL;
	return (str);
}
