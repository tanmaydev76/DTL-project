# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall

# Target executable
TARGET = calc

# Source files
SRCS = main.cpp add.cpp sub.cpp mul.cpp div.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile each .cpp into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)