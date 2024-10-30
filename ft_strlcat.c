/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:42:22 by aqrafi            #+#    #+#             */
/*   Updated: 2024/10/25 17:53:35 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dstlen;
	size_t	size;
	int		i;

	i = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	dstlen = ft_strlen(dst);
	size = dstsize - dstlen - 1;
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[i] && i < size)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (len);
}
