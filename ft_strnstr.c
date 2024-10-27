/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:26:53 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/27 16:25:43 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (int)len && big[i] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else if (j == (int) len)
			return ((char *)big + (i - j));
		else
			j = 0;
		i++;
	}
	return (NULL);
}
