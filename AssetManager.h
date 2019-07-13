#pragma once

/*include needed directories for manage assets in application*/

#include <string>
#include <map>

// #include <vector>



/*

now ,  this struct exists for 
creation logistic in  this application ,
not more

*/

namespace Engine
{
	class AssetManager
	{
		public:

			AssetManager() {}
			~AssetManager() {}

			/*now , here announce methods for load and extration file in map of application */
			void LoadMethod(std::string name , std::string fileName);
			std::string &GetChain(std::string name);

			// first method , and more ...

		private:
			/*now , here announce vars for  
			creating informational dependencies*/

			std::map <std::string, std::string> _chain1;

			//first var , and more...
	};
}
  
/* 

just for lulz ,  we can create some
identical classes in different namespaces
, and implement this shit will be hell  :D 

*/