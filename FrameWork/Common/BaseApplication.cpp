#include "BaseApplication.hpp"
#include <iostream>
using namespace My;
using namespace std;

int BaseApplication::Initialize(){
	m_bQuit = false;
	return 0;
}

void BaseApplication::Finalize(){

}

void BaseApplication::Tick(){
	cout << "Base App Tick " << endl;
}

bool BaseApplication::IsQuit(){
	return m_bQuit;
}