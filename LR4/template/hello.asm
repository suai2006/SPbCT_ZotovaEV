include \masm32\include\masm32rt.inc

 .data

 .code   

start:

    call main
    inkey
    exit

main proc
    cls
    print "Hello World",13,10
    ret
main endp

end start
