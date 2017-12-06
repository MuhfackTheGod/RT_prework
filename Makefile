NAME = rt_pre

SRC_NAME =	main.c \
		   	msdl_error.c \
			msdl_init.c \
			msdl_new_render.c \
			msdl_new_texture.c \
			msdl_new_window.c \
			msdl_screenshot.c \

SRC_DIR = ./srcs/

INCL_DIR = includes

OBJ_DIR = ./obj/

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_DIR), $(SRC_NAME:.c=.o))

CFLAGS = -Wall -Wextra -Werror  

IFLAGS = -I./libft/includes -I./$(INCL_DIR) -I ~/Library/Frameworks/SDL2.framework/Headers/ 

LFLAGS =  -L./libft ~/Library/Frameworks/SDL2.framework/SDL2 -framework SDL2 -lm -lft

all : $(NAME)

.PHONY : all clean

$(NAME) : $(OBJ)
	make -C ./libft/
	gcc $(CFLAGS) $(LFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	gcc $(CFLAGS) -c $(IFLAGS) $^ -o $@

norme :
	norminette $(SRC)
	norminette $(INCL_DIR)

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)
	make clean -C libft/
	make clean -C minilibx_macos/

fclean: clean
	make fclean -C libft/
	rm -f $(NAME)

re:fclean all
