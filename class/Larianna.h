#ifndef Larianna_h
#define Larianna_h

#include "Player.h"

class Larianna : public Player
{
	public:
		Larianna();
		
	private:
		int prison_glace(int lvl_sort, caracteristique stats);
		int bouclier(int lvl_sort, caracteristique stats);
		int embrasement(int lvl_sort, caracteristique stats);
		int appel_astre(int lvl_sort, caracteristique stats);
		
};

#endif  // Larianna
