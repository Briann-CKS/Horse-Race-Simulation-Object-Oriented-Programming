horseRace: main.o race.o horse.o
	g++ main.o race.o horse.o -o horseRace

horse.o: horse.h horse.cpp
	g++ -c horse.cpp

race.o: race.cpp race.h horse.h
	g++ -c race.cpp

main.o: main.cpp race.h horse.h
	g++ -c main.cpp

clean:
	rm -f *.o
	rm horseRace

run: horseRace
	./horseRace
