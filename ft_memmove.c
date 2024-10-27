/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:31:41 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/27 15:45:44 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	char	*temp;
	int		i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	src1 = src;
	temp = dest;
	while (i < n)
	{
		temp[i] = src1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest1[i] = temp[i];
		i++;
	}
	return (dest);
}
