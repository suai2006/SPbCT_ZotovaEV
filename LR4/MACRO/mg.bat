:: --------------- MG.BAT ----------------
@echo Обрабатывется файл %1.ASM.
@if exist %1.lst del %1.lst
\masm32\bin\ml /EP /nologo %1.asm > %1.lst
@echo.
@echo Результат работы макрогенератора (%1.LST)
@echo -------------------------------------------------
@type %1.lst
@pause
