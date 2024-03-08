# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocomez <ocomez@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 12:46:04 by ocomez            #+#    #+#              #
#    Updated: 2024/03/08 18:21:59 by ocomez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

RM		= rm -rf

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

HDRS	= ft_printf.h

SRCS	= ft_printf.c ft_printf_unsig.c ft_printf_ptr.c \
		ft_printf_csdi.c ft_printf_hex.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		ar rc $(NAME) $(OBJS)

clean:
		$(MAKE) clean -C ./libft
		$(RM) $(OBJS)

fclean:	clean
		$(MAKE) fclean -C ./libft
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re