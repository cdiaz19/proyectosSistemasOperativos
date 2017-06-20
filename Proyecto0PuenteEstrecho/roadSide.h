#include <pthread.h>
//Lado de la carretera
//createdCars = Cantidad de carros creados
//wait = semaforo para que esperen cuando se termina de recorrer la carretera
typedef struct RoadSide{
	pthread_mutex_t wait;
	int createdCars;
	int next;
} RoadSide;

//Constructor de lado de la carretera
RoadSide createRoadSide(){
	pthread_mutexattr_t Attr;
	RoadSide roadSide;
	roadSide.createdCars = 0;
	roadSide.next = 0;
	pthread_mutex_init(&roadSide.wait, NULL);
	pthread_mutexattr_init(&Attr);
	pthread_mutexattr_settype(&Attr, PTHREAD_MUTEX_ERRORCHECK);
	pthread_mutex_init(&roadSide.wait, &Attr);
	return roadSide;
}












