@echo off
setlocal enabledelayedexpansion

REM Set paths and initialize counter
set "destPackages=C:\Users\%USERNAME%\AppData\Local\Arduino15\packages"
set "destHardware=C:\Users\%USERNAME%\Documents\Arduino\hardware"
set "sourcePackages=%~dp0windows"
set "sourceHardware=%~dp0deauther-esp8266"
set "copiedFiles=0"

REM Create target folders if they don't exist
mkdir "%destPackages%" 2>nul
mkdir "%destHardware%" 2>nul

REM Copy packages
if exist "%sourcePackages%" (
    robocopy "%sourcePackages%" "%destPackages%" /E /COPYALL /R:0 /W:0 /XO /XN /XC /NDL /NJH /NJS /NP /NS /NC /BYTES
    set /a "temp=%ERRORLEVEL%"
    if %temp% gtr 7 set /a "copiedFiles+=temp-7"
) else (
    echo Source packages folder not found: %sourcePackages%
)

REM Copy hardware
if exist "%sourceHardware%" (
    robocopy "%sourceHardware%" "%destHardware%" /E /COPYALL /R:0 /W:0 /XO /XN /XC /NDL /NJH /NJS /NP /NS /NC /BYTES
    set /a "temp=%ERRORLEVEL%"
    if %temp% gtr 7 set /a "copiedFiles+=temp-7"
) else (
    echo Source hardware folder not found: %sourceHardware%
)

REM Display result and wait
echo.
echo Installation check completed.
echo Files copied: !copiedFiles!
echo.
pause
