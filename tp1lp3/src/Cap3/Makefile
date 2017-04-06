
#Para compilar y crear todos los objetos 
all: compilar


################################################
#todos los ejecutables creados al momento de compilar
ejecutables: L3.1 L3.2 L3.3 L3.4 L3.5 L3.6 L3.7

################################################

#Donde se encuentran todos los src para compilar 
compilar: Listing3.1.o Listing3.2.o Listing3.3.o Listing3.4.o Listing3.5.o Listing3.6.o Listing3.7.o
	g++ Listing3.1.o -o L3.1
	g++ Listing3.2.o -o L3.2
	g++ Listing3.3.o -o L3.3
	g++ Listing3.4.o -o L3.4
	g++ Listing3.5.o -o L3.5
	g++ Listing3.6.o -o L3.6
	g++ Listing3.7.o -o L3.7
 
################################################

#Compilacion individual de cada Listing
Listing3.1.o: Listing3.1.cpp
	g++ -c Listing3.1.cpp

Listing3.2.o: Listing3.2.cpp
	g++ -c Listing3.2.cpp

Listing3.3.o: Listing3.3.cpp
	g++ -c Listing3.3.cpp

Listing3.4.o: Listing3.4.cpp
	g++ -c Listing3.4.cpp

Listing3.5.o: Listing3.5.cpp
	g++ -c Listing3.5.cpp

Listing3.6.o: Listing3.6.cpp
	g++ -c Listing3.6.cpp

Listing3.7.o: Listing3.7.cpp
	g++ -c Listing3.7.cpp

############################################
#Borrar todos los objetos
clean:
	rm -rf *o compilar
############################################


#instalar los ejecutables en la direccion proporcionada en clase
install:  
	cp ejecutables /var/opt/lp3/tp1

