#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

vector< pair<int,int>* > array;

bool exists(vector<int> avl_tree, int number)
{
    for(int i = 0; i < 999999; i++)
    {
        if(number == i)
            return true;
        else if(number != i)
            return false;
        number++;
        array[exists(avl_tree, i)] = new pair<int, int>(i, number);
    }

    return false;
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
/*
//    ctlt<int> *r1 = sample1();
//    node<int>* node1 = convertToLinkedTree(max_heap)
vector <int> agmh;
vector <int> array2;

    for(int i = 0; i < 999999; i++)
    {
        array2[convertToLinkedTree(agmh)] = new BinaryNode.value;
        if(agmh != max_heap)
            return convertToLinkedTree(max_heap);
        else if(agmh == max_heap)
            return convertToLinkedTree(max_heap);
        else
            return NULL;
    }

  return convertToLinkedTree(max_heap);*/
}

int main ()
{
  test();
  return 0;
}






