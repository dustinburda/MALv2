CXX := g++
CXXFLAGS := -std=c++17
WARNINGS := -Wall -Wextra

SOURCES := Reader.cpp
HEADERS := Reader.h MalType.h

step0_repl: step1_repl.cpp ${SOURCES} ${HEADERS}
	${CXX} ${CXXFLAGS} ${WARNINGS} step1_read_print.cpp -o step1_read_print

step0_repl: step0_repl.cpp
	${CXX} ${CXXFLAGS} ${WARNINGS} step0_repl.cpp -o step0_repl

clean:
	rm -f step0_repl