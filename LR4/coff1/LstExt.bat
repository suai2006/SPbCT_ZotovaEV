@echo off
echo ����������� ������� ����� %1
ECHO.
ml /c /coff /Fl%1.ELST /Sa %1
PAUSE
