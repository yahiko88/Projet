#include "Personnage.h"

using namespace std;

Personnage::Personnage()
{
}

int  Player::degats(int mini, int maxi, int stats, int dmgFixe, int puissance)
{
	int degat;
	int pioche;

	srand(time(NULL));
	pioche = (rand() % (maxi - mini +1)) + mini;

	degat = pioche +((stats + dmgFixe) * puissance); // puissance sous la forme 1.puissance
	//state élémentaire prend la caracteristique en fonction de l'ellement du sort !!!!

	return degat;
}
