#ifndef Personnage_h
#define Personnage_h

#include "Entity.h"


class Personnage : public Entity
{
	public:
		Personnage();
		int  degats(int mini, int maxi, int stats, int dmgFixe, int puissance);

    protected:
        struct caracteristique
        {
            int life;
			int feu;
			int eau;
			int foudre;
			int terre;
			int vent;
			int dmgFixe;
			int puisFeu;
			int puisEau;
			int puisFoudre;
			int puisTerre;
			int puisVent;
        };
};

#endif // Personnage_h
