
int main()
{
	int a=0;
	int *b = &a;
	return 0;
}
/*
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     sub    $0x8,%esp
   0x080483f2 <+6>:     movl   $0x0,-0x8(%ebp)
   0x080483f9 <+13>:    lea    -0x8(%ebp),%eax
   0x080483fc <+16>:    mov    %eax,-0x4(%ebp)
   0x080483ff <+19>:    mov    $0x0,%eax
   0x08048404 <+24>:    leave  
   0x08048405 <+25>:    ret 
*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 ec 08                sub    $0x8,%esp
 80483f2:       c7 45 f8 00 00 00 00    movl   $0x0,-0x8(%ebp)
 80483f9:       8d 45 f8                lea    -0x8(%ebp),%eax
 80483fc:       89 45 fc                mov    %eax,-0x4(%ebp)
 80483ff:       b8 00 00 00 00          mov    $0x0,%eax
 8048404:       c9                      leave  
 8048405:       c3                      ret    
 8048406:       66 90                   xchg   %ax,%ax
 8048408:       66 90                   xchg   %ax,%ax
 804840a:       66 90                   xchg   %ax,%ax
 804840c:       66 90                   xchg   %ax,%ax
 804840e:       66 90                   xchg   %ax,%ax

*/
