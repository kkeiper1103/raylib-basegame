//
// Created by kkeiper1103 on 3/23/22.
//

#include "StateMachine.h"

using namespace System::States;


void StateMachine::set(GameState id, BaseStatePtr state) {
    _states[id] = std::move(state);
}

void StateMachine::update() {
    if(_states[_current] != nullptr) _states[_current]->update();
}

void StateMachine::render() {
    if(_states[_current] != nullptr) _states[_current]->render();
}

void StateMachine::change(GameState state, bool reset) {
    if(_states[_current] != nullptr) _states[_current]->onExit();

    _current = state;

    if(reset && _states[_current] != nullptr) _states[_current]->onEnter();
}
