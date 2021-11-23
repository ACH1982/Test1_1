# Preprocessor generates *.i files (source code format) using -E flag
# Compiler generates *.s files (IR format = Intermediate Representation format) using -S flag
# Assembler generates *.o files (binary format) using -c flag
# Linker generates the executable file (binary format) using -o flag for defining the name of the executable file
# MACROS
CC = gcc
CFLAGS = -I.
DEPS = printCharacterTest1_1.h printIntegerTest1_1.h
OBJ = mainTest1_1.o printCharacterTest1_1.o printIntegerTest1_1.o
# Object files depends on source files (.c) and header files (macro DEPS)
%.o: %.c $(DEPS)
# Object files are generated according the command gcc -c
# Each object file (on the left of ":" = $@) depends on the source file (first element of dependency list = $<)
	$(CC) -c -o $@ $< $(CFLAGS)
# printMake depends on both object files (macro OBJ)
printMake: $(OBJ)
# Generating the executable from object files. The executable is that on the left of ":" (defined by $@) and the object files that on the right (defined by $^)
	$(CC) -o $@ $^ $(CFLAGS)