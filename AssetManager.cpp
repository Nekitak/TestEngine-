#include "AssetManager.h"

namespace Engine
{
	/* Implementation of constructor and methods for AssetManager in this application */
 
 

		void AssetManager::LoadMethod(std::string name, std::string fileName)
		{

			 /* here must be implement upload method ,
			 because it`s need for work with assets and
			 create addictions in our application */

		}

		std::string &AssetManager::GetChain(std::string name)
		{
			// here we can extract chain from our appltication map
			return this->_chain1.at(name); 
		}
}
 
 
 