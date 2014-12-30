int main(int argc, char *argv[]){

	return argc;

}

	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     mov    0x8(%ebp),%eax
	   0x080483f2 <+6>:     pop    %ebp
	   0x080483f3 <+7>:     ret    
	*/

	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       8b 45 08                mov    0x8(%ebp),%eax
	 80483f2:       5d                      pop    %ebp
	 80483f3:       c3                      ret    
	 80483f4:       66 90                   xchg   %ax,%ax
	 80483f6:       66 90                   xchg   %ax,%ax
	 80483f8:       66 90                   xchg   %ax,%ax
	 80483fa:       66 90                   xchg   %ax,%ax
	 80483fc:       66 90                   xchg   %ax,%ax
	 80483fe:       66 90                   xchg   %ax,%ax

	*/
