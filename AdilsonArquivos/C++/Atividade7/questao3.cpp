#include <iostream> 


void adicionarUsuario(std::string usuarios[], std::string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    usuarios[tamanho] = usuario;      
    telefones[tamanho] = telefone; 
}


void exibirUsuario(std::string usuarios[], std::string telefones[], int tamanho)
{
    std::cout << "Lista de Contatos:\n";  
    for (int i = 0; i < tamanho; i++) 
    {
        std::cout << usuarios[i] << ": " << telefones[i] << "\n"; 
    }
}

int main()
{
    const int maxusuarios = 100;       
    std::string usuarios[maxusuarios]; 
    std::string telefones[maxusuarios];     
    int tamanho = 0;                 

    
    adicionarUsuario(usuarios, telefones, tamanho, "Coringa", "6969-6969");
    tamanho++;
    adicionarUsuario(usuarios, telefones, tamanho, "Pinguim", "1111-1111");
    tamanho++;
    adicionarUsuario(usuarios, telefones, tamanho, "Duas Caras", "6666-7777");
    tamanho++;

    
    exibirUsuario(usuarios, telefones, tamanho);

    
    
    return 0;
}