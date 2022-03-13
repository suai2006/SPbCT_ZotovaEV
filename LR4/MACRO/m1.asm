.486
.MODEL flat, stdcall
  mdef MACRO
    ;Просто текст
    mov eax, edx ; обычная команда
    ;с обычным комментарием
    ;; Скрытый комментарий
    push edx ;; обычные
    pop esi ;; команды
  endm
.data
; точка2 - секция данных
.code
; точка3 - секция кода
end