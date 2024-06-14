#include"GerenciadorProcessos.hpp";
#include "Processo.hpp"


GerenciadorProcessos::GerenciadorProcessos() {}

void GerenciadorProcessos::inserirProcessos(int quantidade) {
    string tiposProcesso[2] = { "CPUBound", "I/O bound" };
    srand(time(0)); // semente de numero aletorios
    for (int i = 1; i <= quantidade; ++i) {
        string tipoProcesso = tiposProcesso[i % 2];
        int tempo = rand() % 100 + 1; // gera um valor de 1 a 100
        processos.emplace_back(ProcessoFila(i, tempo, tipoProcesso));
    }
}

void GerenciadorProcessos::excluirPrimeiroProcesso() {
    processos.erase(processos.begin());
};

void GerenciadorProcessos::excluirUltimoProcesso() {
    processos.pop_back();
}

double GerenciadorProcessos::calcularMediaTempo() const {
    int somaTempo = 0;
    for (const auto& processo : processos) {
        somaTempo += processo.getTempo();
    }

    return (somaTempo) / processos.size();
}

void GerenciadorProcessos::exibirProcessos() const {
    for (const auto& processo : processos) {
        cout << "id do processo: " << processo.getId() << ", tempo do processo: " << processo.getTempo() << ", tipo do processo: " << processo.getProcesso() << endl;
    }
}
