CC = g++ #sets compiler IF you want to use variables

output: pizza.o driver.o resturant.o
	g++ pizza.o driver.o resturant.o -o output #compiles after linking everything into an output file

pizza.o: pizza.cpp pizza.h
	g++ -c pizza.cpp pizza.h



driver.o: driver.cpp 
	g++ -c driver.cpp

resturant.o: resturant.cpp resturant.h hours.h employee.h #where should i put the additional .h's
	g++ -c resturant.cpp resturant.h hours.h employee.h



clean:
	rm *.o output employee.h.gch