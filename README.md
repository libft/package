# libft package

[TOC]

## Directories

libft follows the _File Hierarchy Standard_-like structure

- `${LIBFT_PACKAGE_ROOT}/` - the root
  - `boot/` - package system
  - `sys/` - temporary directory for package system
  - `bin/` - executable binaries
  - `lib/` - library binaries
  - `etc/` - configuration files
  - `opt/` - something external
  - `home/` - directory for each package
  - `tmp/` - temporary directory for each package
  - `usr/` - directory for distribute
    - `include/` - header files
    - `share/` - data files
    - `src/` - source files
  - `var/`
    - `cache/` - cache directory for each package
    - `log/` - log directory for each package
    - `lib/` - persistent data for each package
  - `src/` - directory for current source files

## Files

all source files must located in the project's src directory

there's special reserved names for the libft package system

### Given files

- `src/deps.txt` - list of direct dependency packages

### Generated files

- `src/deps_all.txt` - all recursive dependencies include self
- ... and more undefined files exclude the src directory

## Makefile

libft package must have Makefile in the project root directory with rules below:

- rules derived from the Norm
  - `all`: build all library/executable final targets
  - `clean`: remove temporary files
  - `fclean`: `clean` + remove result/cache files too
  - `re`: `all` after `fclean`
- additional rules for libft package
  - `init`: initialize/refresh dependencies
  - `test`: test self functionality (e.g. unit test)
  - `check`: check functionality (e.g. acceptance test)
  - `install`: distribute result files

rules above requires environment variable `LIBFT_PACKAGE_ROOT`

## Name

```bnf
<first-part> ::= [a-z]
<part> ::= <first-part> | [0-9]
<word>
  ::= <first-part>
    | <word> <part>
```

### Package name

The package name is an underscore-concatenated list of one or more non-empty strings beginning with a lowercase letter consisting of a lowercase letter and a number.

```bnf
<package-name>
  ::= <word>
    | <package-name> "_" <word>
```

### Files to distribute

for ease of use, naming files is restricted to `(package name).{c,h}` or `(package name)__*.{c,h}`, **anything inside another directory is not allowed.**

```bnf
<dist-file-name>
  ::= "(package-name).c"
    | "(package-name).h"
    | "(package-name)_" <dist-file-name-part> ".c"
    | "(package-name)_" <dist-file-name-part> ".h"

<dist-file-name-part>
  ::= ""
    | <dist-file-name-part> "_" <word>
```
