#include "Processo.hpp"
#include "ProcessoFila.hpp"
#include "ProcessoFila.cpp"
#include "GerenciadoProcessos.cpp"

int main() {
    GerenciadorProcessos gerenciador;

    int quantidade;
    int opcao;

    cout << "Quantos processos voce deseja ? : ";
    cin >> quantidade;

    cout << "qual opcao voce deseja ? 1 para fifo 2 para sjf: ";
    cin >> opcao;

    gerenciador.inserirProcessos(quantidade);


    int i = 0;
    switch (opcao) {
        case(1):
            do {
            cout << "Processos inseridos de FIFO:" << endl;
            gerenciador.exibirProcessos();

            double mediaTempo = gerenciador.calcularMediaTempo();
            cout << "medio do tempo de processos: " << mediaTempo << endl;

            cout << "Excluindo o ultimo processo..." << endl;
            gerenciador.excluirUltimoProcesso();

            cout << "Processos apos exclusao do ultimo:" << endl;
            gerenciador.exibirProcessos();
            i++;
            } while (i < quantidade);
            cout << "Feito a insercao e retirada da fila!!" << endl;
            break;
        case(2):
            do {
                cout << "Processos de SJF:" << endl;
                gerenciador.exibirProcessos();

                double mediaTempo = gerenciador.calcularMediaTempo();
                cout << "medio do tempo de processos: " << mediaTempo << endl;

                cout << "Excluindo o primeiro processo e ultimo inserido" << endl;
                gerenciador.excluirPrimeiroProcesso();

                cout << "Processos apos exclusao do ultimo:" << endl;
                gerenciador.exibirProcessos();
                i++;
            } while (i < quantidade);
            cout << "Feito a inserecao e retirada da fila!!"<<endl;
            break;
        default:
            cout << "Opcao digitada nao corresponde a nenhuma fornecida!!" << endl;
            break;
    }
    



    return 0;
}