#!/bin/sh

set -e

cd "$(dirname "$0")"
rm -rf tmp
mkdir -p tmp
cp -r ../src/boot src tmp
cp ../src/boot/deps_all.mk tmp/src
sleep 1
touch tmp/src/deps.txt
make -C tmp -f ../../src/Makefile
LIBFT_PACKAGE_ROOT=$(cd tmp && pwd) make -C tmp/src check
LIBFT_PACKAGE_ROOT=$(cd tmp && pwd) make -C tmp/src install
