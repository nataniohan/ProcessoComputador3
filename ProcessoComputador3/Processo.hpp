#ifndef PROCESSO_HPP
#define PROCESSO_HPP

#include <iostream>
#include <vector>
#include <cstdlib> //rand()
#include <ctime>   //time()

using namespace std;

class Processo {
public:
    int id = 0;
    int tempo = 0;
    string processo = "";
};

#endif // PROCESSO_HPP