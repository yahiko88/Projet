#ifndef Entity_h
#define Entity_h

#include <string>
#include <iostream>

class Entity
{
	public:
		Entity();
		
	protected:
		std::string get_pseudo();
		void set_pseudo(std::string newPseudo);
		int get_level();
		void set_level(int newLevel);
		int get_life();
		void set_life(int newLife);
		int get_action();
		void set_action(int action);
		int get_deplacement();
		void set_deplacement(int deplacement);

	private:
		std::string pseudo;
		int level;
		int life;
		int pointAction;
		int pointDeplacement;
};

#endif // Entity_h
