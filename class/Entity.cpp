#include "Entity.h"

using namespace std;

Entity::Entity()
{
}

string Entity::get_pseudo()
{
	return pseudo;
}

void Entity::set_pseudo(string newPseudo)
{
	this->pseudo = newPseudo;
}

int Entity::get_level()
{
	return level;
}

void Entity::set_level(int newLevel)
{
	this->level = newLevel;
}

int Entity::get_life()
{
	return life;
}

void Entity::set_life(int newLife)
{
	this->life = newLife;
}

int Entity::get_action()
{
	return pointAction;
}

void Entity::set_action(int action)
{
	this->pointAction = action;
}

int Entity::get_deplacement()
{
	return pointDeplacement;
}

void Entity::set_deplacement(int deplacement)
{
	this->pointDeplacement = deplacement;
}
