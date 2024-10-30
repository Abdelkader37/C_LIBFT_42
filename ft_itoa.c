/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:33:16 by aqrafi            #+#    #+#             */
/*   Updated: 2024/10/30 15:07:45 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*n_cpy(char *str, long len, long nb)
{
	while (len > 0)
	{
		str[len - 1] = (nb % 10) + 48;
		len--;
		nb /= 10;
	}
	return (str);
}

long	n_len(long n)
{
	int	len;

	len = 0;
	while (n != 0) 
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*s_alloc(long len)
{
	char	*str1;

	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!str1)
		return (NULL);
	return (str1);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*str;

	nb = (long)n;
	len = 0;
	if (n == 0)
	{
		str = s_alloc(1);
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	len = n_len(nb);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	str = s_alloc(len);
	str[len] = '\0';
	n_cpy(str, len, nb);
	if (n < 0)
		str[0] = '-';
	return (str);
}
