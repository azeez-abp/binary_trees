CC = gcc
SRC = binary_tree_print.c 0-binary_tree_node.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c 3-binary_tree_delete.c 4-binary_tree_is_leaf.c 5-binary_tree_is_root.c 6-binary_tree_preorder.c 7-binary_tree_inorder.c 8-binary_tree_postorder.c 9-binary_tree_height.c 10-binary_tree_depth.c 11-binary_tree_size.c 11-main.c
OBJ = $(SRC:.c=.o)
NAME = 11-size
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ *.swp $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean
