#include <stdio.h>
#include <unistd.h>

int main()
{
  int nota;
  
  printf("Digite sua nota: ");
  scanf("%d", &nota);
  
  switch(nota){
      case 1:
      printf("Sua menção é II");
            break;
            
      case 2:
      printf("Sua menção é II");
            break;

      case 3:
      printf("Sua menção é MI");
            break;

      case 4:
      printf("Sua menção é MI");
            break;

     
      case 5:
      printf("Sua menção é MM");
            break;

      case 6:
      printf("Sua menção é MM");
            break;

      case 7:
      printf("Sua menção é MS");
            break;

      case 8:
      printf("Sua menção é MS");
            break;

      case 9:
      printf("Sua menção é SS");
            break;

      case 10:
      printf("Sua menção é SS");
            break;

  }
}
