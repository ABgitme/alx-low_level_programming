CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -lm
LDFLAGS = -lm
SRCS = 106-main.c 106-linear_skip.c create_skiplist.c free_skiplist.c print_skiplist.c
OBJS = $(SRCS:.c=.o)
TARGET = 106-linear

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
