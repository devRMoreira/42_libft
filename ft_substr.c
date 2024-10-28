/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:36:38 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/28 16:41:24 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = malloc(sizeof(char) * 1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// Parameters s: The string from which to create the substring.
// start: The start index of the substring in the
// string ’s’.
// len: The maximum length of the substring.
// Return value The substring.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
