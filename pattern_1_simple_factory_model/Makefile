
CC = g++
AR = ar

ALL : calculate clean  	

operation.o : operation.cc operation.h 
		$(CC) -c $< -o $@

factory.o : factory.cc factory.h
		$(CC) -c -std=c++11 $< -o $@

libcal.a : factory.o operation.o
		$(AR) rcs $@ $^

calculate: calculate.cc calculate.h libcal.a
		$(CC)  -o $@ $< libcal.a

clean:
		rm -f operation.o factory.o 

cleanplus:
		rm -f libcal.a calculate

cleanall: clean cleanplus
