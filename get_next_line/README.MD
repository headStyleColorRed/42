# get_next_line

This is a 42 project written in C that reads a file (through the fd) one line at a time by saving the last position in a static variable. It can read several files at the same time while keeping track of each one of them. It does so by saving the different memory addresses in a double dimension pointer.

## Installation

In order to download and compile, just download the repository and execute the file "compile.sh". This executable will read the two test files attached to the project.

```bash
bash compile.sh
```

## How it works

There are three main functions in this program.
    1º get_next_line
    2º output_handler
    3º appendline

### int get_next_line(const int fd, char **line)

This function receives a file descriptor and a two dimensional array. After checking the file descriptor and line are both alright, we enter a while loop that will read through the file BUFFER_SIZE bytes by BUFFER_SIZE bytes until reaching a new line character doing four things:
    1. Appending a Null to the end of the buff(temporary) string.
    2. If the static variable is empty, it will copy the first buff string to the static variable.
    3. If the static variable already has content, then it will append buff to the string in the static_variable, save it in a temporary string, free the space in the static variable and save again in the latter the full sentence stored in the temporary string.
    4. Once a new line is found on the static variable, we exit the loop.
Then we will send the (static variable with the line we want to send back + the new line character), the still-empty "line" pointer, "ret" -> read result, and the file descriptor opened to the output_hander() function. 


### int output_handler(char **s, char **line, int ret, int fd)

This funtion has three tasks:
    1. Return a -1 if the read function had an error.
    2. Return a 0 once the EOF has been reached.
    3. If none of the previous conditions are met, calls appendline passing the position of the static variable[substring of memory], and the still empty variable "line".

###  int appendline(char **s, char **line)

Here is where the meat falls off the bone! 
First we run through the string until a new line character is found and store the index in len.
Then, if the string at it's furthermost point has a '\n':
    1. It will copy to "line" the content of string up to the new line.
    2. Then it will save in a temporary variable the position of the string after the new line.
    3. We will free string
    4. And finally we give to string the same location as tmp, so it will continue there next time.
If the first condition wasn't met, then we copy the sentence until the EOF to line and free string.

## Usage

If you are a 42 student and you wished to use this repository, go for it! Just try to understand what every function, variable assignement and memory usage does.