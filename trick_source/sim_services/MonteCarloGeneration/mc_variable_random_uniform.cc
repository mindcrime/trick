/*******************************TRICK HEADER******************************
PURPOSE: ( Implementation of a class to support generation and assignment
           of a random value distributed uniformally.
           Provides float and integer distributions)

PROGRAMMERS:
  (((Gary Turner) (OSR) (October 2019) (Antares) (Initial)))
  (((Isaac Reaves) (NASA) (November 2022) (Integration into Trick Core)))
**********************************************************************/
#include "trick/mc_variable_random_uniform.hh"

/*****************************************************************************
Constructor
*****************************************************************************/
MonteCarloVariableRandomUniform::MonteCarloVariableRandomUniform(
    const std::string & var_name,
    unsigned int        seed,
    double              lower_bound,
    double              upper_bound)
  :
  MonteCarloVariableRandom( var_name, seed),
  distribution(lower_bound, upper_bound)
{}


/*****************************************************************************
generate_assignment
Purpose:(generates the random number and the input-file assignment)
*****************************************************************************/
void
MonteCarloVariableRandomUniform::generate_assignment()
{
  assign_double(distribution(random_generator));
}




/*****************************************************************************
Constructor
*****************************************************************************/
MonteCarloVariableRandomUniformInt::MonteCarloVariableRandomUniformInt(
    const std::string & var_name,
    unsigned int        seed,
    double              lower_bound,
    double              upper_bound)
  :
  MonteCarloVariableRandom( var_name, seed),
  distribution(lower_bound, upper_bound)
{}


/*****************************************************************************
generate_assignment
Purpose:(generates the random number and the input-file assignment)
*****************************************************************************/
void
MonteCarloVariableRandomUniformInt::generate_assignment()
{
  assign_int(distribution(random_generator));
}
