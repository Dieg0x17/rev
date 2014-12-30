
int main()
{
	int a=0;
	return a;
}
/*gdb
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     sub    $0x4,%esp
   0x080483f2 <+6>:     movl   $0x0,-0x4(%ebp)
   0x080483f9 <+13>:    mov    -0x4(%ebp),%eax
   0x080483fc <+16>:    leave  
   0x080483fd <+17>:    ret  
*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 ec 04                sub    $0x4,%esp
 80483f2:       c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%ebp)
 80483f9:       8b 45 fc                mov    -0x4(%ebp),%eax
 80483fc:       c9                      leave  
 80483fd:       c3                      ret    
 80483fe:       66 90                   xchg   %ax,%ax


*/
