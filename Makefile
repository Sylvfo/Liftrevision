# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 10:50:32 by sforster          #+#    #+#              #
#    Updated: 2024/02/08 21:58:19 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c\
			ft_strlen.c\
			ft_toupper.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_strnstr.c\
NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

OBJ		=	$(SRCS:.c=.o)

all:	$(NAME)

re:		fclean $(NAME)

$(NAME):	$(OBJ)
				ar	rcs	$(NAME)	$(OBJ)
				ranlib $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

.PHONY:		all re clean fclean bin
