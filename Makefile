bytes:  obj/bytes_fn.o obj/main.o
	gcc $^ -o bin/bytes

obj/bytes_fn.o: src/bytes_fn.c
	gcc -Wall -I include/ -c $^ -o $@

obj/main.o: src/main.c
	gcc -Wall -I include/ -c $^ -o $@

.PHONY: clean

clean:
	rm bin/* obj/*

