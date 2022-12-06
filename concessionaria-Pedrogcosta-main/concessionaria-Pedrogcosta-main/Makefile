.DEFAULT_GOAL := all

#quando adicionar uma nova dependencia não esqueça de atualizar aqui!
OBJECTS=build/sistema.o build/executor.o build/automoveis.o build/caminhoes.o build/concessionaria.o build/veiculos.o build/motos.o 

build/sistema.o: src/sistema.cpp include/sistema.h
	g++ -Iinclude src/sistema.cpp -c -o build/sistema.o

build/executor.o: src/executor.cpp include/executor.h 
	g++ -Iinclude src/executor.cpp -c -o build/executor.o

#para adicionar novas regras apenas siga o formato
#build/concessionaria.o: src/concessionaria.cpp include/concessionaria.h
#	g++ -Iinclude src/concessionaria.cpp -c

objects: $(OBJECTS)

programa: objects src/programa.cpp
	g++ -Wall -fsanitize=address -Iinclude $(OBJECTS) src/programa.cpp -o build/programa

clean:
	rm build/*.o build/programa

all: programa

run:
	./build/programa
