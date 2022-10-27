#include <iostream>

enum MonsterType {
	ogre, dragon, orc, giant_spider, slime
};

struct Monster {
	MonsterType type { };
	std::string name { };
	int health { };
};

std::string_view printType(Monster m) {
	switch (m.type) {
	case ogre:
		return "Ogre";
	case dragon:
		return "Dragon";
	case orc:
		return "Orc";
	case giant_spider:
		return "Giant Spider";
	case slime:
		return "Slime";
	default:
		return "???";
	}
}

void printMonster(Monster m) {
	std::cout << "This " << printType(m) << " is named " << m.name
			<< " and has " << m.health << " health.\n";
}

int main() {
//	Monster m1 { ogre, "Torg", 145 };
//	Monster m2 { slime, "Blurp", 23 };
//	printMonster(m1);
//	printMonster(m2);
	return 0;
}
