#!/usr/bin/python3
def uppercase(str):
	for char in str:
		if ord('a') <= ord(char) <= ord('z'):
			uppercase_char = chr(ord(char) - ord('a') + ord('A'))
			print(uppercase_char, end="")
		else:
			print(char, end="")
