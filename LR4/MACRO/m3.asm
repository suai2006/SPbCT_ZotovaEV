.486
.MODEL flat, stdcall
  ; �窠1 - ���� ���ம�।������
.data
	massiv label word
	for y, <1,4,9,16,25>
		dw y
	endm
.code

For x,<1,3,5,7,9>
	mov eax, x
endm
end