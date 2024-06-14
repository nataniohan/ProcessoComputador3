#ifndef PROCESSOFILA_HPP
#define PROCESSOFILA_HPP

#include "Processo.hpp"

class ProcessoFila :public Processo {
public:


    ProcessoFila() = default;
    ProcessoFila(int id, int tempo, string processo);

    int getId() const;
    int getTempo() const;
    string getProcesso() const;
    void setId(int id);
    void setTempo(int tempo);
    void setProcesso(string processo);
};

#endif // PROCESSOFILA_HPP