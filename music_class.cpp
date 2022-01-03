#include <iostream>
#include "Music.hpp"

int main() {

	Album Extreme_Power_Metal("Extreme Power Metal", "DragonForce", 10);
	std::cout << Extreme_Power_Metal.get_Albumtitle() << endl;
	std::cout << Extreme_Power_Metal.get_artist() << endl;
	std::cout << Extreme_Power_Metal.get_Songtotal() << endl;

	Song Enemy("Enemy", 175);
	cout << Enemy.get_Songtitle() << endl;
	cout << Enemy.get_length() << endl;

	Song Strangers("Strangers", 280, "Extreme Power Metal", "DragonForce");
	cout << "Song title: " << Strangers.get_Songtitle() << ", Song length: " << Strangers.get_length() << " minutes, Album: " << Strangers.get_Albumtitle() << ", Artist: " << Strangers.get_artist();

	

}