Memory balloon.

It's may be useful to prevent using of disk cache in IO-tests on machines with large amount of RAM.

Build
=====

```
# make
```

Usage
=====

To fill 248 Gb of RAM:
```
# sudo ./memory-balloon 248
try to fill 248 GB
press enter to exit...

```
Then you see `press enter to exit...` - it means memory allocated and locked in RAM. Now `free` should show that memory as used:

```
# free -h
              total        used        free      shared  buff/cache   available
Mem:           251G        250G        694M        2.7M        817M        558M
Swap:          8.0G         27M        8.0G
```

License
=======

The code is licenced with GPL (https://www.gnu.org/licenses/gpl.html)
