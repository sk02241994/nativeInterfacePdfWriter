/* 
    Class for native interface of pdf file with Cpp pdf writer.
 */
public class PdfWriter {

    /* 
        Static block to load the pdf shared library.

     */
    static{
        System.loadLibrary("pdf");
    }
    
    /* 
        Method to set width and height of a pdf page.

        @param width
        @param height
     */
    public native void setWidthHeight(int width, int height);

    /* 
        Method to set the font type and the font size.

        @param font
        @prarm size
     */
    public native void setFont(int font, int size);

    /* 
        Method to set the text content of the page.

        @param content
     */
    public native void setContent(String content);

    /* 
        Method to wrap text to page's width and height

        @param maxWidth
        @param isRightJustified
     */
    public native void warpText(int maxWidth, boolean isRightJustified);

    /* 
        Method to add page's meta data to a vector list in c++.
    */
    public native void addToPage();

    /* 
        Method to add new page.
    */
    public native void addNewPage();

    /* 
        Method to create a pdf file.

        @return boolean value of the file is written or not.
    */
    public native boolean writeToFile(String fileName);

    /* 
        Method to set the x and y coordinated of the page content.

        @param x
        @param y
    */
    public native void setXY(int x, int y);

}
