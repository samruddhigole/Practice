string="samruddhi"


def reverseString(string):
	start=0
	end=len(string)-1
	print string[start]
	print string[end]
	while(start<end):
		string[start],string[end] = string[end],string[start]
		print string[start]
		print string[end]
		start=start+1
		end=end-1
	print string

reverseString(string)		
