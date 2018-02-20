set targetcpu=LM3S300

set dlibconfig="DLib_Config_Normal.h"

set iarpath="d:\users\um\cortex-m3\IAR 6.10.2 ARM\arm"
set linkercfg="d:\users\um\cortex-m3\IAR 6.10.2 ARM\arm\config\generic_cortex.icf"
set include="d:\users\um\cortex-m3\conformance\include"

del *.cof

rem COMPILE

%iarpath%\bin\iccarm.exe include\core_cm3.c     -D ewarm -D PART_%targetcpu% --diag_suppress Pa050 --debug --endian=little --cpu=Cortex-M3 -e --fpu=None --dlib_config %dlibconfig% -I \"%include%\" --use_c++_inline
%iarpath%\bin\iccarm.exe include\system_lm3s.c  -D ewarm -D PART_%targetcpu% --diag_suppress Pa050 --debug --endian=little --cpu=Cortex-M3 -e --fpu=None --dlib_config %dlibconfig% -I \"%include%\" --use_c++_inline
%iarpath%\bin\iccarm.exe startup_mcu_in.c                    -D ewarm -D PART_%targetcpu% --diag_suppress Pa050 --debug --endian=little --cpu=Cortex-M3 -e --fpu=None --dlib_config %dlibconfig% -I \"%include%\" --use_c++_inline
%iarpath%\bin\iccarm.exe bridge_mcu_in.c                        -D ewarm -D PART_%targetcpu% --diag_suppress Pa050 --debug --endian=little --cpu=Cortex-M3 -e --fpu=None --dlib_config %dlibconfig% -I \"%include%\" --use_c++_inline

rem LINK

%iarpath%\bin\ilinkarm.exe --redirect _Printf=_PrintfTiny --redirect _Scanf=_ScanfSmall -o bridge_mcu_in.elf --config %linkercfg% --semihosting --entry __iar_program_start       startup_mcu_in.o bridge_mcu_in.o system_lm3s.o core_cm3.o


del *.map
del *.asm
del *.sdf
del *.pwi
del *.dbk
del *.o