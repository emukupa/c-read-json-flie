run: main.c
	gcc -Wall -Wextra -I . -o $@ $^

clean:
	rm run