
#include<iostream>
#include<string>

using namespace std;



class Player
{
public:
	Player(float hp, float mp, string name)
		:hp(hp), mp(mp), name(name)
	{
	}

	float hp;
	float mp;
	string name;
};



class Monster
{
public:
	Monster(float hp, float mp, string name)
		:hp(hp), mp(mp), name(name)
	{
	}

	float hp;
	float mp;
	string name;
};


class Skill
{
public:
	Skill(int dmg)
		:dmg(dmg)
	{
	}

	int dmg;

};





int main()
{
	Player player1(1, 1, "º´»ç");
	Monster monster1(100, 50, "±«¹°");
	



}