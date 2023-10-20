/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:19:54 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	i;
	i = 0;

	while (*(str + 1))
	{
		i++;
	}
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	if(s)
	{
		write (fd, s, str_len(s));
		write (fd, '\n', 1);
	}
}
//The ft_putendl_fd function writes a string followed by a newline character to a specified file descriptor.