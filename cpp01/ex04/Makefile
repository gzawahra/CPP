SRCS		=	main.cpp 
OBJS		= ${SRCS:.cpp=.o}
CPPC		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME		= replace
RM			= rm -f

%.o :		%.cpp
			${CPPC} ${CPPFLAGS} -c $<
all :		${NAME}
${NAME} :	${OBJS}
			${CPPC} -o ${NAME} ${OBJS}
clean :
			${RM} ${OBJS}
fclean :	clean
			${RM} ${NAME}
re :		fclean all
.PHONY :
			all ${NAME} clean fclean re