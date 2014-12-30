
int main()
{
	char a='E';
	return 0;
}
/*gdb disas
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     sub    $0x4,%esp
   0x080483f2 <+6>:     movb   $0x45,-0x1(%ebp)
   0x080483f6 <+10>:    mov    $0x0,%eax
   0x080483fb <+15>:    leave  
   0x080483fc <+16>:    ret  
*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 ec 04                sub    $0x4,%esp
 80483f2:       c6 45 ff 45             movb   $0x45,-0x1(%ebp)
 80483f6:       b8 00 00 00 00          mov    $0x0,%eax
 80483fb:       c9                      leave  
 80483fc:       c3                      ret    
 80483fd:       66 90                   xchg   %ax,%ax
 80483ff:       90                      nop
*/
