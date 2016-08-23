# Declaration of variables
CC = g++
CC_FLAGS =  -w -std=c++11 -Wall -pedantic
#CC_FLAGS = /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread
#LDFLAGS := -lpthread -lgtest -lgtest_main -L/usr/lib
LDFLAGS := -lgtest

#worked: g++ EchoTest.cpp -o test /usr/lib/libgtest.a /usr/lib/libgtest_main.a -lpthread

SOURCEDIR = src
BUILDDIR = build

# File names
EXEC = run
SOURCES = $(wildcard $(SOURCEDIR)/*.cpp)
OBJECTS = $(patsubst $(SOURCEDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))

# Main target
$(BUILDDIR)/$(EXEC): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

# To obtain object files
$(OBJECTS): $(BUILDDIR)/%.o : $(SOURCEDIR)/%.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

#Tests
TEST = test
SOURCEDIR_TEST = test
SOURCES_TEST = $(wildcard $(SOURCEDIR_TEST)/*.cpp)
OBJECTS_TEST = $(patsubst $(SOURCEDIR_TEST)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES_TEST))

$(BUILDDIR)/$(TEST): $(OBJECTS_TEST)
	$(CC) $^ -o $@ $(LDFLAGS)

# To obtain object files
$(OBJECTS_TEST): $(BUILDDIR)/%.o : $(SOURCEDIR_TEST)/%.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

$(BUILDDIR): 
	mkdir -p $(BUILDDIR)

all: $(BUILDDIR) $(BUILDDIR)/$(EXEC) $(BUILDDIR)/$(TEST)

# To remove generated files
clean:
	rm -f $(BUILDDIR)/$(EXEC) $(OBJECTS) $(OBJECTS_TEST)
