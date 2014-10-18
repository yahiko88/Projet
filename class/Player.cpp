#include "Player.h"

Player::Player()
{
}

void Player::gain_level(int niveauPris)
{
	int level = get_level();
	int life = get_life();

	level+= niveauPris;
	set_level(level);

	life+= 10;
	set_life(life);
}
