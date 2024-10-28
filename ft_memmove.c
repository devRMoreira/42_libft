/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:31:41 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/28 19:16:06 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*src1;
	unsigned char		*dest1;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dest1 = dest;
	src1 = src;
	if (src1 < dest1 && dest1 < src1 + n)
	{
		i = n;
		while (i-- > 0)
			dest1[i] = src1[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
