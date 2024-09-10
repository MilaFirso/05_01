#include <iostream>
#include "print_pyramid.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int arr[] = { 94, 67, 18, 44, 55, 12, 6, 42 };
    int arrSize = std::size(arr);

    PrintArray(arr, arrSize);
    PrintPyramid(arr, arrSize);

      
}
