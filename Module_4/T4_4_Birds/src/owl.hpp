#ifndef AALTO_ELEC_CPP_OWL_CLASS
#define AALTO_ELEC_CPP_OWL_CLASS

#include "bird.hpp"

/**
 * \brief TODO: Implement the Owl class.
 *
 * Class' constructor takes a string as an argument, which is the owl's name.
 *
 * Due to the simplicity of the class, all of its member functions are
 * implemented in this header file.
 */
class Owl : public Bird
{
	private:
		std::string name_;

	public:
		Owl(std::string name);
		void Speak(std::ostream& os) const;

};


void Owl::Speak(std::ostream& os) const
{
	os << GetName() << ": WHUU" << std::endl;
}

Owl::Owl(std::string name): Bird(name)
{};


#endif