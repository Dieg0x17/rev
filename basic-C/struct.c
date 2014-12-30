typedef struct point {
	int	x;
	int	y;
	int	z;
} point;


int main(){
	point p1 = {1,2,3}, p2={0,0,1};
	return p1.y+p2.z;
}

	/* (gdb) disas main
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     sub    $0x18,%esp
	   0x080483f2 <+6>:     movl   $0x1,-0xc(%ebp)
	   0x080483f9 <+13>:    movl   $0x2,-0x8(%ebp)
	   0x08048400 <+20>:    movl   $0x3,-0x4(%ebp)
	   0x08048407 <+27>:    movl   $0x0,-0x18(%ebp)
	   0x0804840e <+34>:    movl   $0x0,-0x14(%ebp)
	   0x08048415 <+41>:    movl   $0x1,-0x10(%ebp)
	   0x0804841c <+48>:    mov    -0x8(%ebp),%edx
	   0x0804841f <+51>:    mov    -0x10(%ebp),%eax
	   0x08048422 <+54>:    add    %edx,%eax
	   0x08048424 <+56>:    leave  
	   0x08048425 <+57>:    ret    
	*/

	/*objdump -S struct.c.o
	080483ec <main>:
		int     y;
		int     z;
	} point;


	int main(){
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       83 ec 18                sub    $0x18,%esp
		point p1 = {1,2,3}, p2={0,0,1};
	 80483f2:       c7 45 f4 01 00 00 00    movl   $0x1,-0xc(%ebp)
	 80483f9:       c7 45 f8 02 00 00 00    movl   $0x2,-0x8(%ebp)
	 8048400:       c7 45 fc 03 00 00 00    movl   $0x3,-0x4(%ebp)
	 8048407:       c7 45 e8 00 00 00 00    movl   $0x0,-0x18(%ebp)
	 804840e:       c7 45 ec 00 00 00 00    movl   $0x0,-0x14(%ebp)
	 8048415:       c7 45 f0 01 00 00 00    movl   $0x1,-0x10(%ebp)
		return p1.y+p2.z;
	 804841c:       8b 55 f8                mov    -0x8(%ebp),%edx
	 804841f:       8b 45 f0                mov    -0x10(%ebp),%eax
	 8048422:       01 d0                   add    %edx,%eax
	}
	 8048424:       c9                      leave  
	 8048425:       c3                      ret    
	 8048426:       66 90                   xchg   %ax,%ax
	 8048428:       66 90                   xchg   %ax,%ax
	 804842a:       66 90                   xchg   %ax,%ax
	 804842c:       66 90                   xchg   %ax,%ax
	 804842e:       66 90                   xchg   %ax,%ax

	*/
