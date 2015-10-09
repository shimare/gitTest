#include <stdio.h>
#include "StructSave.h"

void SaveStruct(void *ptr,int size, char * filename)
{
	FILE *fp;
	int i;
	if ((fp = fopen(filename, "wb")) == NULL)
	{
		printf("can not open the file %s", filename);
		return 0;
	}
	if (fwrite(ptr, size, 1, fp) != 1)
	{
		printf("file write error!\n");
	}
	fclose(fp);
}

void ReadStruct(void *ptr, int size, char * filename)
{
	FILE *fp;
	int i;
	if ((fp = fopen(filename, "rb")) == NULL)
	{
		printf("can not open the file %s", filename);
		return 0;
	}
	//fseek(fp, 0, SEEK_SET);
	if (fread(ptr, size, 1, fp) != 1)
	{
		printf("file read error!\n");
	}
	fclose(fp);
}

