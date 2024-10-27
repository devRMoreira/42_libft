/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:32:26 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/27 15:48:32 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	if (!str || !c)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str[i]);
	}
	return (NULL);
}
