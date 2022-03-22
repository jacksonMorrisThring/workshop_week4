#include <iostream>
using namespace std;

int size_of_variable_star_arr(){
    int *arr = new int[3];

    // int size = 0;

    // for (int i = 0; i < 3; i++){
    //     size = size + sizeof(*(arr + i));
    // }

    return sizeof arr;

    
}

// using namespace std;
// #include <iostream>
// #include <string>

// int size_of_variable_star_t(){
//     int a, *p;
//     p=&a;

//     return sizeof(p);
// }