#pragma once
class AActor
{
public:

	AActor() //持失切 
	{
		HP = 0;
		MP = 0;
		Gold = 0;

	} 

	AActor(int NewHP, int NewMP, int NewGold)
	{
		HP = NewHP;
		MP = NewMP;
		Gold = NewGold;
	}

	~AActor() //社瑚切
	{

	} 

	int HP;
	int MP;
	int Gold;

	void Move() {};
	void Attack() {};
};

