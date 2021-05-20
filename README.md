# get_next_line
Return value 

	 1 : A line has been read

	 0 : EOF has been reached

	 -1 : An error happened

• Calling your function get_next_line in a loop will then allow you to read the text

available on a file descriptor one line at a time until the EOF.

• Make sure that your function behaves well when it reads from a file and when it
reads from the standard input.

• Your program must compile with the flag -D BUFFER_SIZE=xx. which will be used

as the buffer size for the read calls in your get_next_line. 

• We consider that get_next_line has an undefined behavior if, between two calls,
the same file descriptor switches to a different file before EOF has been reached on
the first fd.

• lseek is not an allowed function. File reading must be done only once.

• Finally we consider that get_next_line has an undefined behavior when reading
from a binary file. However, if you wish, you can make this behavior coherent.
