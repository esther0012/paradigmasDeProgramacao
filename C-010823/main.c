#include <stdio.h>
#include <unistd.h>

int main()
{
  int nota;
  
  printf("Digite sua nota: ");
  scanf("%d", &nota);
  
  switch(nota){
      case 1:
      printf("Sua men��o � II");
            break;
            
      case 2:
      printf("Sua men��o � II");
            break;

      case 3:
      printf("Sua men��o � MI");
            break;

      case 4:
      printf("Sua men��o � MI");
            break;

     
      case 5:
      printf("Sua men��o � MM");
            break;

      case 6:
      printf("Sua men��o � MM");
            break;

      case 7:
      printf("Sua men��o � MS");
            break;

      case 8:
      printf("Sua men��o � MS");
            break;

      case 9:
      printf("Sua men��o � SS");
            break;

      case 10:
      printf("Sua men��o � SS");
            break;

  }
}
