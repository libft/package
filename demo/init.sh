#!/bin/sh

set -e

cd "$(dirname "$0")"
rm -rf tmp
mkdir -p tmp
cp -r ../src/boot src tmp
cp ../src/boot/deps_all.mk tmp/src
sleep 1
touch tmp/src/deps.txt
(cd tmp && make -f ../../src/Makefile)
(cd tmp && make all)
(cd tmp && make check)
(cd tmp && make install)
