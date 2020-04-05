%module mytest

%{
        #define SWIG_WITH_INIT
        #include "mytest.h"
%}

%include "mytest.h"

