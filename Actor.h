#pragma once
class AActor
{
public:

	AActor() //������ 
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

	~AActor() //�Ҹ���
	{

	} 

	int HP;
	int MP;
	int Gold;

	void Move() {};
	void Attack() {};
};

