#include <DocumentProcessor.h>
#include <iostream>

DocumentProcessor::DocumentProcessor()
{
    std::cout << "Created Document Processor" << std::endl; 
}

int DocumentProcessor::process()
{
    int returnValue;
    std::cout << "Processing Document..." << std::endl;
    return returnValue;
}
