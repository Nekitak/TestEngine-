#pragma once


#include <memory>
#include <stack>


#include "State.h"

/*
now , this struct exists for
add and remove states in this application 
*/
namespace Engine
{
	//ptr for state
	typedef std::unique_ptr<State> StateRef;

	class StateMachine  
	{
		public:

			StateMachine() {}
			~StateMachine() {}

			// methods for remove and add states
			void AddState(StateRef newState, bool isReplacing = true);
			void RemoveState();

			void ProcessStateChanges();

			StateRef &GetActiveState();


		private:
			/*now , here declaer vars for
			creating  flags of states*/

			std::stack<StateRef> _states;
			StateRef _newState;

			bool _isRemoving;
			bool _isAdding;
			bool _isReplacing;
	};
}