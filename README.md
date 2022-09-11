# `libft` package

Rules to organize files in large projects, and management system

## Directory structure

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

## Files per package

Every libft package consists of three folders and some files below:

- `include/` - header files _to distribute_
- `share/` - other files like test data
- `src/` - _all_ source files
- `bin.properties` - optional, consists of a list of binaries
- `lib.properties` - optional, consists of a list of libraries
- `Makefile` - see [Makefile rules](#makefile-rules) below

## Makefile rules

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

Rules above requires environment variable `LIBFT_PACKAGE_ROOT`

Makefile must be compliant with POSIX makefile for portability

## Package manifest

WIP

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

For ease of use, naming files is strictly restricted to `(package name)[_*].{c,h}` or `(directory)/(package name)_(directory name)[_*].{c,h}`, **anything inside another directory is not allowed.**

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

Example: the allowed file names for `some_name` is:

- `some_name.c`
- `some_name.h`
- `some_name_types.h`
- `impl/some_name_impl.c`
- `impl/some_name_impl_main.c`
- `impl/fallback/some_name_impl_fallback.c`
- `impl/fallback/some_name_impl_fallback_main.c`
