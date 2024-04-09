CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -lm
LDFLAGS = -lm
SRCS = 100-main.c 100-jump.c
OBJS = $(SRCS:.c=.o)
TARGET = 100-jump

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
