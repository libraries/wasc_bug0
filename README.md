```sh
$ gcc -g -o elem_7 elem_7.c elem_7.o
$ ./elem_7
# Segmentation fault (core dumped)
```

SIGSEGV at:

```
(gdb) disas
Dump of assembler code for function functionDef2:
   0x0000555555554a10 <+0>:	push   %rbp
   0x0000555555554a11 <+1>:	mov    %rsp,%rbp
   0x0000555555554a14 <+4>:	mov    %rdi,%rax
   0x0000555555554a17 <+7>:	and    $0xffffffff80000000,%rax
   0x0000555555554a1d <+13>:	movabs $0x555555756070,%rdx
   0x0000555555554a27 <+23>:	mov    (%rax,%rdx,1),%rax
   0x0000555555554a2b <+27>:	mov    0x38(%rax),%rax
   0x0000555555554a2f <+31>:	movabs $0x555555756078,%r8
   0x0000555555554a39 <+41>:	lea    (%rax,%r8,1),%rcx
   0x0000555555554a3d <+45>:	movabs $0x555555554ba8,%rsi
=> 0x0000555555554a47 <+55>:	cmp    %rsi,0x18(%rax,%r8,1)
   0x0000555555554a4c <+60>:	jne    0x555555554a56 <functionDef2+70>
   0x0000555555554a4e <+62>:	add    $0x20,%rcx
   0x0000555555554a52 <+66>:	callq  *%rcx
   0x0000555555554a54 <+68>:	pop    %rbp
   0x0000555555554a55 <+69>:	retq
   0x0000555555554a56 <+70>:	add    $0xfffffffffffff008,%rdx
   0x0000555555554a5d <+77>:	shr    $0x3,%rdx
   0x0000555555554a61 <+81>:	movabs $0x555555554ba8,%r8
   0x0000555555554a6b <+91>:	movabs $0x55555555491a,%rax
   0x0000555555554a75 <+101>:	mov    $0x7,%esi
   0x0000555555554a7a <+106>:	callq  *%rax
```
