/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:08:06 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/24 19:32:22 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;

	if ((!s1 || !s2) || !n)
		return (0);
	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n && (str1[i] == str2[i] && str1 != '\0'))
		i++;
	return (str1[i] - str2[i]);

}
