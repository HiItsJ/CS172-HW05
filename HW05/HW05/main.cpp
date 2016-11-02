//
//  main.cpp
//  HW05
//
//  Created by Josiah on 11/1/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;
// 12.2
template<typename T>
T linearSearch(const T list[], T key, T arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
int i = linearSearch(list, 4, 8); // Returns 1
int j = linearSearch(list, -4, 8); // Returns -1
int k = linearSearch(list, -3, 8); // Returns 5
double list2[] = {.456, 2.3, -5.78, 6.6, 4.74, 1.123, 2.499};
int x = linearSearch(list2, -4, 7);
string list3[] = {"hi", "hello", "yo", "hey", "hey there", "hello there", "ok"};
int y = linearSearch(list3, -4, 7);

// 12.4
template<typename T>
bool isSorted(const T list[], int size){
    
}
int main(){
    
    return 0;
}
