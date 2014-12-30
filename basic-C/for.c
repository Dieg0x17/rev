int main(){

	int i=0, b=10;
	
	for (i; i>9; i++){
		b--;
	}

	return b;
}
	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0x8,%esp
	   0x080483f2 <+6>:     movl   $0x0,-0x4(%ebp)
	   0x080483f9 <+13>:    movl   $0xa,-0x8(%ebp)
	   0x08048400 <+20>:    jmp    0x804840a <main+30>
	   0x08048402 <+22>:    subl   $0x1,-0x8(%ebp)
	   0x08048406 <+26>:    addl   $0x1,-0x4(%ebp)
	   0x0804840a <+30>:    cmpl   $0x9,-0x4(%ebp)
	   0x0804840e <+34>:    jg     0x8048402 <main+22>
	   0x08048410 <+36>:    mov    -0x8(%ebp),%eax
	   0x08048413 <+39>:    leave  
	   0x08048414 <+40>:    ret   
	*/

	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 08                sub    $0x8,%esp
	 80483f2:       c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%ebp)
	 80483f9:       c7 45 f8 0a 00 00 00    movl   $0xa,-0x8(%ebp)
	 8048400:       eb 08                   jmp    804840a <main+0x1e>
	 8048402:       83 6d f8 01             subl   $0x1,-0x8(%ebp)
	 8048406:       83 45 fc 01             addl   $0x1,-0x4(%ebp)
	 804840a:       83 7d fc 09             cmpl   $0x9,-0x4(%ebp)
	 804840e:       7f f2                   jg     8048402 <main+0x16>
	 8048410:       8b 45 f8                mov    -0x8(%ebp),%eax
	 8048413:       c9                      leave  
	 8048414:       c3                      ret    
	 8048415:       66 90                   xchg   %ax,%ax
	 8048417:       66 90                   xchg   %ax,%ax
	 8048419:       66 90                   xchg   %ax,%ax
	 804841b:       66 90                   xchg   %ax,%ax
	 804841d:       66 90                   xchg   %ax,%ax
	 804841f:       90                      nop

	*/
