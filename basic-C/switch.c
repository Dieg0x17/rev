int main(){

	int i=0, n=1, z=2, p=3;

	switch( i ) 
	{
	    case 1:
		n++;
		break;
	    case 0 :
		z++;
		break;
	    default :
		p++;
		break;
	}
	
	return z;
}

	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0x10,%esp
	   0x080483f2 <+6>:     movl   $0x0,-0x8(%ebp)
	   0x080483f9 <+13>:    movl   $0x1,-0xc(%ebp)
	   0x08048400 <+20>:    movl   $0x2,-0x4(%ebp)
	   0x08048407 <+27>:    movl   $0x3,-0x10(%ebp)
	   0x0804840e <+34>:    mov    -0x8(%ebp),%eax
	   0x08048411 <+37>:    test   %eax,%eax
	   0x08048413 <+39>:    je     0x8048420 <main+52>
	   0x08048415 <+41>:    cmp    $0x1,%eax
	   0x08048418 <+44>:    jne    0x8048426 <main+58>
	   0x0804841a <+46>:    addl   $0x1,-0xc(%ebp)
	   0x0804841e <+50>:    jmp    0x804842b <main+63>
	   0x08048420 <+52>:    addl   $0x1,-0x4(%ebp)
	   0x08048424 <+56>:    jmp    0x804842b <main+63>
	   0x08048426 <+58>:    addl   $0x1,-0x10(%ebp)
	   0x0804842a <+62>:    nop
	   0x0804842b <+63>:    mov    -0x4(%ebp),%eax
	   0x0804842e <+66>:    leave  
	   0x0804842f <+67>:    ret    
	*/



	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 10                sub    $0x10,%esp
	 80483f2:       c7 45 f8 00 00 00 00    movl   $0x0,-0x8(%ebp)
	 80483f9:       c7 45 f4 01 00 00 00    movl   $0x1,-0xc(%ebp)
	 8048400:       c7 45 fc 02 00 00 00    movl   $0x2,-0x4(%ebp)
	 8048407:       c7 45 f0 03 00 00 00    movl   $0x3,-0x10(%ebp)
	 804840e:       8b 45 f8                mov    -0x8(%ebp),%eax
	 8048411:       85 c0                   test   %eax,%eax
	 8048413:       74 0b                   je     8048420 <main+0x34>
	 8048415:       83 f8 01                cmp    $0x1,%eax
	 8048418:       75 0c                   jne    8048426 <main+0x3a>
	 804841a:       83 45 f4 01             addl   $0x1,-0xc(%ebp)
	 804841e:       eb 0b                   jmp    804842b <main+0x3f>
	 8048420:       83 45 fc 01             addl   $0x1,-0x4(%ebp)
	 8048424:       eb 05                   jmp    804842b <main+0x3f>
	 8048426:       83 45 f0 01             addl   $0x1,-0x10(%ebp)
	 804842a:       90                      nop
	 804842b:       8b 45 fc                mov    -0x4(%ebp),%eax
	 804842e:       c9                      leave  
	 804842f:       c3                      ret   
	*/
