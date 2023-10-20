/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:02:11 by usanch            #+#    #+#             */
/*   Updated: 2023/10/17 16:17:49 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

// Iterate through the memory blocks 'n' times
	while (size_t i = 0, i < n, i++)
	{
		if (*p1 != *p2)
		{
// If the bytes don't match, return the difference between them
			return (*p1 - *p2)
		}
	}
	return (0);
}