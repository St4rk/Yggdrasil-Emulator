/*****************************************************************************
**  Esse arquivo � parte do YggdrasilEMU                                    **
**  YggdrasilEMU � um emulador de Digimon Masters Online, ele � open-source **
**  dessa forma voc� pode utilizar esses arquivos para estudo ou para base  **
**  em outros projetos de emuladores de servidores ou at� mesmo do DMO      **
**  Desenvolvido por St4rk                                                  **
******************************************************************************/

#include "socket.h"
#include <stdio.h>
#include <stdlib.h>

char* SERVER_IP = "127.0.0.1";
int SERVER_PORTA = 6999;

int main( void ) {
	printf("Yggdrasil Emulator - Char Server\n");
	printf("Written by St4rk - Rev 0.00\n");
    startSocket();
    startHost(SERVER_IP, SERVER_PORTA);
    startHandle();
    killSocket();
	return 0;
}
