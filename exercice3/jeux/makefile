CC = c++
CFLAGS = -I include -Wextra -Werror -Wall
EXEC = chatsourie

all : $(EXEC)

chatsourie : main.o
	$(CC) obj/*.o -o bin/$(EXEC)

main.o : src/main.cpp
	$(CC) -o obj/main.o -c src/main.cpp $(CFLAGS)

agent.o : src/agent.cpp
	$(CC) -o obj/agent.o -c src/agent.cpp $(CFLAGS)

animal.o : src/animal.cpp
	$(CC) -o obj/animal.o -c src/animal.cpp $(CFLAGS)

chat.o : src/chat.cpp
	$(CC) -o obj/chat.o -c src/chat.cpp $(CFLAGS)

souris.o : src/souris.cpp
	$(CC) -o obj/souris.o -c src/souris.cpp $(CFLAGS)

aliment.o : src/aliment.cpp
	$(CC) -o obj/aliment.o -c src/aliment.cpp $(CFLAGS)

mais.o : src/mais.cpp
	$(CC) -o obj/mais.o -c src/mais.cpp $(CFLAGS)

visuel.o : src/visuel.cpp
	$(CC) -o obj/visuel.o -c src/visuel.cpp $(CFLAGS)

jeu.o : src/jeu.cpp
	$(CC) -o obj/jeu.o -c src/jeu.cpp $(CFLAGS)

*.o : jeu.o visuel.o aliment.o mais.o agent.o animal.o chat.o souris.o main.o


run : 
	bin/chatsourie

clean : 
	rm obj/*.o