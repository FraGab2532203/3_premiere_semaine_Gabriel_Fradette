#include "FactoryQuete.h"
Quete* FactoryQuete::getrandomQuete()
{
	Quete* quete(0);
	quete = new Quete;

	return quete;
}
