from distutils.core import setup
from distutils.extension import Extension

test_module = Extension('_mytest', sources=['mytest_wrap.cxx', 'test.cpp'],)

setup(name = 'mytest',
        version = '0.1',
        author = 'SWIG Docs',
        description = 'Simple swig pht from docs',
        ext_modules = [test_module],
        py_modules = ['mytest'])
