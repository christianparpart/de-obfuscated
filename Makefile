all: program
	@./program || true

program: program.c
	@$(CC) -o $@ $^

clean:
	@rm -f program

.PHONY: clean
