#include <iostream>

namespace monster {

enum MonsterType {
	orcs, goblins, trolls, ogres, skeletons,
};

}

int main() {
	monster::MonsterType troll1 { monster::trolls };
	std::cout << troll1 << std::endl;
	return 0;
}
