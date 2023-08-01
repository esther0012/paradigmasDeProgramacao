#include <stdio.h>
#include <unistd.h>

int main()
{
    char mesage[] = "Pressione a tecla 'Q' para sair\n";
    char msg[] = "Programa finalizado.";
    char buffer[2];
    
    write(1, mesage, sizeof(mesage)-1);
    while(1){
        read(0, buffer, 1);
        if(buffer[0] == 'q'){
        	write(1, msg, sizeof(msg)-1);
            break;
        
        }
        write(1, mesage, sizeof(mesage)-1);
    }
    return 0;
}
