section .data
    message db 'Precione "Q" para sair.', 0

section .text 
    global _start

_start: 
    ;Relacionada a chamada de envio de informação para a tela;
    mov eax, 4 ; número da chamada do sistema para sys_write (imprimir);
    mov ebx, 1 ; descrevendo o tipo de informação para saída;
    mov ecx, message ;endereco da mensagem exibida
    mov edx, 23 ; tamanho da mensagem
    int 0x80 ;chamada do sistema

loop_start: 
    ;comandos para ler a tecla  do usuario
    mov eax, 3 ;numero da chamada do sistema para sys_read(ler as teclas)
    mov ebx, 0 ; descrevendo o tipo de informação da entrada 
    mov ecx, buffer ; endereço do buffer de leitura 
    mov edx, 1 ; tamanho da mensagem
    int 0x80 ;chamada do sistema

    cmp byte [buffer], 'q' ;comparação de duas variaveis
    je exit_program ; finaliza a execução caso a letra seja q

    ;Comandos para exibir a mensagem na tela
    mov eax, 4 
    mov ebx, 1
    mov ecx, message
    mov edx, 23
    int 0x80 

    jmp loop_start

exit_program:
    mov eax ,1
    xor ebx, ebx
    int 0x80


section .bss
    buffer resb 1; buffer para ler a informação do usuario    


