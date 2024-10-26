/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:39:37 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/24 15:42:07 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	int	i;
	int total;
	char *str;

	if(!s)
		return (NULL);
	i = 0;
	total = (ft_strlen(s) + 1);
	if(!(str = malloc(sizeof(char) * total)))
		return (NULL);
	while(s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
