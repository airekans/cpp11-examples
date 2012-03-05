#CPPPATH=-I /usr/include/c++/4.6.0/ -I /usr/lib/gcc/i686-redhat-linux/4.6.0/../../../../include/c++/4.6.0/i686-redhat-linux -I /usr/lib/gcc/i686-redhat-linux/4.6.0/../../../../include/c++/4.6.0/backward -I /usr/lib/gcc/i686-redhat-linux/4.6.0/include -I /usr/local/include -I /usr/include

LDFLAG=-L/usr/lib/gcc/i686-redhat-linux/4.6.0 -L/usr/lib/gcc/i686-redhat-linux/4.6.0/../../..

%.out: %.cpp
	clang++ $(CPPPATH) $(LDFLAG) -o $@ $^ -std=c++11

all: main.out rvalue.out variadic_template.out init_list.out decltype.out \
		temp_alias.out

main.out: main.cpp
rvalue.out: rvalue.cpp
variadic_template.out: variadic_template.cpp
decltype.out: decltype.cpp
temp_alias.out: temp_alias.cpp
init_list.out: init_list.cpp
	g++ -std=c++0x -o $@ $^
