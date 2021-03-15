CC     = gcc
RM     = rm -f
OBJS   = main.o \
         ListaSequencial.o

LIBS   =
CFLAGS =

.PHONY: bin/Release/01-ListaEstaticaSequencial.exe clean clean-after

all: bin/Release/01-ListaEstaticaSequencial.exe

clean:
	$(RM) $(OBJS) bin/Release/01-ListaEstaticaSequencial.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/01-ListaEstaticaSequencial.exe: $(OBJS)
	$(CC) -O2 -s -Wall -o $@ $(OBJS) $(LIBS)

main.o: main.c ListaSequencial.h
	$(CC) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

ListaSequencial.o: ListaSequencial.c ListaSequencial.h
	$(CC) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

