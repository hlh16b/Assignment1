/* 
 * File:   Tonbogiri.h
 * Author: Hannah Howard <hlh16b@my.fsu.edu>
 *  
 */
 
#include "Weapon.h"

#ifndef TONBOGIRI_H
#define TONBOGIRI_H

class Tonbogiri : public Weapon 
{
	public:
		Tonbogiri : Weapon("Sword of Tonbogiri", 50.0)
		{
		}
		
		virtual ~Tonbogiri() {};
		
		virtual double hit(double armor);
}

#endif