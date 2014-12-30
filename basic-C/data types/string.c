int main()
{
	char *a="DCBA";
	return 0;
}

/*
   0x080483ec <+0>:     push   %ebp
   0x080483ed <+1>:     mov    %esp,%ebp
   0x080483ef <+3>:     sub    $0x4,%esp
   0x080483f2 <+6>:     movl   $0x8048490,-0x4(%ebp)
   0x080483f9 <+13>:    mov    $0x0,%eax
   0x080483fe <+18>:    leave  
   0x080483ff <+19>:    ret    

*/

/*objdump -S 
080483ec <main>:
 80483ec:       55                      push   %ebp
 80483ed:       89 e5                   mov    %esp,%ebp
 80483ef:       83 ec 04                sub    $0x4,%esp
 80483f2:       c7 45 fc 90 84 04 08    movl   $0x8048490,-0x4(%ebp)
 80483f9:       b8 00 00 00 00          mov    $0x0,%eax
 80483fe:       c9                      leave  
 80483ff:       c3                      ret  
*/
