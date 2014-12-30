int factorial(int n){
	if (n < 2){
		return 1;
	} else {
		return n*factorial(--n);	
	}
}

	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0x4,%esp
	   0x080483f2 <+6>:     cmpl   $0x1,0x8(%ebp)
	   0x080483f6 <+10>:    jg     0x80483ff <factorial+19>
	   0x080483f8 <+12>:    mov    $0x1,%eax
	   0x080483fd <+17>:    jmp    0x8048412 <factorial+38>
	   0x080483ff <+19>:    subl   $0x1,0x8(%ebp)
	   0x08048403 <+23>:    mov    0x8(%ebp),%eax
	   0x08048406 <+26>:    mov    %eax,(%esp)
	   0x08048409 <+29>:    call   0x80483ec <factorial>
	   0x0804840e <+34>:    imul   0x8(%ebp),%eax
	   0x08048412 <+38>:    leave  
	   0x08048413 <+39>:    ret   
	*/

int main() {

	return factorial(5);

}

	/*
	   0x08048414 <+0>:     push   %ebp
	   0x08048415 <+1>:     mov    %esp,%ebp
	   0x08048417 <+3>:     sub    $0x4,%esp
	   0x0804841a <+6>:     movl   $0x5,(%esp)
	   0x08048421 <+13>:    call   0x80483ec <factorial>
	   0x08048426 <+18>:    leave  
	   0x08048427 <+19>:    ret   
	*/






	/*objdump -S 
	080483ec <factorial>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 04                sub    $0x4,%esp
	 80483f2:       83 7d 08 01             cmpl   $0x1,0x8(%ebp)
	 80483f6:       7f 07                   jg     80483ff <factorial+0x13>
	 80483f8:       b8 01 00 00 00          mov    $0x1,%eax
	 80483fd:       eb 13                   jmp    8048412 <factorial+0x26>
	 80483ff:       83 6d 08 01             subl   $0x1,0x8(%ebp)
	 8048403:       8b 45 08                mov    0x8(%ebp),%eax
	 8048406:       89 04 24                mov    %eax,(%esp)
	 8048409:       e8 de ff ff ff          call   80483ec <factorial>
	 804840e:       0f af 45 08             imul   0x8(%ebp),%eax
	 8048412:       c9                      leave  
	 8048413:       c3                      ret    


	08048414 <main>:
	 8048414:       55                      push   %ebp
	 8048415:       89 e5                   mov    %esp,%ebp
	 8048417:       83 ec 04                sub    $0x4,%esp
	 804841a:       c7 04 24 05 00 00 00    movl   $0x5,(%esp)
	 8048421:       e8 c6 ff ff ff          call   80483ec <factorial>
	 8048426:       c9                      leave  
	 8048427:       c3                      ret    
	 8048428:       66 90                   xchg   %ax,%ax
	 804842a:       66 90                   xchg   %ax,%ax
	 804842c:       66 90                   xchg   %ax,%ax
	 804842e:       66 90                   xchg   %ax,%ax

	*/
