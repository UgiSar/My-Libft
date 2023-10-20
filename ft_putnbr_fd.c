/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:44:29 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
//Handle the case of negative numbers
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}


void	print_digits(int num)
{
	if (num / 10 != 0)
	{
		print_digits (num / 10);
	}

	char	digit = '0' + (num % 10);

	write (fd, &digit, 1);
}
//Handle special case of zero
if (n == 0)
{
	write (fd, "0", 1 );
}
else
{
	print_digits(n);
}
}
//The ft_putnbr_fd function writes an integer to a specified file descriptor.