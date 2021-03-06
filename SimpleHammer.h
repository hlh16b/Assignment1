/* 
 * File:   SimpleHammer.h
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */
 
#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

class SimpleHammer : public Weapon
{
	public:
		SimpleHammer() : Weapon("Simple hammer", 25.0)
		{
		}
		
		virtual ~SimpleHammer() {};
		
		virtual double hit(double armor);
};

#endif