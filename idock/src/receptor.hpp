#pragma once
#ifndef IDOCK_RECEPTOR_HPP
#define IDOCK_RECEPTOR_HPP

#include "atom.hpp"
#include "array3d.hpp"
#include "box.hpp"

/// Represents a receptor.
class receptor
{
public:
	/// Default constructor.
	receptor() {}
	
	/// Constructs a receptor by parsing a receptor string in pdbqt format.
	/// @exception parsing_error Thrown when an atom type is not recognized.
	explicit receptor(istream& is, const box& b);

	vector<atom> atoms; ///< Receptor atoms.
	array3d<vector<size_t>> partitions; ///< Heavy atoms in partitions.
};

#endif
