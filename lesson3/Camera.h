#pragma once
#include "BaseMessage.h"
#include "StatusMesseage.h"
#include "DiscoverMessege.h"
#include "Buffer.h"
#define N 4
class Camera
{
protected:
	char cameraId;
	baseMessage** bufferMessege=NULL;
	int bufferMessegeIndex;
	Buffer* bufferString;
	bool isActive;
	//static int count;
public:
	Camera();
	Camera(char cameraId);
	~Camera();
	void Generate();
	void SendToBUffer();
	void run();
	void stop();
};

