/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:35:38 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/04 13:21:03 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	sep;
	int	words;

	i = 0;
	sep = 1;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && sep == 1)
		{
			words++;
			sep = 0;
		}
		if (s[i] == c && sep == 0)
			sep = 1;
		i++;
	}
	return (words);
}

static int	ft_memfree(char **s, int q)
{
	int	i;

	while (i < q)
		free(s[i++]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	j = 0;
	k = 0;
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (ft_memfree(arr, (count_words(s, c) + 1)));
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
		{
			arr[k] = ft_substr(s, i - j, j);
			k++;
			j = 0;
		}
		i++;
		j++;
	}
	arr[k++] = ft_substr(s, i - j, j);
	arr[k][0] = '\0';
	return (arr);
}
