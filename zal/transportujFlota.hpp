#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int count = 0;
	if (towar == 0) return 0;
	while (1) {
		Stocznia stocznia{};
		Statek* s1 = stocznia();
		s1->transportuj();
		Zaglowiec* t = dynamic_cast<Zaglowiec*>(s1);
		if (t != 0) { count++; }
		delete s1;
		if (towar <= stocznia.getTotalCap()) { break; }

	}
	return count;
}