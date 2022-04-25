#pragma once
#include "Camera.h"
#include <thread>
#include <iostream>
#include <stdlib.h>
#define N 4
class Simulator
{
protected:
	Camera** camerasArray;
public:
	Simulator();
	~Simulator();
	void RunCamera();
	void Stop();
};

