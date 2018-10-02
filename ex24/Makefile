# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apelissi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 10:40:02 by apelissi          #+#    #+#              #
#    Updated: 2017/11/29 15:09:28 by apelissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -c srcs/*.c
	ar rc libft.a *.o includes/*.h

clean:
	rm -f *.o

fclean: clean
	rm -rf libft.a

re: fclean all
