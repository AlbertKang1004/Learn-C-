//#include <iostream>
//#include <string>
//
//class Monster {
//public:
//	enum class Type {
//		Dragon,
//		Goblin,
//		Ogre,
//		Orc,
//		Skeleton,
//		Troll,
//		Vampire,
//		Zombie,
//		max_monster_types
//	};
//private:
//	Type m_type { };
//	std::string m_name { };
//	std::string m_roar { };
//	int m_hitPoints { };
//
//public:
//	Monster(Type type, const std::string &name,
//			const std::string &roar, int hitPoints) :
//			m_type { type }, m_name { name }, m_roar { roar }, m_hitPoints {
//					hitPoints } {
//	}
//
//	std::string getTypeString(Type type) {
//		switch (type) {
//		case Type::Dragon:
//			return "Dragon";
//		case Type::Goblin:
//			return "Goblin";
//		case Type::Ogre:
//			return "Ogre";
//		case Type::Orc:
//			return "Orc";
//		case Type::Skeleton:
//			return "Skeleton";
//		case Type::Troll:
//			return "Troll";
//		case Type::Vampire:
//			return "Vampire";
//		case Type::Zombie:
//			return "Zombie";
//		default:
//			return NULL;
//		}
//
//	}
//
//	void print() {
//		std::cout << m_name << " the " << getTypeString(m_type) << " has "
//				<< m_hitPoints << " hit points and says " << m_roar << '\n';
//	}
//
//};
//
//int main() {
//	Monster skeleton { Monster::Type::Skeleton, "Bones", "*rattle*", 4 };
//	skeleton.print();
//	return 0;
//}
