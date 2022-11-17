#include <stdio.h>
#include <windows.h>

typedef BOOL(__stdcall*fn)(CALID calId,INT  year,UINT  era);

void main(void){
    int a;
    const char* MSG[2]= {"Bisestile","Non Bisestile"};
    printf("\nInserire anno: ");
    scanf("%d",&a);
    HMODULE lib = LoadLibrary("kernel32.dll");
    fn f1 = (fn)GetProcAddress(lib,"IsCalendarLeapYear");
    printf(MSG[f1(1,a,1) ? 0 : 1]);
    FreeLibrary(lib);
}
