#include "Dot.h"

Dot::Dot() : Entity({ 20,20 }, "res/textures/dot.png")
{
	//EJERCICIO
	velocity = randomVelocity(100, 50);
}

void Dot::update(float deltaTime)
{
	//Entity::update(deltaTime); //Para no eliminar el comportamiento del padre

	auto pos = getPosition();
	pos.y += velocity * deltaTime;
	setPosition(pos);
}



// EJERCICIO
float Dot::randomVelocity(float max, float min)
{
	float difference = max - min + 1; 

	float random = rand() % (int)difference + min; //Sacamos el random de 0 a la diferencia y le sumamos el minimo
	
	return random;
}
// EJERCICIO

