:: --------------- MG.BAT ----------------
@echo ��ࠡ��뢥��� 䠩� %1.ASM.
@if exist %1.lst del %1.lst
\masm32\bin\ml /EP /nologo %1.asm > %1.lst
@echo.
@echo ������� ࠡ��� ���ண������ (%1.LST)
@echo -------------------------------------------------
@type %1.lst
@pause
