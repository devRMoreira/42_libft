/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:54:07 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/27 15:42:17 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_size(size_t nmemb, size_t size)
{
	size_t	max_size;

	max_size = (size_t)-1;
	if (nmemb > (max_size / size))
		return (1);
	else
		return (nmemb * size);
}

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	if (!nmemb || !size)
		total = 1;
	else
		total = valid_size(nmemb, size);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
