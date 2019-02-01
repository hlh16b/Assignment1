/* 
 * File:   CrazyRandomSword.cpp
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	srand(time(NULL));
	int temp = rand() % (armor/3) + 2;
	
	double damage = hitpoints - (armor - temp);
	
	if(damage < 0)
		return 0;
	return damage;
}