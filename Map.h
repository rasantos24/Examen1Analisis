#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Map
{
    vector< pair<string,int>* > array;
  public:
    Map();
    int hash(string str);
    void put(string key, int value);
    int get(string key);
};


#endif // MAP_H
