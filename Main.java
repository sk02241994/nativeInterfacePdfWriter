/* 
    Main class to run the pdf writer native interface.
*/
public class Main {
    public static void main(String[] args) {
        PdfWriter pdfWriter = new PdfWriter();
        pdfWriter.setWidthHeight(1000, 1000);
        pdfWriter.setFont(2, 12);

        String content = "  \t\t   fee \r\nxxxxxxxxxxxxx\r\n\"fi\"fo fum";
        content += " a aa aaa aaaa bbb bb b c cc ccc dddd eeeee ";
        content += " foo bar baz foo bar baz ";
        content += " mairzy doats and doazy doats and little lambsey divey";
        content += " a kiddley divey too, wouldn't you? ";
        content += " a b c d e f g h i jj kkk llll mmmmmm nnnnnnn oooooooooooo ";
        content += "----------------------- -------------------------- ";
        content += "$$$ $$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ";
        content += "******************** ************************ ***** ";

        pdfWriter.setContent(content);
        pdfWriter.warpText(700, true);
        pdfWriter.setXY(100, 800);
        pdfWriter.addToPage();

        if (!pdfWriter.writeToFile("example.pdf")) {
            System.out.println("Unable to make a pdf file.");
        }
    }
}
