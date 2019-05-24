cmake_minimum_required (VERSION 3.8)

set(sourceFor a.cpp for/forSumm.cpp for/forSumm2.cpp for/forFindFirstElement.cpp for/forFindFirstNegativeElement.cpp for/forPrint.cpp for/main.cpp)
set(sourceWhile a.cpp while/whileSumm.cpp while/whileSumm2.cpp while/whileFindFirstElement.cpp while/whileFindFirstNegativeElement.cpp while/whilePrint.cpp while/main.cpp)
set(sourceDoWhile a.cpp doWhile/doWhileSumm.cpp doWhile/doWhileSumm2.cpp doWhile/doWhileFindFirstElement.cpp doWhile/doWhileFindFirstNegativeElement.cpp doWhile/doWhilePrint.cpp doWhile/main.cpp)

add_executable(forMain ${sourceFor})
add_executable(whileMain ${sourceWhile})
add_executable(doWhileMain ${sourceDoWhile})
