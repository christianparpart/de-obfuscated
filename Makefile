all: program

program: program.c
	echo $(CC) -o $@ $^

clean:
	rm -f program

.PHONY: all clean
