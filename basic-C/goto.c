int main(){	
        goto end;

	end: return 0;

}
	/*
	   0x080483ec <+0>:     push   %ebp
	   0x080483ed <+1>:     mov    %esp,%ebp
	   0x080483ef <+3>:     nop
	   0x080483f0 <+4>:     mov    $0x0,%eax
	   0x080483f5 <+9>:     pop    %ebp
	   0x080483f6 <+10>:    ret   
	*/

	/*objdump -S 
	080483ec <main>:
	 80483ec:       55                      push   %ebp
	 80483ed:       89 e5                   mov    %esp,%ebp
	 80483ef:       90                      nop
	 80483f0:       b8 00 00 00 00          mov    $0x0,%eax
	 80483f5:       5d                      pop    %ebp
	 80483f6:       c3                      ret    
	 80483f7:       66 90                   xchg   %ax,%ax
	 80483f9:       66 90                   xchg   %ax,%ax
	 80483fb:       66 90                   xchg   %ax,%ax
	 80483fd:       66 90                   xchg   %ax,%ax
	 80483ff:       90                      nop


	*/
