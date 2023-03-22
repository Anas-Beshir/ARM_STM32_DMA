#ifndef		DMA_PRIVATE_H
#define		DMA_PRIVATE_H

typedef	struct
{
	volatile	u32		CCR;
	volatile	u32		CNDTR;
	volatile	u32		CPAR;
	volatile	u32		CMAR;
	volatile	u32		Reserverd;
}Channel_Type

typedef	struct
{
	volatile	u32		ISR;
	volatile	u32		IFCR;
	Channel_Type		Channel[7];

}DMA_Type



#define		DMA1	((DMA_Type *)0x40020000)

#endif