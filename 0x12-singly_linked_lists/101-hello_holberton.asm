SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

	SECTION .data
message:	db "Hello, Holberton", 0
format:	db "%s", 10, 0
