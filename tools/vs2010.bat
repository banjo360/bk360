@echo off

set PROGRAMFILES=Z:\run\media\minirop\5E883B3B883B114F\Program Files (x86)
set XEDK=%PROGRAMFILES%\Microsoft Xbox 360 SDK
set SPEECHSDK=%PROGRAMFILES%\Microsoft SDKs\Speech\v11.0\Tools
set PATH=%XEDK%\bin\win32;%SPEECHSDK%;%PATH%;
set INCLUDE=%XEDK%\include\win32;%XEDK%\include\xbox;%XEDK%\include\xbox\sys
set LIB=%XEDK%\lib\win32;%XEDK%\lib\xbox
set _NT_SYMBOL_PATH=SRV*%XEDK%\bin\xbox\symsrv;%_NT_SYMBOL_PATH%

cl.exe /c /FAc /Fabuild/ /Iinclude /Fo%2 %1 /Zi /nologo /W3 /WX- /Ox /Os /D "NDEBUG" /D "_XBOX" /GF /Gm- /MT /GS- /Gy /fp:fast /fp:except- /Zc:wchar_t /Zc:forScope /GR- /openmp- /TC

:end
