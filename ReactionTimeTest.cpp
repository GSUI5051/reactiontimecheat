#include <Afxwin.h>
#include <Windows.h>
#pragma comment (lib, "User32.lib")
int main(void){
HWND hWnd = ::GetDesktopWindow();
HDC hdc = ::GetDC(hWnd);
// HDC hdc = ::GetDC(NULL);
int x=894,y=547,i=0;//Determine the pixel for picking color
for(i=0;i<9;)
{
COLORREF pixel = ::GetPixel(hdc, x, y);
if (pixel != CLR_INVALID) {
int red = GetRValue(pixel);
int green = GetGValue(pixel);
int blue = GetBValue(pixel);
if(red==0x4b&&green==0xdb&&blue==0x6a)
{
	Sleep(29); //Don't forget to modify it to match your computer!
	SetCursorPos(x,y);//emulate mouse movement
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//emulate mouse clicks
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	i++;
}
printf("R=%x G=%x B=%x\n",red,green,blue);
} else {
printf("outside");
}
}
system("PAUSE");
return 0;
}