/*******************************************************************************
	Generated by: DLL to C version 3.78
	Date: 2021-4-6
	Description: The implementation code for zeer.dll.
	Website: http://www.dll-decompiler.com
	Technical Support: support@dll-decompiler.com
*******************************************************************************/

#include "stdafx.h"
#include "Zeer.h"


HMODULE g_hZeer;
BOOL (WINAPI *Zeer_DllEntryPoint)(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);

extern UCHAR Zeer_text[0x1000];
extern UCHAR Zeer_rdata[0x1000];
extern UCHAR Zeer_data[0x2000];
extern UCHAR Zeer_PE[0x3BF000];

__declspec(align(16)) stZeer Zeer;

void* __stdcall Zeer_RVA(DWORD rvaAddr)
{
	return (UCHAR*)&Zeer + rvaAddr;
}

BOOL Zeer_Init()
{
	HMODULE hDll;
	DWORD oldProtect;
	void (*fInitData)(HMODULE,void*,void*);

	g_hZeer = GetModuleHandle(0);

	oldProtect = PAGE_EXECUTE_READWRITE;
	VirtualProtect(&Zeer,sizeof(Zeer),PAGE_EXECUTE_READWRITE,&oldProtect);

	memcpy(&Zeer.Text,&Zeer_text,sizeof(Zeer_text));
	memcpy(&Zeer.Rdata,&Zeer_rdata,sizeof(Zeer_rdata));
	memcpy(&Zeer.Data,&Zeer_data,sizeof(Zeer_data));
	memcpy(&Zeer.PE,&Zeer_PE,sizeof(Zeer_PE));

	hDll = ::LoadLibraryA("KERNEL32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"KERNEL32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(FARPROC*)Zeer_VA(0x10002000) = ::GetProcAddress(hDll,"LoadLibraryA");
	if(!*(FARPROC*)Zeer_VA(0x10002000))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002004) = ::GetProcAddress(hDll,"GetProcAddress");
	if(!*(FARPROC*)Zeer_VA(0x10002004))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002008) = ::GetProcAddress(hDll,"VirtualProtect");
	if(!*(FARPROC*)Zeer_VA(0x10002008))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000200C) = ::GetProcAddress(hDll,"VirtualAlloc");
	if(!*(FARPROC*)Zeer_VA(0x1000200C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002010) = ::GetProcAddress(hDll,"DisableThreadLibraryCalls");
	if(!*(FARPROC*)Zeer_VA(0x10002010))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002014) = ::GetProcAddress(hDll,"CloseHandle");
	if(!*(FARPROC*)Zeer_VA(0x10002014))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002018) = ::GetProcAddress(hDll,"CreateThread");
	if(!*(FARPROC*)Zeer_VA(0x10002018))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000201C) = ::GetProcAddress(hDll,"SetUnhandledExceptionFilter");
	if(!*(FARPROC*)Zeer_VA(0x1000201C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002020) = ::GetProcAddress(hDll,"GetCurrentProcess");
	if(!*(FARPROC*)Zeer_VA(0x10002020))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002024) = ::GetProcAddress(hDll,"TerminateProcess");
	if(!*(FARPROC*)Zeer_VA(0x10002024))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002028) = ::GetProcAddress(hDll,"IsProcessorFeaturePresent");
	if(!*(FARPROC*)Zeer_VA(0x10002028))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000202C) = ::GetProcAddress(hDll,"QueryPerformanceCounter");
	if(!*(FARPROC*)Zeer_VA(0x1000202C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002030) = ::GetProcAddress(hDll,"GetCurrentProcessId");
	if(!*(FARPROC*)Zeer_VA(0x10002030))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002034) = ::GetProcAddress(hDll,"GetCurrentThreadId");
	if(!*(FARPROC*)Zeer_VA(0x10002034))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002038) = ::GetProcAddress(hDll,"GetSystemTimeAsFileTime");
	if(!*(FARPROC*)Zeer_VA(0x10002038))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000203C) = ::GetProcAddress(hDll,"InitializeSListHead");
	if(!*(FARPROC*)Zeer_VA(0x1000203C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002040) = ::GetProcAddress(hDll,"IsDebuggerPresent");
	if(!*(FARPROC*)Zeer_VA(0x10002040))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002044) = ::GetProcAddress(hDll,"UnhandledExceptionFilter");
	if(!*(FARPROC*)Zeer_VA(0x10002044))
		return FALSE;

	hDll = ::LoadLibraryA("VCRUNTIME140.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"VCRUNTIME140.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(FARPROC*)Zeer_VA(0x1000204C) = ::GetProcAddress(hDll,"__std_type_info_destroy_list");
	if(!*(FARPROC*)Zeer_VA(0x1000204C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002050) = ::GetProcAddress(hDll,"memset");
	if(!*(FARPROC*)Zeer_VA(0x10002050))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002054) = ::GetProcAddress(hDll,"_except_handler4_common");
	if(!*(FARPROC*)Zeer_VA(0x10002054))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002058) = ::GetProcAddress(hDll,"memcpy");
	if(!*(FARPROC*)Zeer_VA(0x10002058))
		return FALSE;

	hDll = ::LoadLibraryA("api-ms-win-crt-runtime-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-runtime-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(FARPROC*)Zeer_VA(0x10002060) = ::GetProcAddress(hDll,"_cexit");
	if(!*(FARPROC*)Zeer_VA(0x10002060))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002064) = ::GetProcAddress(hDll,"_execute_onexit_table");
	if(!*(FARPROC*)Zeer_VA(0x10002064))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002068) = ::GetProcAddress(hDll,"_initialize_narrow_environment");
	if(!*(FARPROC*)Zeer_VA(0x10002068))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000206C) = ::GetProcAddress(hDll,"_configure_narrow_argv");
	if(!*(FARPROC*)Zeer_VA(0x1000206C))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002070) = ::GetProcAddress(hDll,"_seh_filter_dll");
	if(!*(FARPROC*)Zeer_VA(0x10002070))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002074) = ::GetProcAddress(hDll,"_initterm_e");
	if(!*(FARPROC*)Zeer_VA(0x10002074))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x10002078) = ::GetProcAddress(hDll,"_initterm");
	if(!*(FARPROC*)Zeer_VA(0x10002078))
		return FALSE;
	*(FARPROC*)Zeer_VA(0x1000207C) = ::GetProcAddress(hDll,"_initialize_onexit_table");
	if(!*(FARPROC*)Zeer_VA(0x1000207C))
		return FALSE;

	VirtualProtect(&Zeer_InitData, sizeof(Zeer_InitData), PAGE_EXECUTE_READWRITE, &oldProtect);

	*(FARPROC*)&fInitData = (FARPROC)&Zeer_InitData[0];
	fInitData(g_hZeer,Zeer_RVA,NULL);

	*(FARPROC*)&Zeer_DllEntryPoint = (FARPROC)Zeer_VA(0x100014C9);
	return TRUE;
}
