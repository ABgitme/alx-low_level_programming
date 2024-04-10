CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -lm
LDFLAGS = -lm
SRCS = 104-main.c 104-advanced_binary.c
OBJS = $(SRCS:.c=.o)
TARGET = 104-advanced_binary

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
