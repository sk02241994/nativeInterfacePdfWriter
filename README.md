# Java native interface pdf writer.

A sample java program for interaction of java with native language such as C/C++ to create a pdf file.

### How to build and execute?

1. Run the following command to create header ```PdfWriter.h``` file with the native method declarations in it.
```bash
    javac -h . Main.java
``` 
2. Use the header files and shared library from [PDFWriter](https://github.com/sk02241994/PDFWriter) project to define the methods in ```PdfWriter.h``` header files.

3. Run the following command to create a shared library to be used for java native interface
```bash
g++ -shared PdfWriter.cpp -I {Path to PDFWriter includes} -L {Path to PDFWriter shared library} -l pdfwriter -I JAVA_HOME/java-14-openjdk-amd64/include -I JAVA_HOME/java-14-openjdk-amd64/include/linux -o libpdf.so -fPIC
```
4. Add the library generated ```libpdf.so``` to library path.
5. Running the java file
```bash
java Main
```