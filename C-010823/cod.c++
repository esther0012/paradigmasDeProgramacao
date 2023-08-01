#include <stdio.h>
#include <unistd.h>

int main()
{
    char mensagem[] = "Pressione a tecla 'Q' para sair   ";
    char buffer[2];

    write(1, mensagem, sizeof(mensagem)-1);

    while(1){
        read(0, buffer, 1);
    }
    
}