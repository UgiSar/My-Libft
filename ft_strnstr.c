/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:55:45 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnstr(const char *big, const char *little, size_t len)
//big – A pointer to the string to be searched.
//little – A pointer to the substring to search for.
//len – The maximum number of characters to search.
{
	size_t i;

	i = 0;

	while (little[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return ((char *)big);
	}
	while (*big != '\0' && len >= i)
	{
		if (*big == *little && ft_strncmp(big, little, i) == 0)
		{
			return ((char *)big);
		}
		big++;
		i--;
	}
	return (NULL);
}
//The ft_strnstr function searches for the first occurrence of a substring within a given string, up to a specified length.