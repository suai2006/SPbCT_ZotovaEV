include \masm32\include\masm32rt.inc
; ИЗУЧЕНИЕ РАСШИРЕННОГО ЛИСТИНГА
;< 1. Здесь можно описывать макросы.>
macrodef MACRO par1, par2, par3
	LOCAL M3
	mov par2, par1 ; обычная команда
	;с обычным комментарием
	;; Скрытый комментарий
	M3:
		push par3 ;; обычные
		pop par2 ;; команды
endm
.data
	;<2. Здесь можно описывать статические переменные. >
	Num1 dd 11223344h, 55667788h
	Str1 db "ABCDEF", 0
.code
	start:
	;<3. Здесь можно вводить команды программиста. >
	Mov EAX, Num1 ; 11223344
	Mov dl, [Str2 + 3] ; J
	macrodef EAX, EDX, Num1
.data

;<4. Здесь можно описывать статические переменные. >
Num2 dd 99aabbcch, 0ddeeff00h
Str2 db "GHIJKLM",0
.code
;<5. Здесь можно вводить команды программиста. >
Mov EBX,[Num2 + 4] ; DDEEFF00
Mov dl, [Str1 +4] ; E
macrodef Num2, ESI, EAX
; 6. примеры реальных вызовов макросов и процедур
print "Hello, world!" ; макрос сообщения
;--------------------------------------
invoke ExitProcess,0 ; выход в Windows
end start