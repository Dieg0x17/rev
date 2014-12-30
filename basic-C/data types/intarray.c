int main()
{
	int a[]={1, 3, 5, 7};
	return 0;
}
/* gdb
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     sub    $0x10,%esp
   0x080483f2 <+6>:     movl   $0x1,-0x10(%ebp)
   0x080483f9 <+13>:    movl   $0x3,-0xc(%ebp)
   0x08048400 <+20>:    movl   $0x5,-0x8(%ebp)
   0x08048407 <+27>:    movl   $0x7,-0x4(%ebp)
   0x0804840e <+34>:    mov    $0x0,%eax
   0x08048413 <+39>:    leave  
   0x08048414 <+40>:    ret    
*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 ec 10                sub    $0x10,%esp
 80483f2:       c7 45 f0 01 00 00 00    movl   $0x1,-0x10(%ebp)
 80483f9:       c7 45 f4 03 00 00 00    movl   $0x3,-0xc(%ebp)
 8048400:       c7 45 f8 05 00 00 00    movl   $0x5,-0x8(%ebp)
 8048407:       c7 45 fc 07 00 00 00    movl   $0x7,-0x4(%ebp)
 804840e:       b8 00 00 00 00          mov    $0x0,%eax
 8048413:       c9                      leave  
 8048414:       c3                      ret    
 8048415:       66 90                   xchg   %ax,%ax
 8048417:       66 90                   xchg   %ax,%ax
 8048419:       66 90                   xchg   %ax,%ax
 804841b:       66 90                   xchg   %ax,%ax
 804841d:       66 90                   xchg   %ax,%ax
 804841f:       90                      nop


*/
