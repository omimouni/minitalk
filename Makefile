# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 07:28:18 by omimouni          #+#    #+#              #
#    Updated: 2021/06/16 10:30:29 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client
SERVER = server

CLIENT_SRCS = 	src/client.c

SERVER_SRCS = 	src/server.c

FLAGS = -Wall -Wextra -Werror

UTILS = 		src/utils/ft_strlen.c\
				src/utils/bin2dec.c\
				src/utils/ft_atoi.c\
				src/utils/ft_itoa.c\

$(NAME): $(CLIENT_SRCS) $(SERVER_SRCS)
	@gcc $(CLIENT_SRCS) $(UTILS) $(FLAGS) -o $(NAME)
	@gcc $(SERVER_SRCS) $(UTILS) $(FLAGS) -o $(SERVER)

all: $(NAME)

clean:
	@rm -rf $(NAME)
	@rm -rf $(SERVER)

fclean: clean

re: fclean all