#ifndef CRC_H
#define CRC_H

/*---------------------------------------------------------------------------
**
** CRC8()
**
** Calculates a CRC8 checksum on the indicated bytes.
**
**---------------------------------------------------------------------------
**
** Inputs:
**    buf			         - Where to start calculation
**    len                      - The amount of bytes to include
**
** Outputs:
**    Returns                  - The calculated CRC8 checksum
**
** Usage:
**    iCrc = CRC8( pbStart, 20 );
**
**---------------------------------------------------------------------------
*/


extern char CRC8(char * buf, int len);
#endif