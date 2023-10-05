#include "aviary.hpp"



	/**
	 * \brief TODO: method Add adds the given bird to the aviary.
	 *
	 * If the pointer is NULL, std::logic_error is thrown. When a bird is added
	 * to the aviary, it's ownership is transferred. When the aviary is
	 * destroyed, all the birds are destroyed too.
	 *
	 * \param bird A pointer to a bird object.
	 * \return nothing
	 */

	void Aviary::Add(Bird* bird)
	{
		aviary.push_back(bird);
	}

	/**
	 * \brief TODO: method SpeakAll calls the Speak method with the given
	 * parameter on all birds in the aviary.
	 *
	 * Does not modify the object, thus it should be const.
	 *
	 * \param os A reference to the desired ostream.
	 * \return nothing
	 */
	void  	Aviary::SpeakAll(std::ostream& os) const
	{
		for (unsigned int i = 0; i < aviary.size(); i++)
		{
			aviary[i]->Speak(os);
		}
	}

	
	/**
	 * \brief TODO: method Size returns the number of birds in the aviary.
	 *
	 * Method takes no arguments and does not modify the object, thus it should
	 * be const.
	 *
	 * \return How many birds there are in the aviary.
	 */
		size_t  	Aviary::Size()
		{
			return aviary.size();
		}

	/**
	 * \brief TODO: non-const version of the indexing operator [].
	 *
	 * If the index is out of bounds, you can optionally throw std::out_of_range exception. 
	 *
	 * \param idx desired index as an size_t integer value.
	 * \return A pointer to the bird (Bird*) at the index given as an argument
	 */

	Bird* Aviary::operator[](size_t idx)
	{   
		if (idx >= aviary.size())
		{
            // Handle index out of bounds, you can throw an exception or handle it as you prefer
            throw std::out_of_range("Index out of bounds");
        }
        return aviary[idx];
	}
	/**
	 * \brief TODO: const version of the indexing operator [].
	 *
	 * If the index is out of bounds, std::out_of_range is thrown.
	 *
	 * \param idx desired index as an size_t integer value.
	 * \return A pointer to the bird (const Bird*) at the index given as an
	 * argument
	 */
	const Bird* Aviary::operator[](size_t idx) const
	{
        if (idx >= aviary.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return aviary[idx];
	}

	// Aviary::Aviary(const Aviary& right)
	// {
	// 	aviary = std::vector<Bird*>(right.aviary.begin(), right.aviary.end());
	// }

	Aviary::~Aviary()
	{

		for (unsigned int i = 0; i < aviary.size(); i++)
		{
			delete aviary[i];
		}
	}