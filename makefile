# Declaration of variables
CC = g++
CC_FLAGS =  -w -std=c++11 -Wall -pedantic
#CC_FLAGS = /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread
#LDFLAGS := -lpthread -lgtest -lgtest_main -L/usr/lib
LDFLAGS := 

#worked: g++ EchoTest.cpp -o test /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread

SOURCEDIR = src
BUILDDIR = build

# File names
EXEC = run
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(patsubst $(SOURCEDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))

# Main target
$(BUILDDIR)/$(EXEC): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

# To obtain object files
$(OBJECTS): $(BUILDDIR)/%.o : $(SOURCEDIR)/%.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

dir: 
	mkdir -p $(BUILDDIR)

all: dir $(BUILDDIR)/$(EXEC)

# To remove generated files
clean:
	rm -f $(BUILDDIR)/$(EXEC) $(OBJECTS)
