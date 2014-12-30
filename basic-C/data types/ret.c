
int main()
{
	return 0;
}

/*
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     mov    $0x0,%eax
   0x080483f4 <+8>:     pop    %ebp
   0x080483f5 <+9>:     ret
*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       b8 00 00 00 00          mov    $0x0,%eax
 80483f4:       5d                      pop    %ebp
 80483f5:       c3                      ret    
 80483f6:       66 90                   xchg   %ax,%ax
 80483f8:       66 90                   xchg   %ax,%ax
 80483fa:       66 90                   xchg   %ax,%ax
 80483fc:       66 90                   xchg   %ax,%ax
 80483fe:       66 90                   xchg   %ax,%ax
*/
