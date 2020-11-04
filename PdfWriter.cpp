#include "./PdfWriter.h"

pdfwrite::PDFWriter pdf;

JNIEXPORT void JNICALL Java_PdfWriter_setWidthHeight (JNIEnv * evn, jobject thisobj, jint width, jint height){
    pdf.setWidthHeight(width, height);
}

JNIEXPORT void JNICALL Java_PdfWriter_setFont (JNIEnv *env, jobject thisobj, jint font, jint size){
    pdf.pdfSetFont(static_cast<pdfwrite::Font>(font), size);
}

JNIEXPORT void JNICALL Java_PdfWriter_setContent (JNIEnv *env, jobject thisobj, jstring content){
    const char *inCStr = env->GetStringUTFChars(content, 0);
    std::string str(inCStr);
    pdf.pdfSetContent(str);
    env->ReleaseStringUTFChars(content, inCStr);
}

JNIEXPORT void JNICALL Java_PdfWriter_warpText (JNIEnv *env, jobject thisobj, jint maxwidth, jboolean isRightAligned){
        pdf.warpText(maxwidth, isRightAligned);
}

JNIEXPORT void JNICALL Java_PdfWriter_addToPage (JNIEnv *env, jobject thisobj){
    pdf.pdfAddToPage();
}

JNIEXPORT void JNICALL Java_PdfWriter_addNewPage (JNIEnv *env, jobject thisobj){
    pdf.pdfAddNewPage();
}

JNIEXPORT jboolean JNICALL Java_PdfWriter_writeToFile (JNIEnv *env, jobject thisobj, jstring filename){
    const char *inCStr = env->GetStringUTFChars(filename, 0);
    std::string file(inCStr);
    std::string err;
    env->ReleaseStringUTFChars(filename, inCStr);
    return pdf.writeToFile(file, err);
}

JNIEXPORT void JNICALL Java_PdfWriter_setXY (JNIEnv *env, jobject thisobj, jint x, jint y){
        pdf.setXY(x, y);
}