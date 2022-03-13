.486
.MODEL flat, stdcall
   ; точка1 - место макроопределений
.data
	A=1
	Massiv Label Word
	Repeat 10
	Dw A*A
	A = A+1
	Endm
.code
; точка3 - секция кода
end