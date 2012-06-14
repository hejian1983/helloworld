PROJECT(TESTMAP2TBL)

SET(
SRC_LIST2
../test.cpp
../map2tbl.cpp
)

SET(EXECUTABLE_OUTPUT_PATH ../)

ADD_DEFINITIONS(-g -O2 -W -Wno-deprecated -Wall -D_REENTRANT -D_FILE_OFFSET_BITS=64 -DTIXML_USE_STL)

INCLUDE_DIRECTORIES(../inc /usr/local/mysql/include)
LINK_DIRECTORIES(../lib /usr/local/mysql/lib/mysql ../lib/linux/Linux64 /usr/local/lib)

ADD_EXECUTABLE(testm2t ${SRC_LIST2})
TARGET_LINK_LIBRARIES(testm2t pthread unidata z lua dl m)
