#pragma once

/*
now , this struct exists for
creation virtual state this application ,
later this will inherited by other states
*/

namespace Engine
{
	class State
	{
		public:
			// here declare virtual methods , that will be rewrite 
			virtual void Init() = 0;

			virtual void HandleInput() = 0;

			virtual void Pause() { }
			virtual void Resume() { }

	};
}