g++ -c -DBUILD live.cpp
g++ -shared -o live.dll live.o -Wl,--out-implib,liblive.a