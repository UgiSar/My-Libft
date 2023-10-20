/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:55:31 by usanch            #+#    #+#             */
/*   Updated: 2023/09/26 11:10:08 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	if (dest == src)
	{
		return (dest);
	}
	if (s < d)
	{
		while (n--)
		{
			*(d + n) = *(s + n);
		}
		return (dest);
	}
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}