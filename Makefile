CC = gcc
CFLGS = -g -Wall
LFLAGS = -lgsl -lgslcblas -lm
SRC = src
OBJ = obj
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/*.c, $(OBJ)/*.o, $(SRCS))
BIN = markov

all: $(BIN)


$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LFLAGS)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLGS) -c $< -o $@ $(lflags)



clean:
	rm -f $(BIN)
