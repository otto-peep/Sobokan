NAME = Sobokan

PATH1 = ./src/

HEAD = -I./include

FLAGS = -Wall -Wextra -Werror

FILE = main.c

SRC = $(FILE:%c=$(PATH1)%c)

LIBPATH = -lm -L libft/ -lft

OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME):
	make -C libft/
	gcc -o $(NAME) $(SRC) $(HEAD) -I./libft/include ./libft/libft.a -F ~/Library/Frameworks -framework SDL2  -framework SDL2_mixer -framework SDL2_net


clean :
	rm -f $(OBJ)
	make -C libft/ clean

fclean :
	make -C libft/ fclean
	rm -f $(NAME) $(OBJ)

re : fclean all

sdl_install:
		curl https://dl.dropboxusercontent.com/u/22561204/SDL/Archive.zip > /tmp/Archive.zip
			unzip -o /tmp/Archive.zip -d ~/Library/Frameworks/
