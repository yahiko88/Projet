#ifndef Atilus_h
#define Atilus_h

#include "Player.h"

class Atilus : public Player
{
	public:
		Atilus();

	private:
		int lame_du_destin(int lvl_sort, caracteristique stats);
		int decimation(int lvl_sort, caracteristique stats);
		int fureur(int lvl_sor, caracteristique stats);
		int eradication(int lvl_sort, caracteristique stats);
};

#endif  // Atilus
