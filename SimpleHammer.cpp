/* 
 * File:   SimpleHammer.cpp
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
	if(armor < 30)
		return hitpoints;
	double damage = hitpoints - armor;
	
	if(damage < 0)
		return 0;
	return damage;
}