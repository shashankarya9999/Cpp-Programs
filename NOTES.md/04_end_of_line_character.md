In fact, the end of line character '\n' will be converted into the appropriate characters to end a line on a specific platform. See this reference:

https://en.cppreference.com/w/cpp/io/c/FILE

where it says:

"Binary and text modes

A text stream is an ordered sequence of characters composed into lines (zero or more characters plus a terminating '\n'). Whether the last line requires a terminating '\n' is implementation-defined. Characters may have to be added, altered, or deleted on input and output to conform to the conventions for representing text in the OS (in particular, C streams on Windows OS convert \n to \r\n on output, and convert \r\n to \n on input)"