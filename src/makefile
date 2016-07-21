# Declaration of variables
CC = g++
CC_FLAGS =  -w -std=c++11 -Wall -pedantic
#CC_FLAGS = /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread
LDFLAGS := -lpthread -lgtest -lgtest_main -L/usr/lib

#worked: g++ EchoTest.cpp -o test /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread

# File names
EXEC = run
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LDFLAGS)

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)
