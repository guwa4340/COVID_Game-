all: Game

clean:
	rm Game.o Game

Game: Game.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Game.o -o Game

Game.o: Game.cpp
	$(CXX) $(CXXFLAGS) -c Game.cpp
