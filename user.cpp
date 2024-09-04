#include "array.h"
#include <iostream>

int main()
{
    myarray arr_obj(4, 4);
    char** arr = arr_obj.get_array();
    arr[2][2] = 5;
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}