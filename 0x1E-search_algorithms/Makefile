CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89

SRCS = 0-main.c 0-linear.c
OBJS = $(SRCS:.c=.o)
TARGET = 0-linear

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
