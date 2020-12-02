SRCS		=	./srcs/conversion_simple.c \
			./srcs/flags_avances.c \
			./srcs/flags_simple.c \
			./srcs/main.c \
			./srcs/soyons_fou.c \
			./srcs/bonus.c \

OBJS		=	${SRCS:.c=.o}
PRINTF_PATH	=	../
PRINTF		= 	libftprintf.a
INCLUDES	=	-I./includes
NAME		=	letsgo
CC		=	gcc
RM 		=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

all:		${NAME}
	
${NAME}:	${lIBFT} ${OBJS}
			make -C ${LIBFT_PATH}
			cp ../${PRINTF} .
			${CC} ${FLAGS} ${OBJS} -L. -lftprintf -c ${NAME}

.c.o:
			${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}
clean:
			@${RM} ${OBJS}
			@make clean -C ${PRINTF_PATH}

fclean:		clean
			@${RM} ${NAME}
			@${RM} ${PRINTF}
			@make flcean -C ${PRINTF_PATH}

re:			fclean all

.PHONY:		all clean fclean re bonus
