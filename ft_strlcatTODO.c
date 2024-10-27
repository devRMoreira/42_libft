/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatTODO.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:42:13 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/27 15:54:15 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dstlen;
	unsigned int	srclen;

	if (!src || !dst)
		return (0);
	i = 0;
	srclen = (size_t) ft_strlen((char *)src);
	dstlen = (size_t) ft_strlen((char *)dst);
	if (size < dstlen)
		return (size);
	while (i < (size - dstlen) - 1)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (src[i] != '\0')
		return (size);
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
