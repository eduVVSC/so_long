NAME = so_long

NAME_BONUS = so_long_bonus

CC = cc

CFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -Lminilibx-linux -lmlx_Linux -lX11 -lXext

PATH_MLX = srcs/using_mlx/
PATH_MAP = srcs/map_verification/

MAP_SRCS = map_utils.c map_possible.c map_check_full.c
MLX_SRCS = utils_mlx.c moves_mlx.c using_mlx.c

PATH_MLX_BONUS = bonus/using_mlx/
PATH_MAP_BONUS = bonus/map_verification/

MAP_SRCS_BONUS = map_utils_bonus.c map_possible_bonus.c map_check_full_bonus.c

MLX_SRCS_BONUS = alocating_images_bonus.c utils_mlx_bonus.c utils2_mlx_bonus.c \
		moves_mlx_bonus.c using_mlx_bonus.c animation_bonus.c

SRCS = $(addprefix $(PATH_MAP), $(MAP_SRCS)) $(addprefix $(PATH_MLX), $(MLX_SRCS)) srcs/main.c

SRCS_BONUS = $(addprefix $(PATH_MAP_BONUS), $(MAP_SRCS_BONUS)) $(addprefix $(PATH_MLX_BONUS), $(MLX_SRCS_BONUS)) bonus/main_bonus.c

LIBS = srcs/libs/libft/libft.a srcs/libs/ft_printf/libftprintf.a srcs/libs/gnl/gnl.a

OBJ = $(SRCS:%.c=%.o)
OBJ_BONUS = $(SRCS_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C minilibx-linux/
	@make -C srcs/libs/libft
	@make -C srcs/libs/ft_printf
	@make -C srcs/libs/gnl
	@$(CC) $(OBJ) $(LIBS) $(MLX_FLAGS) -o $(NAME)
	@echo "-->Objects created<--"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C minilibx-linux/
	@make clean -C srcs/libs/ft_printf
	@make clean -C srcs/libs/libft
	@make clean -C srcs/libs/gnl
	@rm -f $(OBJ)
	@rm -f $(OBJ) $(OBJ_BONUS)
	@echo "->Objects cleaned<-"

fclean: clean
	@make fclean -C srcs/libs/ft_printf
	@make fclean -C srcs/libs/libft
	@make fclean -C srcs/libs/gnl
	@rm -f $(NAME) $(NAME_BONUS)
	@echo "->$(NAME) erase<-"

bonus: fclean $(OBJ_BONUS)
	@make -C minilibx-linux/
	@make -C srcs/libs/libft
	@make -C srcs/libs/ft_printf
	@make -C srcs/libs/gnl
	@$(CC) $(OBJ_BONUS) $(LIBS) $(MLX_FLAGS) -o $(NAME_BONUS)
	@echo "-->Bonus created<--"

re: fclean all

.PHONY: all clean fclean bonus re
