build:
	gcc -g -o bin/bus-calculator src/main.c

bus-calculator:
	make build
	bin/bus-calculator

debug:
	make build
	gdb bin/bus-calculator
