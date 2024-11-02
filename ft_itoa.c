/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:37:54 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/02 16:36:59 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_count(int n)
{
	int	nums;
	int	count;

	count = 1;
	if (n < 0)
	{
		nums = n * -1;
		count = 2;
	}
	else
		nums = n;
	while (nums > 10)
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

	count = get_count(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str[count--] = '\0';
	while (n > 10)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	str[count] = n + '0';
	return (str);
}
