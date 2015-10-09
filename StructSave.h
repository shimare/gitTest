#ifndef SRTUCTSAVE_H
#define SRTUCTSAVE_H

extern void SaveStruct(void *ptr, int size, char * filename);
extern void ReadStruct(void *ptr, int size, char * filename);

typedef struct student
{
	int age1;
	int age2;
	char name[10];
}stu;

#endif