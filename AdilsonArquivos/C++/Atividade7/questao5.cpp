#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <stack>    // Biblioteca para utilizar fila em C++

int main()
{
    std::stack<std::string> emprestimoLivros; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    emprestimoLivros.push("Lex Luthor");
    emprestimoLivros.push("Senhor do aneis");
    emprestimoLivros.push("Assim que Acaba");
    emprestimoLivros.push("Harry Potter");
    emprestimoLivros.push("Jogos Vorazes");
    emprestimoLivros.push("Diario de um Banana");


    // Exibe a Emprestimos inicosal
    std::cout << "Lista de emprestimos:\n";
    std::stack<std::string> listaCopia = emprestimoLivros; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!emprestimoLivros.empty())
    {
        std::cout << "\nLivro entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Emprestimos vazios!\n";
    }

    if (!emprestimoLivros.empty())
    {
        std::cout << "Livro entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Emprestimos vazios!\n";
    }



    // Exibe a Emprestimos apósos as conclusões
    std::cout << "\nEmprestimos apos os concluir algumas emprestimos:\n";
    listaCopia = emprestimoLivros; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl;
        listaCopia.pop();
    }

    return 0;
}