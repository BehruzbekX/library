:: Chatgpt helped me

@echo off
setlocal enabledelayedexpansion

:: Define the root directory where your headers are located
set "encodedRootDir=C:/Users/HP/Desktop/compro/library"

:: Check if the root directory exists

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

    :: Run oj-bundle with the collected paths
    g++ !includeDirs! main.cpp  2> error.log

    :: Check if there are errors
    if exist "error.log" (
        echo Error log content:
        type "error.log"
    )

    :: Check the content of temp.cpp for any anomalies
    if exist "temp.cpp" (
        setlocal enabledelayedexpansion
        set /a count=0
        for /f "usebackq tokens=*" %%A in ("temp.cpp") do (
            set /a count+=1
            if !count! geq 20 (
                goto :break
            )
        )
        :break
        endlocal
    )


endlocal
