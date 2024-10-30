/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:10:46 by aqrafi            #+#    #+#             */
/*   Updated: 2024/10/28 11:20:53 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d; 
	char	*s; 

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
