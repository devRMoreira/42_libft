/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:24:10 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/24 19:31:51 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	int i;

	if(!dest || !src)
		return (NULL);
	i = 0;
	dest1 = dest;
	src1 = src;
	while (i < n && src1[i] != '\0')
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
