#pragma once

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )


#ifdef MYD1_EXPORTS
DllExport int getAnswer();
#else
DllImport int getAnswer();
#endif
