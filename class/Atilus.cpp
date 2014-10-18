#include "Atilus.h"

Atilus::Atilus()
{
    caracteristique stats;
    stats.feu = 50;
    stats.dmgFixe = 15;
    stats.puisFeu= 10;
}

int Atilus::lame_du_destin(lvl_sort, caracteristique stats)
{
    /*
	** Inflige des degats sur 3 case devant lui
	** Porté max 2 case
	** | | | | | | |
	** |J| | |x|x|x|
	** | | | | | | |
	*/
	int degatSort;
	
	switch(lvl_sort)
	{
		case 1:
			degatSort = degats(15, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 2:
			degatSort = degats(25, 30, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 3:
			degatSort = degats(35, 40, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 4:
			degatSort = degats(50, 60, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
	}
}

int Atilus::decimation(lvl_sort, caracteristique stats)
{
	/*
	** Inlige des degats autour de lui
	** | | | | | |
	** | |x|x|x| |
	** | |x|J|x| |
	** | |x|x|x| |
	** | | | | | |
	*/
	
        int degatSort;
	
	switch(lvl_sort)
	{
		case 1:
		  degatSort = degats(12, 15, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 2:
		  degatSort = degats(17, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 3:
		  degatSort = degats(22, 25, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 4:
		  degatSort = degats(32, 35, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
	}
}

int Atilus::fureur(lvl_sort, caracteristique stats)
{
	/*
	** Sort d'absorption de vie
	**
	** Cible unique une fois par tour 
	** Portée maximum 4 case
	*/

        int degatSort;
	
	switch(lvl_sort)
	{
		case 1:
		  degatSort = degats(5, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 2:
		  degatSort = degats(10, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 3:
		  degatSort = degats(15, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
		
		case 4:
		  degatSort = degats(20, 23, stats.feu, stats.dmgFixe, stats.puisFeu);
		break;
	}
}

int Atilus::eradication(lvl_sort, caracteristique stats)
{
       /*
       ** Cible un joueur, sort a effet de zone
       **
       ** | | | | | |x| |
       ** | |J| | |x|C|x|
       ** | | | | | |x| |
       ** 
       ** Portée max 5 case
       */

       int degatSort
	 
       switch(lvl_sort)
       {
               case 1:
 		 degatSort = degats(10, 10, stats.feu, stats.dmgFixe, stats.puisFeu);
	       break;

               case 2:
		 degatSort = degats(10, 10, stats.feu, stats.dmgFixe, stats.puisFeu);
	       break;

               case 3:
		 degatSort = degats(10, 10, stats.feu, stats.dmgFixe, stats.puisFeu);
	       break;

               case 4:
		 degatSort = degats(10, 10, stats.feu, stats.dmgFixe, stats.puisFeu);
	       break;
       }
}
