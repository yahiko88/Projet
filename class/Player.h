#ifndef Player_h
#define Player_h

#include "Personnage.h"
#include <time.h>
#include <stdlib.h>

class Player : public Personnage
{
	public:
		Player();

	protected:
		void gain_level(int niveauPris);
};

#endif // Player_h
