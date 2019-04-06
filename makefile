all:
	gcc -c main.c get_word.c dump_words.c initialize.c finalize.c add_words.c
	gcc main.o get_word.o dump_words.o initialize.o finalize.o add_words.o -o word_count

clean:
	rm *.o
