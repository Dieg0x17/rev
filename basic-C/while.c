int main() {
	
	int i=0;

	while( i < 10){
		i++;	
	}

	return i;

}

	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0x4,%esp
	   0x080483f2 <+6>:     movl   $0x0,-0x4(%ebp)
	   0x080483f9 <+13>:    jmp    0x80483ff <main+19>
	   0x080483fb <+15>:    addl   $0x1,-0x4(%ebp)
	   0x080483ff <+19>:    cmpl   $0x9,-0x4(%ebp)
	   0x08048403 <+23>:    jle    0x80483fb <main+15>
	   0x08048405 <+25>:    mov    -0x4(%ebp),%eax
	   0x08048408 <+28>:    leave  
	   0x08048409 <+29>:    ret  
	*/


	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 04                sub    $0x4,%esp
	 80483f2:       c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%ebp)
	 80483f9:       eb 04                   jmp    80483ff <main+0x13>
	 80483fb:       83 45 fc 01             addl   $0x1,-0x4(%ebp)
	 80483ff:       83 7d fc 09             cmpl   $0x9,-0x4(%ebp)
	 8048403:       7e f6                   jle    80483fb <main+0xf>
	 8048405:       8b 45 fc                mov    -0x4(%ebp),%eax
	 8048408:       c9                      leave  
	 8048409:       c3                      ret    
	 804840a:       66 90                   xchg   %ax,%ax
	 804840c:       66 90                   xchg   %ax,%ax
	 804840e:       66 90                   xchg   %ax,%ax
	*/
