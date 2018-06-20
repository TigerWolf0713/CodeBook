#include <iostream>
#include <algorithm>
using namespace std;

struct dset
{
    dset(int n):size(n){ p = new int [n]; for(int i = 0; i < size; i++)p[i] = i; }
    ~dset(){delete [] p;}

    void Union(int x, int y) //�Х��ˬd��H�ݩ󤣦Pgroup
    {
        p[Find(x)] = Find(y);
    }
    int Find(int i)
    {
        if(p[i] != i) p[i] = Find(p[i]);
        return p[i];
    }

    int size;
    int * p;
};

