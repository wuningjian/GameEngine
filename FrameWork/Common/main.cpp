#include <stdio.h>
#include "IApplication.hpp"

using namespace My;
namespace My{
	//extern用在变量或者函数的声明前，用来说明“此变量/函数是在别处定义的，要在此处引用”。
	//extern声明不是定义，即不分配存储空间。也就是说，在一个文件中定义了变量和函数， 
	//在其他文件中要使用它们， 可以有两种方式：使用头文件，然后声明它们，
	//然后其他文件去包含头文件；在其他文件中直接extern
	extern IApplication* g_pApp;
}

int main(int argc, char** argv){
	int ret;
	if(ret = g_pApp->Initialize() != 0){
		printf("%s\n", "App Initialize Failed, will exit now");
		return ret;
	}

	while(!g_pApp->IsQuit()){
		g_pApp->Tick();
	}

	g_pApp->Finalize();

	return 0;
}