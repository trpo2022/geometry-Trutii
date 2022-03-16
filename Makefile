CFLAGS = -Wall -Wextra -Werror

all: main

main: bin/main

bin/main: obj/src/main/main.o obj/src/libmake/libmake.a
	gcc $(CFLAGS) -o $@ $^ -lm

obj/src/main/main.o: src/main/main.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libmake/libmake.a: obj/src/libmake/circle.o obj/src/libmake/triangle.o
	ar rcs $@ $^


obj/src/libmake/circle.o: src/libmake/circle.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libmake/triangle.o: src/libmake/triangle.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm


.PHONY: clean

clean:
	rm obj/src/libmake/*.a obj/src/libmake/*.o obj/src/main/*.o bin/main
