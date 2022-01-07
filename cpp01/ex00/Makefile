SRCS		=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp 
OBJS		= ${SRCS:.cpp=.o}
CPPC		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME		= zombie
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