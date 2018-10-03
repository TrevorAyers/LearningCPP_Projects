#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#ifndef MONSTERGEN_H_INCLUDED
#define MONSTERGEN_H_INCLUDED

class Monster
{
public:
    enum MonsterType
    {
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES
    };
private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_HP;
public:
    Monster(MonsterType type, std::string name, std::string roar, int HP) : m_type(type), m_name(name), m_roar(roar), m_HP(HP) {}
    std::string getTypeString();
    void print();
};

class MonsterGenerator
{
public:
    static std::string s_names[6];
    static std::string s_roars[6];
    static Monster generateMonster();
    static int getRandomNumber(int min, int max);
};

#endif
