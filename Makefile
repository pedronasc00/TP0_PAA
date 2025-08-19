CC = gcc

CFLAGS = -Wall -Wextra -std=c99

EXEC = quadro

SRCS = main.c figuras.c tela.c


all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)

.PHONY: all clean