/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:02:06 by usanch            #+#    #+#             */
/*   Updated: 2023/10/17 16:17:12 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p = s;

	size_t	i;
	p = (const char *)s;
	i = 0;
	while (i < n, i++)
	{
		if (*p == (unsigned char)c)
		{
			return (void *p);
		}
		p++;
	}
	return (NULL);
}