/* 
 * File:   Tonbogiri.cpp
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */
 
#include "Tonbogiri.h"

double Tonbogiri::hit(double armor)
{
	// ignores 1/3 of armor automatically
	// if the armor is a power of 2 
	double damage = 0;
	int x = 2;
	
	if( armor % 2 == 0 )
	{
		while( x < armor )
		{
			x = x * 2;
		}
		if( x == armor )
		{
			damage = hitpoints;
		}
	}
	
	if( armor % 2 != 0 || x > armor )
	{
		damage = hitpoints - ( armor * ( 1/3 ) );
	}
	
	return damage;
}