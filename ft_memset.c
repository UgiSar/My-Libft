/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:55:35 by usanch            #+#    #+#             */
/*   Updated: 2023/09/27 15:36:07 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	unsigned char *p = s;
	unsigned ch = (unsigned char)c;	
	while (size_t i = 0, i < n, i++)
	{
		p[i] = ch;
	}
	return (s);
}