CC = g++

ALL: client clean

client: client.cc client.h libcal.a 
	$(CC) -o $@ $< libcal.a

libcal.a: context.o strategy.o
	ar rcs $@ $^

context.o: context.cc context.h
	$(CC) -c $< -o $@

strategy.o: strategy.cc strategy.h
	$(CC) -c $< -o $@

clean:
	rm -f strategy.o context.o libcal.a

cleanplus:
	rm -f client

cleanall: clean cleanplus