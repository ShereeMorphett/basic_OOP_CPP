#ifndef AALTO_ELEC_CPP_VECTOR_STRINGS
#define AALTO_ELEC_CPP_VECTOR_STRINGS

#include <string>
#include <vector>

/**
 * \brief Reads the command from the standard input stream and
 * performs specific operations on a vector of strings.
 *
 * This function first prompts for a command, then gets the commands,
 * and finally performs the described operations according to the command.
 *
 * this function is required to have a local vector of strings variable,
 * which is initially empty. This local variable is used as the argument when
 * calling the other functions.
 */
void CMDReader();

void Adder(std::vector<std::string>& names);
void Remover(std::vector<std::string>& names);


void Printer(std::vector<std::string>& names);

#endif
