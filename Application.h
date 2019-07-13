#pragma once

/* include needed libs for functioning application */
#include<memory>
#include<string>

/* here we included components of our  application frame*/
#include "AssetManager.h"
#include "InputManager.h"
#include "StateMachine.h"

namespace Engine
{
	/* 
	Create a common frame for the performance of this application.
	We can create some frames and customize them for our needs, but it
	mudness.
	*/

	struct ApplicationData
	{
		/*create and union objects of frame components in one frame*/
		AssetManager assets;
		InputManager input;
		StateMachine machine;
		// and more...
	};

	// ptr for app struct
	typedef std::shared_ptr<ApplicationData> ApplicationDataRef;

	/* main app class , using frame*/
	class Application
	{
		public:
			Application();

		private:
			ApplicationDataRef _data = std::make_shared<ApplicationData>();

			void Run();
	};
}
