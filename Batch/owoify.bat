@echo off
::Not Perfectw
set "string=%1"
set string=%string:l=w%
set string=%string:L=W%
set string=%string:r=w%
set string=%string:R=W%
echo %string%
