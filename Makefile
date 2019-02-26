# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/12/15 14:48:13 by igbraude     #+#   ##    ##    #+#        #
#    Updated: 2019/01/18 15:19:36 by igbraude    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c function/ft_char_short_conversion.c function/ft_conv_index.c \
	   function/ft_float_conversion.c function/ft_long_conversion.c \
	   function/ft_parsing_function_struct.c function/ft_uint_conversion.c \
	   function/ft_check_flag.c function/ft_int_conversion.c \
	   function/ft_longlong_conversion.c function/ft_precision_and_size_fnct.c \
	   function/ft_size_and_precision_change.c \
	   function/ft_string_conversion.c function/ft_var_in_struct.c function/ft_charprint_add.c \
	   function/ft_check_flag2.c function/ft_check_flag3.c function/ft_for_negative_stuff.c \
	   function/ft_parsing_function_struct2.c \
	   libft/ft_atoi.c  libft/ft_atol.c libft/ft_atoll.c libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
	   libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_lstadd.c libft/ft_lstiter.c libft/ft_memalloc.c \
	   libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memdel.c libft/ft_memmove.c \
	   libft/ft_memset.c libft/ft_putchar.c libft/ft_putchar_fd.c libft/ft_putendl.c libft/ft_putendl_fd.c libft/ft_putnbr.c \
	   libft/ft_putnbr_fd.c libft/ft_putstr.c libft/ft_putstr_fd.c libft/ft_strcat.c libft/ft_strchr.c libft/ft_strclr.c \
	   libft/ft_strcmp.c libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strequ.c libft/ft_striter.c \
	   libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlen.c libft/ft_strmap.c libft/ft_strmapi.c \
	   libft/ft_strncat.c libft/ft_strncmp.c libft/ft_strnequ.c libft/ft_strncpy.c libft/ft_strnew.c libft/ft_strnstr.c \
	   libft/ft_strrchr.c libft/ft_strrev.c libft/ft_strsplit.c libft/ft_strstr.c libft/ft_strsub.c libft/ft_strtrim.c \
	   libft/ft_swap.c libft/ft_tolower.c libft/ft_toupper.c libft/ft_lstdel.c libft/ft_lstdelone.c libft/ft_lstmap.c \
	   libft/ft_lstnew.c libft/ft_list_push_params.c libft/ft_strjoinfree.c libft/ft_strlen_endl.c \
	   libft/get_next_line.c libft/ft_len_nbr.c libft/ft_uitoa.c libft/ft_itoa_base_maj.c libft/ft_itoa_base_min.c \
	   libft/ft_ultoa_base_min.c libft/ft_putnbr_base.c libft/ft_ltoa.c libft/ft_lltoa.c libft/ft_ultoa.c libft/ft_ulltoa.c \
	   libft/ft_ulltoa_base_maj.c libft/ft_ulltoa_base_min.c libft/ft_ultoa_base_maj.c libft/ft_len_unbr.c \
	   libft/ft_len_dnbr.c libft/ft_dtoa.c libft/ft_ldtoa.c

DEPENDENCES =  ft_printf.o function/ft_char_short_conversion.o function/ft_conv_index.o \
			   function/ft_float_conversion.o function/ft_long_conversion.o \
			   function/ft_parsing_function_struct.o function/ft_uint_conversion.o \
			   function/ft_check_flag.o function/ft_int_conversion.o \
			   function/ft_longlong_conversion.o \
			   function/ft_precision_and_size_fnct.o \
			   function/ft_size_and_precision_change.o \
			   function/ft_check_flag2.o function/ft_check_flag3.o function/ft_for_negative_stuff.o \
			   function/ft_string_conversion.o function/ft_var_in_struct.o function/ft_charprint_add.o \
			   function/ft_parsing_function_struct2.o \
			   libft/ft_atoi.o  libft/ft_atol.o libft/ft_atoll.o libft/ft_bzero.o libft/ft_isalnum.o \
			   libft/ft_isalpha.o libft/ft_isascii.o \
			   libft/ft_isdigit.o libft/ft_isprint.o libft/ft_itoa.o libft/ft_lstadd.o libft/ft_lstiter.o libft/ft_memalloc.o \
			   libft/ft_memccpy.o libft/ft_memchr.o libft/ft_memcmp.o libft/ft_memcpy.o libft/ft_memdel.o libft/ft_memmove.o \
			   libft/ft_memset.o libft/ft_putchar.o libft/ft_putchar_fd.o libft/ft_putendl.o libft/ft_putendl_fd.o libft/ft_putnbr.o \
			   libft/ft_putnbr_fd.o libft/ft_putstr.o libft/ft_putstr_fd.o libft/ft_strcat.o libft/ft_strchr.o libft/ft_strclr.o \
			   libft/ft_strcmp.o libft/ft_strcpy.o libft/ft_strdel.o libft/ft_strdup.o libft/ft_strequ.o libft/ft_striter.o \
			   libft/ft_striteri.o libft/ft_strjoin.o libft/ft_strlcat.o libft/ft_strlen.o libft/ft_strmap.o libft/ft_strmapi.o \
			   libft/ft_strncat.o libft/ft_strncmp.o libft/ft_strnequ.o libft/ft_strncpy.o libft/ft_strnew.o libft/ft_strnstr.o \
			   libft/ft_strrchr.o libft/ft_strrev.o libft/ft_strsplit.o libft/ft_strstr.o libft/ft_strsub.o libft/ft_strtrim.o \
			   libft/ft_swap.o libft/ft_tolower.o libft/ft_toupper.o libft/ft_lstdel.o libft/ft_lstdelone.o libft/ft_lstmap.o \
			   libft/ft_lstnew.o libft/ft_list_push_params.o libft/ft_strjoinfree.o libft/ft_strlen_endl.o \
			   libft/get_next_line.o libft/ft_len_nbr.o libft/ft_uitoa.o libft/ft_itoa_base_maj.o libft/ft_itoa_base_min.o \
			   libft/ft_ultoa_base_min.o libft/ft_putnbr_base.o libft/ft_ltoa.o libft/ft_lltoa.o libft/ft_ultoa.o libft/ft_ulltoa.o \
			   libft/ft_ulltoa_base_maj.o libft/ft_ulltoa_base_min.o libft/ft_ultoa_base_maj.o libft/ft_len_unbr.o \
			   libft/ft_len_dnbr.o libft/ft_dtoa.o libft/ft_ldtoa.o

LIB = libft.a

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra -Include

all : $(NAME)

$(NAME): $(DEPENDENCES)
	ar rc $(NAME) $(DEPENDENCES)
	ranlib $(NAME)

clean:
	rm -rf $(DEPENDENCES)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
