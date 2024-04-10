CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -lm
LDFLAGS = -lm
SRCS = 105-main.c 105-jump_list.c create_list.c free_list.c print_list.c
OBJS = $(SRCS:.c=.o)
TARGET = 105-jump

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
