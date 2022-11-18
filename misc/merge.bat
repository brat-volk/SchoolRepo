@echo off
title merge
if not exist %1 goto end
if not exist %2 goto end
type %1 > temp.txt & echo. >> temp.txt & type %2 >> temp.txt & sort temp.txt > %3 & del /q temp.txt 
:end
echo.
echo salut
pause > nul