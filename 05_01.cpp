#include <iostream>
#include "print_pyramid.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int arr[8] = { 94, 67, 18, 44, 55, 12, 6, 42 };

    PrintArray(arr, 8);
    PrintPyramid(arr, 8);

      
}