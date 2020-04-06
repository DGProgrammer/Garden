#pragma once
#include "Entity.h"
class Dot : public Entity
{
public:
	Dot();
	virtual void update(float deltaTime) override;

	//EJERCICIO
private:
	float velocity;
	float randomVelocity(float max, float min);
	//EJERCICIO
};

