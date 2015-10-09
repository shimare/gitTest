#include "CRC8.h"

char CRC8(char * buf, int len)
{
	char crc = 0x00;
	char poly = 0x07;
	for (int i = 0; i < len; i++)
	{
		crc = crc^*buf++;
		for (int j = 0; j < 8; j++)
		{
			if (crc & 0x80)
			{
				crc <<= 1;
				crc ^= poly;
			}
			else
				crc <<= 1;
		}
	}
	return crc & 0xff;
}