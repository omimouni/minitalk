# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 07:28:18 by omimouni          #+#    #+#              #
#    Updated: 2021/06/12 07:35:11 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client.out
SERVER = server.out

CLIENT_SRCS = src/client.c
SERVER_SRCS = src/server.c

$(NAME): $(CLIENT_SRCS) $(SERVER_SRCS)
	gcc $(CLIENT_SRCS) -o $(NAME)
	gcc $(SERVER_SRCS) -o $(SERVER)

all: $(NAME)

clean:
	rm -rf client.out
	rm -rf server.out

fclean: clean

re: fclean all