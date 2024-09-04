#pragma once

class myarray
{
public:
    myarray();
    myarray(int r, int c);
    char** get_array();
    ~myarray();
private:
    char** myptr;
    int nr;
    int nc;
};

