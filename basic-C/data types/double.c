int main()
{
	double a=55.32;
	return 0;
}
/* gdb
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     and    $0xfffffff8,%esp
   0x080483f2 <+6>:     sub    $0x8,%esp
   0x080483f5 <+9>:     fldl   0x80484a0
   0x080483fb <+15>:    fstpl  (%esp)
   0x080483fe <+18>:    mov    $0x0,%eax
   0x08048403 <+23>:    leave  
   0x08048404 <+24>:    ret    

*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 e4 f8                and    $0xfffffff8,%esp
 80483f2:       83 ec 08                sub    $0x8,%esp
 80483f5:       dd 05 a0 84 04 08       fldl   0x80484a0
 80483fb:       dd 1c 24                fstpl  (%esp)
 80483fe:       b8 00 00 00 00          mov    $0x0,%eax
 8048403:       c9                      leave  
 8048404:       c3                      ret    
 8048405:       66 90                   xchg   %ax,%ax
 8048407:       66 90                   xchg   %ax,%ax
 8048409:       66 90                   xchg   %ax,%ax
 804840b:       66 90                   xchg   %ax,%ax
 804840d:       66 90                   xchg   %ax,%ax
 804840f:       90                      nop

*/
