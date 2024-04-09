CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89

SRCS = 1-main.c 1-binary.c
OBJS = $(SRCS:.c=.o)
TARGET = 1-binary

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
