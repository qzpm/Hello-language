-module(helloworld).
-export([helloworld]).

helloworld() -> io:fwrite("helloworld\n").
