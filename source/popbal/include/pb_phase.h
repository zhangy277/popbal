/*
 * Phase.h
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_consts.h"

#ifndef PHASE_H_
#define PHASE_H_

namespace Popbal {

class Phase {
public:
	// Default constructor
	Phase();
	//! Create a new particle phase with a given number of ODEs
	Phase(unsigned int nODEs);
	virtual ~Phase();

	//! Set the number of ODEs
	void SetNumberODEs(unsigned int nODEs);

	//! Get a reference to the ODE vector
	dvec& ODEs();

private:
	//! The number of ODEs (i.e. particles)
	unsigned int mNumODE;

	//! The ODE state space vector
	dvec mODEs;
};

} /* namespace Popbal */
#endif /* PHASE_H_ */
