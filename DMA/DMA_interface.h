#ifndef		DMA_INTERFACE_H
#define		DMA_INTERFACE_H


void	DMA1_voidChannelInit(void);
void	DMA1_voidChannelStart(u32 * SrcAdd,u32 * DesAdd,u16 BlockLength);



#endif