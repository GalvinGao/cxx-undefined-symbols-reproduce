all:
	cargo build
	g++ -std=c++17 -o cpp_program src/main.cpp \
				-I . -I target/cxxbridge \
				-L target/debug -l cxxreproduce \
				-pthread -l dl
