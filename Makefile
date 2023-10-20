# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:35:43 by usanch            #+#    #+#              #
#    Updated: 2023/10/17 15:58:53 by usanch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlcat ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_itoa ft_memchr 
ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_ft ft_split ft_strchr 
ft_strdup ft_striteri ft_strjoin ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper

OBJS = ${SRCS: .c = .o }

OBJSB = ${SRCS: .c = .o}

NAME = libft.a

LIBC = ar rcs

CC = cc

RM = rm -f

CFLAGS = -wall -wextra -werror

$(NAME): $(OBJS) $(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean: ${rm} ${OBJS} ${OBJS}

fclean: clean ${rm} ${NAME}

re: fclean all

