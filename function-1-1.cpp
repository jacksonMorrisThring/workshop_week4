using namespace std;
#include <iostream>
#include <string>

int size_of_variable_star_t(){
    int a, *p;
    p=&a;

    return sizeof(p);
}