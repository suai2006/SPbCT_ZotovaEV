@echo off
set file=hello
if exist %file%.obj del %file%.obj
if exist %file%.exe del %file%.exe

\masm32\bin\ml /c /coff %file%.asm
if errorlevel 1 goto errasm

if not exist rsrc.obj goto nores

\masm32\bin\Link /SUBSYSTEM:CONSOLE /OPT:NOREF %file%.obj rsrc.obj
if errorlevel 1 goto errlink

dir %file%.*
goto TheEnd

:nores
\masm32\bin\Link /SUBSYSTEM:CONSOLE /OPT:NOREF %file%.obj
if errorlevel 1 goto errlink
dir %file%.*
goto TheEnd

:errlink
echo _
echo Link error
goto TheEnd

:errasm
echo _
echo Assembly Error
goto TheEnd

:TheEnd

pause
