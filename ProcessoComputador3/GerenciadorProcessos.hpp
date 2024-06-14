#ifndef GERENCIADORPROCESSOS_HPP
#define GERENCIADORPROCESSOS_HPP

#include "Processo.hpp"
class GerenciadorProcessos {
private:
    vector<ProcessoFila> processos;

public:
    GerenciadorProcessos();
    void inserirProcessos(int quantidade);
    void excluirUltimoProcesso();
    double calcularMediaTempo() const;
    void exibirProcessos() const;
    void excluirPrimeiroProcesso();
};
#endif // GERENCIADORPROCESSOS_HPP