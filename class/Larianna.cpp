#include "Larianna.h"

Larianna::Larianna()
{
    caracteristique stats;
    stats.eau = 0;
    stats.feu = 0;
    stats.terre = 0;
    stats.dmgFixe = 0;
    stats.puisEau = 0;
    stats.puisFeu = 0;
    stats.puisTerre = 0;
}

int Larianna::prison_glace(int lvl_sort, caracteristique stats)
{
  /* (sort Eau)
  ** Inflige de faible dégats eau, et retire un nombre aléatoire de mouvement
  ** Porté max 6-7 case ?
  ** pas de ligne de vue.
  ** relance tous les 2-3 tour ? 
  */

  int degatSort;

  switch(lvl_sort)
    {
    case 1:
      degatSort = degats(0, 5, stats.eau, stats.dmgFixe, stats.puisEau);
      break;

    case 2:
      degatSort = degats(3, 8, stats.eau, stats.dmgFixe, stats.puisEau);
      break;

    case 3:
      degatSort = degats(6, 11, stats.eau, stats.dmgFixe, stats.puisEau);
      break;

    case 4:
      degatSort = degats(14, 19, stats.eau, stats.dmgFixe, stats.puisEau);
      break;
    }
}

int Larianna::bouclier(int lvl_sort, caracteristique stats)
{  
  /* (sort Terre)
  ** Pose un bouclier sur un alié
  ** lui donne un certain pourcentage de vie.
  ** et augmente ses resistance sur 2 tour
  ** relance tout les 3 tour
  */

  switch(lvl_sort)
    {
    case 1:
      +10% life + resistance
      break;

    case 2:
      +15% life + resistance
      break;

    case 3:
      +20% life + resistance
      break;

    case 4:
      +30% life + resistance
      break;
    }
}

int Larianna::embrasement(int lvl_sort, caracteristique stats)
{
  /* (sort feu)
  ** Sort de frappe du soutien.
  ** Applique également des faiblesse a la cible
  */

  int degatSort;

  switch(lvl_sort)
    {
    case 1:
      degatSort = degats(5, 8, stats.feu, stats.dmgFixe, stats.puisFeu);
      faiblesse 5%
      break;

    case 2:
      degatSort = degats(8, 11, stats.feu, stats.dmgFixe, stats.puisFeu);
      faiblesse 8%
      break;

    case 3:
      degatSort = degats(11, 14, stats.feu, stats.dmgFixe, stats.puisFeu);
      faiblesse 11%
      break;

    case 4:
      degatSort = degats(16, 20, stats.feu, stats.dmgFixe, stats.puisFeu);
      faiblesse 16%
      break;
    }
}

int Larianna::appel_astre(int lvl_sort, caracteristique stats)
{

  /* (sort vent)
  ** Sort de soin.
  ** soin en fonction des stats du support.
  */

  int soinSort;

  switch(lvl_sort)
    {
    case 1:
      soinSort = soin(15, 20, stats.vent, stats.puisVent);
      break;

    case 2:
      soinSort = soin(20, 25, stats.vent, stats.puisVent);
      break;

    case 3:
      soinSort = soin(25, 30, stats.vent, stats.puisVent);
      break;

    case 4:
      soinSort = soin(35, 40, stats.vent, stats.puisVent);
      break;
    }
}
