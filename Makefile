# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 07:28:18 by omimouni          #+#    #+#              #
#    Updated: 2021/06/16 08:55:42 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client
SERVER = server

CLIENT_SRCS = 	src/client.c

SERVER_SRCS = 	src/server.c

UTILS = 		src/utils/ft_strlen.c\
				src/utils/bin2dec.c

$(NAME): $(CLIENT_SRCS) $(SERVER_SRCS)
	@gcc $(CLIENT_SRCS) $(UTILS) -o $(NAME)
	@gcc $(SERVER_SRCS) $(UTILS) -o $(SERVER)

all: $(NAME)

clean:
	@rm -rf $(NAME)
	@rm -rf $(SERVER)

fclean: clean

re: fclean all