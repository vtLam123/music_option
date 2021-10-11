#include <windows.h>
#include <Mmsystem.h>
#include <mciapi.h>
#pragma comment(lib, "Winmm.lib")

int main()
{
    mciSendString(TEXT("open \"abc.mp3\" type mpegvideo alias mp3"), NULL, 0, NULL); //hàm mở file mp3
    mciSendString(TEXT("play mp3 repeat"), NULL, 0, NULL);      //hàm chơi repeat nhạc
    system("pause");
}