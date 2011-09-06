SRC =	src/Class.cpp \
		src/DataType.cpp \
		src/FileParser.cpp \
		src/Method.cpp \
		src/Structure.cpp \
		src/Variable.cpp \
		src/Utils.cpp \
		src/main.cpp 

all:
	g++ -std=gnu++0x $(SRC)


