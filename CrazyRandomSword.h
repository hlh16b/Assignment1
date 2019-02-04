/* 
 * File:   CrazyRandomSword.h
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */

#include <string>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{
	public:
		/* Note: I gave it hitpoints the value of 7 initially just to give it something, 
		and change it in the body of the constructor, as hitpoints is a protected variable 
		and accessible from here */
		CrazyRandomSword() : Weapon("Crazy random sword", 7)	
		{
			srand(time(NULL));
			hitPoints = rand() % 94 + 7;
			
			// Referred to the C++ reference "rand" page to see how to do this
		}
		
		virtual ~CrazyRandomSword() {};
		
		virtual double hit(double armor);
};

#endif