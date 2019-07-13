#pragma once

/*include  needed directories for input in application*/
#include <string>

/*

now ,  this struct exists for
creation input in  this application ,
not more

*/


namespace Engine
{
	class InputManager
	{
		public:

			InputManager() {};
			~InputManager() {};

			/* now , here announce methods for upon receipt and reaction in  application */
			bool isInfoInput(std::string info);

			// first method , and more ...

	};
}