#!/bin/bash
cmake -S . -B ./build
make -C ./build/ -j8
