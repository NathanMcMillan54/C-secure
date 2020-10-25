executable: main.o
	 gcc -o main.exe main.o

all: main.c
	 gcc -c main.c

clean:
	 rm -rf *.exe
	 rm -rf *.o
