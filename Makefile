# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 12:27:23 by aprosper          #+#    #+#              #
#    Updated: 2022/08/01 14:46:50 by aprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP = push_swap
NAME = $(PUSH_SWAP)

CC = gcc
CFLAGS = -Werror -Wall -Wextra

INCLUDES = push_swap.h

LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_FILE = $(LIBFT_DIR)/$(LIBFT)

SRC_OPERATIONS =	\
	operations/ft_pa.c	\
	operations/ft_pb.c	\
	operations/ft_ra.c	\
	operations/ft_rb.c	\
	operations/ft_rr.c	\
	operations/ft_rra.c	\
	operations/ft_rrb.c	\
	operations/ft_rrr.c	\
	operations/ft_sa.c	\
	operations/ft_sb.c	\
	operations/ft_ss.c

SRC_SORT =	\
	sort/big_sort.c	\
	sort/small_sort.c

SRC_UTILS =	\
	utils/check_malloc.c	\
	utils/free_malloc.c	\
	utils/ft_check_duplicate_nbr.c	\
	utils/ft_check_empty_array.c	\
	utils/ft_check_is_number.c	\
	utils/ft_check_nbr_is_sorted.c	\
	utils/ft_create_int_array.c	\
	utils/ft_with_quotes.c

SRC_RACINE =	\
	main.c	\
	test.c
	
#utils/ft_atoi_origin.c
#utils/ft_atoi.c
#utils/ft_strlen.c

SRCS = \
	$(SRC_OPERATIONS)	\
	$(SRC_SORT)	\
	$(SRC_UTILS)	\
	$(SRC_RACINE)
	
OBJS = ${SRCS:c=o}

all : $(LIBFT) $(NAME)

$(PUSH_SWAP) : $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBFT_FILE) -o $(NAME)

operations/%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

utils/%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

sort/%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

main%.o : client.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

test%.o : test.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

clean :
	@rm -f $(OBJS)
	@make clean -C libft

fclean : clean
	@rm -f client
	@rm -f server

big_clean : fclean $(LIBFT_FILE)_fclean

re : big_clean all


# Libft
$(LIBFT) : $(LIBFT_FILE)

$(LIBFT_FILE) :
	@make -C $(LIBFT_DIR)

$(LIBFT_FILE)_fclean :
	@make -C $(LIBFT_DIR) fclean

.PHONY : all clean fclean big_clean re