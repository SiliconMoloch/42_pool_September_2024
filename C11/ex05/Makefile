# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 12:19:45 by yabokhar          #+#    #+#              #
#    Updated: 2024/09/27 11:57:07 by yabokhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c srcs/libft.c srcs/operators.c

OBJS	= $(SRCS:.c=.o)

INCS	= includes

NAME	= do-op

.c.o:
	@gcc -Wall -Wextra -Werror -g -c $< -o ${<:.c=.o} -I ${INCS}

do-op:	${OBJS}
	@gcc -Wall -Wextra -Werror -g -I ${INCS} ${OBJS} -o ${NAME}

all:	${NAME}

clean: 
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:	fclean all
