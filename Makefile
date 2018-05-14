all: program

program: program.c
	$(CC) -o $@ $^

clean:
	rm -f program

.PHONY: all clean
