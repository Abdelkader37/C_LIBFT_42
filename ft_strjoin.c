/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:56:12 by aqrafi            #+#    #+#             */
/*   Updated: 2024/10/28 18:23:32 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len;
	int	len1;
	int	len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = len1 + len2 +1;
	str =  (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcat(str,s1,len1+1);
	ft_strlcat(str,s2,len);
	return (str);
}