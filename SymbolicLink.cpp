/**
Copyright (c) 1997-2010 Osif Software Llc.

Author: Neeraj Shah A. (neerajx86@{yahoo.com,gmail.com})

Distributed under GNU GPL License
This program comes with absolutely NO WARRANTY and NO GUARANTEE.
*/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <stdio.h>

int main(int argc,char* argv[])
{
	if(argc<3)
	{
		//Inspired from open source software from Apple(r).
		printf("Usage: %s <source> <destination>\n",argv[0]);
		return 0;
	}

	if(!CreateSymbolicLinkA(argv[2],argv[1],SYMBOLIC_LINK_FLAG_DIRECTORY))
	{
		printf("Failed to create symbolic link. System error code %d",GetLastError());
		return -1;
	}

	return 0;
}