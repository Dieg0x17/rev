int main() {

	int a=1, b=3, c;
	
	if (a < b) {
		c=0;
	} else {
		c=2;
	}

	return c;
}

	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0xc,%esp
	   0x080483f2 <+6>:     movl   $0x1,-0x8(%ebp)
	   0x080483f9 <+13>:    movl   $0x3,-0xc(%ebp)
	   0x08048400 <+20>:    mov    -0x8(%ebp),%eax
	   0x08048403 <+23>:    cmp    -0xc(%ebp),%eax
	   0x08048406 <+26>:    jge    0x8048411 <main+37>
	   0x08048408 <+28>:    movl   $0x0,-0x4(%ebp)
	   0x0804840f <+35>:    jmp    0x8048418 <main+44>
	   0x08048411 <+37>:    movl   $0x2,-0x4(%ebp)
	   0x08048418 <+44>:    mov    -0x4(%ebp),%eax
	   0x0804841b <+47>:    leave  
	   0x0804841c <+48>:    ret  
	*/

	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 0c                sub    $0xc,%esp
	 80483f2:       c7 45 f8 01 00 00 00    movl   $0x1,-0x8(%ebp)
	 80483f9:       c7 45 f4 03 00 00 00    movl   $0x3,-0xc(%ebp)
	 8048400:       8b 45 f8                mov    -0x8(%ebp),%eax
	 8048403:       3b 45 f4                cmp    -0xc(%ebp),%eax
	 8048406:       7d 09                   jge    8048411 <main+0x25>
	 8048408:       c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%ebp)
	 804840f:       eb 07                   jmp    8048418 <main+0x2c>
	 8048411:       c7 45 fc 02 00 00 00    movl   $0x2,-0x4(%ebp)
	 8048418:       8b 45 fc                mov    -0x4(%ebp),%eax
	 804841b:       c9                      leave  
	 804841c:       c3                      ret    
	 804841d:       66 90                   xchg   %ax,%ax
	 804841f:       90                      nop

	*/
