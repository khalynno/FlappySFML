#include <stdio.h>
#include "Source/CoreGameFramework/Public/CoreGame.h"

CoreGame* coreGame = nullptr;
int main(int argc, char* argv[])
{
	printf("Hello World");

	coreGame = new CoreGame();

	coreGame->Init("Flappy", 1280, 720, false);

	return 0;
}