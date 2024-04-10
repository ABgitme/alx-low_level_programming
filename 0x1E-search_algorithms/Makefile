CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -lm
LDFLAGS = -lm
SRCS = 103-main.c 103-exponential.c 1-binary.c
OBJS = $(SRCS:.c=.o)
TARGET = 103-exponential

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
