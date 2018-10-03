#include "MonsterGen.h"

std::string Monster::getTypeString()
{
    switch (m_type)
    {
        case Monster::DRAGON:
            return "dragon";
        case Monster::GOBLIN:
            return "goblin";
        case Monster::OGRE:
            return "ogre";
        case Monster::ORC:
            return "orc";
        case Monster::SKELETON:
            return "skeleton";
        case Monster::TROLL:
            return "troll";
        case Monster::VAMPIRE:
            return "vampire";
        case Monster::ZOMBIE:
            return "zombie";
        default:
            return "unknown";
    }
}

void Monster::print()
{
    std::cout << m_name << " the " << getTypeString() << " has " << m_HP << " HP and says " << m_roar;
}

std::string MonsterGenerator::s_names[6] = {"Wallace", "Scaran", "Yeezy", "Hammond", "Yellow Heart", "Whitney"};
std::string MonsterGenerator::s_roars[6] = {"*creak*", "BOO!", "*glub glub*", "CACAW!", "Hello!", "*rattle*"};

Monster MonsterGenerator::generateMonster()
{
    return Monster(static_cast<Monster::MonsterType>(getRandomNumber(0, static_cast<int>(Monster::MAX_MONSTER_TYPES))),
                   s_names[getRandomNumber(0,5)],
                   s_roars[getRandomNumber(0,5)],
                   getRandomNumber(1, 100));
}

int MonsterGenerator::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

