#pragma once
#include "baseMessage.h"
#include <stdio.h>
#include <stdlib.h>
class Buffer
{
protected:
	unsigned char** buffer;
	int count;
public:
	void AddToBuffer(unsigned char* newMessege);
	unsigned char** GetBuffer();
	void CleanBuffer();
	Buffer();
	//~Buffer();

};

