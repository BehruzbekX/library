::Chatgpt helped me

@echo off
setlocal enabledelayedexpansion

:: Define default file names
set "defaultOutputFile=temp.cpp"

:: Check if arguments are provided


if "%~1"=="" (
    set "outputFile=%defaultOutputFile%"
) else (
    set "outputFile=%~1"
)

:: Define the root directory where your headers are located
set "encodedRootDir=C:/Users/HP/Desktop/compro/library"

:: Check if the root directory exists
if not exist "%encodedRootDir%" (
    echo Root directory %encodedRootDir% does not exist.
    exit /b 1
)

:: Create a variable to store include directories
set "includeDirs="

:: Iterate through all subdirectories within the root directory
for /d /r "%encodedRootDir%" %%D in (*) do (
    :: Avoid adding the root directory itself
    if "%%D" neq "%encodedRootDir%" (
        set "includeDirs=!includeDirs! -I %%D"
    )
)

:: Debug: Print the command to verify
echo Running command: g++ !includeDirs!  !outputFile! 2> error.log

:: Run oj-bundle with the collected paths
g++ !includeDirs! !outputFile! 2> error.log

:: Check if there are errors
if exist "error.log" (
    echo Error log content:
    type "error.log"
)

:: Check the content of the output file for any anomalies
if exist "!outputFile!" (
    setlocal enabledelayedexpansion
    set /a count=0
    for /f "usebackq tokens=*" %%A in ("!outputFile!") do (
        set /a count+=1
        if !count! geq 20 (
            goto :break
        )
    )
    :break
    endlocal
)

endlocal
