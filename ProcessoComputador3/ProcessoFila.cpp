#include"ProcessoFila.hpp"
#include "Processo.hpp"

void ProcessoFila::setId(int id) {
    this->id = id;
};
void ProcessoFila::setTempo(int tempo) {
    this->tempo = tempo;
};
void ProcessoFila::setProcesso(string processo) {
    this->processo = processo;
};

//ProcessoFila::ProcessoFila(){// como estou chamado o construtor parametrico esse nao se faz necessario
//}

ProcessoFila::ProcessoFila(int id, int tempo, string processo) {
    setId(id);
    setTempo(tempo);
    setProcesso(processo);
}

int ProcessoFila::getId() const {
    return  this->id;
}

int ProcessoFila::getTempo() const {
    return this->tempo;
}

string ProcessoFila::getProcesso() const {
    return this->processo;
}