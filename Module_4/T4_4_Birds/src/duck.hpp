#ifndef AALTO_ELEC_CPP_DUCK_CLASS
#define AALTO_ELEC_CPP_DUCK_CLASS

#include "bird.hpp"

/**
 * \brief TODO: Implement the Duck class.
 *
 * Class' constructor takes a string as a parameter, which is the duck's name.
 * When the Speak method is called a duck should say: <name>: QUACK\n
 * into the stream given as the argument.
 *
 * Due to the simplicity of the class, all of its member functions are
 * implemented in this header file.
 */

class Duck : public Bird
{
	private:
		std::string name_;

	public:
		Duck(std::string name);
		void Speak(std::ostream& os) const;

};


void Duck::Speak(std::ostream& os) const
{
	os << GetName() << ": QUACK" << std::endl;
}

Duck::Duck(std::string name): Bird(name)
{};



#endif