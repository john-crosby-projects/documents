#include <DocumentProcessor.h>
#include <iostream>

int main(int argc, char** argv)
{ 
    int exitCode;
    DocumentProcessor documentProcessor;
    try
    {
        exitCode = documentProcessor.process();
    }
    catch(...)
    {
        std::cerr << "Caught unknown exception" << std::endl;
        exitCode = 1;
    }
    exit(exitCode);
}
