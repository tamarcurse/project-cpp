#include "Simulator.h"

Simulator::Simulator()
{
	camerasArray = (Camera**)malloc(sizeof(Camera*)*N);
	for (int i = 0; i < N; i++)
	{
		camerasArray[i] = new Camera(char('a' + i));
	}
	RunCamera();
}

void Simulator::RunCamera()
{
	char input;
	//std::thread * threads=(std::thread *) malloc(sizeof(std::thread)*N);
	//for (int i = 0; i < N; i++)
	//{
	//	threads[i] = std::thread(&Camera::run, camerasArray[i], i);
		//std::thread Thread(&Camera::run, camerasArray[i]);
	//}
	camerasArray[0]->run();
	std::cin >> input;
	camerasArray[0]->stop();
	//Stop();
}

void Simulator::Stop()
{
	for (int i = 0; i < N; i++)
	{
		camerasArray[i]->stop();
	}
}
