#include "Camera.h"

void System_Camera_ToggleInvertX(bool enable)
{
	Log("%s %u", FUNC_NAME, enable);
	if (enable)
	{
		Write<dword>((appBaseAddr + 0x57726), 0x00002000);
		Write<dword>((appBaseAddr + 0x57752), 0x00008000);
	}
	else
	{
		Write<dword>((appBaseAddr + 0x57726), 0x00008000);
		Write<dword>((appBaseAddr + 0x57752), 0x00002000);
	}
}
