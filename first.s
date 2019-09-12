	.file	"str10.c"
	.section	.rodata
.LC0:
	.string	"%d%d%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$64, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$10, -60(%ebp)
	movl	$20, -56(%ebp)
	movl	$30, -52(%ebp)
	movl	$40, -48(%ebp)
	movl	$50, -44(%ebp)
	movl	$60, -40(%ebp)
	leal	-60(%ebp), %eax
	movl	%eax, -36(%ebp)
	leal	-60(%ebp), %eax
	addl	$4, %eax
	movl	%eax, -32(%ebp)
	leal	-60(%ebp), %eax
	addl	$8, %eax
	movl	%eax, -28(%ebp)
	leal	-60(%ebp), %eax
	addl	$12, %eax
	movl	%eax, -24(%ebp)
	leal	-60(%ebp), %eax
	addl	$16, %eax
	movl	%eax, -20(%ebp)
	leal	-60(%ebp), %eax
	addl	$20, %eax
	movl	%eax, -16(%ebp)
	leal	-36(%ebp), %eax
	movl	%eax, -64(%ebp)
	movl	-64(%ebp), %eax
	addl	$4, %eax
	movl	%eax, -64(%ebp)
	movl	-64(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	-64(%ebp), %edx
	movl	(%edx), %edx
	movl	%edx, %ecx
	leal	-60(%ebp), %edx
	subl	%edx, %ecx
	movl	%ecx, %edx
	sarl	$2, %edx
	movl	%edx, %ebx
	movl	-64(%ebp), %ecx
	leal	-36(%ebp), %edx
	subl	%edx, %ecx
	movl	%ecx, %edx
	sarl	$2, %edx
	pushl	%eax
	pushl	%ebx
	pushl	%edx
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	$0, %eax
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L3
	call	__stack_chk_fail
.L3:
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
