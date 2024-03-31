CPP = g++
CFLAGS = -Wall -g

TARGET = ./build

# all
  all: $(TARGET)

  $(TARGET): $(TARGET).c $(CPP) $(CFLAGS) -o $(TARGET) $(TARGET).c

.all-post: TokenEnum.o Token.o Escaner.o HashMap.o HashNote.o main.o
	$(CPP) TokenEnum.o Token.o Escaner.o HashMap.o HashNote.o main.o $(TARGET)

TokenEnum.o: ../lectura/TokenEnum.hpp
	$(CPP) -c ../TokenEnum.cpp

Token.o: ../Tok.cpp
	$(CPP) -c ../Token.cpp

Escaner.o: ../Escaner.cpp
	$(CPP) -c ../Escaner.cpp

HashMap.o: ../estructuras/HashMap.cpp
	$(CPP) -c ../HashMap.cpp

HashNote.o: ../estructuras/HashNote.cpp
	$(CPP) -c ../HashNote.cpp


main.o: ../main.cpp
	$(CPP) -c ../main.cpp

# clean
clean:
	rm -f *.o $(TARGET)