#!/bin/sh

if [ $1 = 'build' ]
    then
    export CC=/usr/bin/clang
    export CXX=/usr/bin/clang++
    rm -f -r build
    mkdir build
    cd build
    cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=./../install -G Ninja
    ninja
    cd ..
fi

if [ $1 = 'install' ]
    then
    rm -f -r install
    mkdir install
    cd build
    ninja install
    cd ..

fi

if [ $1 = 'run' ]
    then
    if [ $2 = 'emulator' ]
        then
        ./build/source/emulator
    fi
fi

if [ $1 = 'clean' ]
    then
    #clean build
    rm -f -r build
    rm -f -r install
fi





