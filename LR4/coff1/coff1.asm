include \masm32\include\masm32rt.inc
; �������� ������������ ��������
;< 1. ����� ����� ����뢠�� ������.>
macrodef MACRO par1, par2, par3
	LOCAL M3
	mov par2, par1 ; ���筠� �������
	;� ����� �������ਥ�
	;; ������ �������਩
	M3:
		push par3 ;; �����
		pop par2 ;; �������
endm
.data
	;<2. ����� ����� ����뢠�� ����᪨� ��६����. >
	Num1 dd 11223344h, 55667788h
	Str1 db "ABCDEF", 0
.code
	start:
	;<3. ����� ����� ������� ������� �ணࠬ����. >
	Mov EAX, Num1 ; 11223344
	Mov dl, [Str2 + 3] ; J
	macrodef EAX, EDX, Num1
.data

;<4. ����� ����� ����뢠�� ����᪨� ��६����. >
Num2 dd 99aabbcch, 0ddeeff00h
Str2 db "GHIJKLM",0
.code
;<5. ����� ����� ������� ������� �ணࠬ����. >
Mov EBX,[Num2 + 4] ; DDEEFF00
Mov dl, [Str1 +4] ; E
macrodef Num2, ESI, EAX
; 6. �ਬ��� ॠ���� �맮��� ����ᮢ � ��楤��
print "Hello, world!" ; ����� ᮮ�饭��
;--------------------------------------
invoke ExitProcess,0 ; ��室 � Windows
end start