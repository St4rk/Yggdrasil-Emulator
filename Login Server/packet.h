/*****************************************************************************
**  Esse arquivo � parte do YggdrasilEMU                                    **
**  YggdrasilEMU � um emulador de Digimon Masters Online, ele � open-source **
**  dessa forma voc� pode utilizar esses arquivos para estudo ou para base  **
**  em outros projetos de emuladores de servidores ou at� mesmo do DMO      **
**  Desenvolvido por St4rk                                                  **
******************************************************************************/

#ifndef PACKET_H
#define PACKET_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "yggdrasil.h"

/* Login Server Packets */

typedef enum PACKET_HEADER {
	RECV_AUTH_PACKET 		= 0x0,
	RECV_CONFIRM_PACKET 	= 0xFFFF,
	RECV_ACCOUNT_PACKET 	= 0xE50C,
	RECV_CHANNEL_PACKET 	= 0xFFFE,
	RECV_REFRESH_PACKET     = 0xA506,
	RECV_SCHANNEL_PACKET    = 0xA606,

	SEND_AUTH_PACKET		= 0xFFFF,
	SEND_MENSAGEM_PACKET 	= 0xCEA,
	SEND_CONFIRM_PACKET		= 0xFFFE,
	SEND_INFO_PACKET 		= 0x0385,
	SEND_CHANNEL_PACKET 	= 0xCE6
};


void sendAuth();
void sendConfirm();
void sendMensagem(char *name, int size);
void sendChannels(int nIndex);
void sendSelectedChannel(int nIndex, u8* Packet);
void handlePacket(int nIndex, u8 *packet);


void startSQLite();

/* Packet System */
u32 packet_count;
u8 packetBuffer[BUFFER_SIZE];

void writeHeader(u16 packetHeader);
void writeByte(u8 b);
void writeShort(u16 s);
void writeInt(u32 i);
void writeString(u8* T, u32 size);
void writeSize(u16 packetSize);
void clearPacket();
void addCount(int i);
void clearPacket();

int getCount();

#endif // PACKET_H
