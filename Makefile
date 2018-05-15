all: program
	@./program
	echo "& Rakan is awesome. The end."

program: program.cc
	@$(CXX) -O0 -ggdb3 -std=c++17 -o $@ $^

clean:
	@rm -f program

.PHONY: clean
