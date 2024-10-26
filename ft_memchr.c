/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:01:19 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/24 15:30:42 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	size_t i;

	if(!s)
		return (NULL);
	i = 0;
	src = s;
	while(src[i] != '\0' && i < n)
	{
		if(src[i] == c)
			return (src[i]);
		i++;
	}
	return (s);
}
