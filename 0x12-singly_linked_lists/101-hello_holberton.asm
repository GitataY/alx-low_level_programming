SECTION .data
msg db "Hello, Holberton", 0
fmt db "%s", 10, 0


SECTION .text
extern printf
global main

main:
	MOV ESI, msg
	MOV EDI, fmt
	MOV EAX, 0
	CALL printf

	MOV EAX, 0
	RET
