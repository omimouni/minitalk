# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 07:28:18 by omimouni          #+#    #+#              #
#    Updated: 2021/06/12 14:20:59 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client.out
SERVER = server.out

CLIENT_SRCS = 	src/client.c

SERVER_SRCS = 	src/server.c\
				src/signal.c

UTILS = 		src/utils/ft_strlen.c\
				src/utils/bin2dec.c

$(NAME): $(CLIENT_SRCS) $(SERVER_SRCS)
	gcc $(CLIENT_SRCS) $(UTILS) -o $(NAME)
	gcc $(SERVER_SRCS) $(UTILS) -o $(SERVER)

all: $(NAME)

clean:
	rm -rf client.out
	rm -rf server.out

fclean: clean

re: fclean all