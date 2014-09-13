/*****************************************************************************
**  Esse arquivo � parte do YggdrasilEMU                                    **
**  YggdrasilEMU � um emulador de Digimon Masters Online, ele � open-source **
**  dessa forma voc� pode utilizar esses arquivos para estudo ou para base  **
**  em outros projetos de emuladores de servidores ou at� mesmo do DMO      **
**  Desenvolvido por St4rk                                                  **
******************************************************************************/

#ifndef SOCKET_H
#define SOCKET_H

#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>



WSADATA wsaData;
SOCKET playerSocket;
struct sockaddr_in Address;

DWORD WINAPI thread_socket(LPVOID param);
void startSocket();
void startHost(char *IP, int porta);
void startHandle();
void killSocket();

#endif
