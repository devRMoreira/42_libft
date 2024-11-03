/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:26:53 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/03 01:19:30 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;


	if (!little)
		return ((char *)big);
	i = 0;
	j = 0;
	while(big[i] != '\0' && i < len)
	{
		while(big[i + j] == little[j] && little[j] != '\0'
		&& big[i + j] != '\0' && i + j < len)
			j++;
		if(little[j] == '\0')
			return ((char *)big + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
