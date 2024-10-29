/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:37:54 by rimagalh          #+#    #+#             */
/*   Updated: 2024/10/29 13:51:49 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_count(int n)
{
	int	nums;
	int	count ;

	count = 0;
	nums = n;
	while (!(nums >= 0 && nums <= 9) || !(nums <= 0 && nums >= -9))
	{
		nums /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		i;

	i = 0;
	count = get_count(n);
	str = malloc(sizeof(int) * (count + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		while (!(n <= 0 && n >= -9))
		{
			str[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (!(n >= 0 && n <= 9))
		{
			str[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	str[i] = '\0';
	return (str);
}
