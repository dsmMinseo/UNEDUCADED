#include "fileclass.h"

FileClass::FileClass(QWidget& widget)
    : widget(&widget)
{

}


int FileClass::fileSave(QWidget* widget)
{
    QString fileName = QFileDialog::getSaveFileName(widget,
                       "Save File", "",
                       "PDF File (*.pdf);;All Files(*)");
    if(fileName.isEmpty())
        return 1;

//    QUrl fileUrl = QFileDialog::getSaveFileUrl(widget,
//                                "Save File", dir.absolutePath(),
//                                "PDF File (*.pdf);;All Files(*)");

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));

    return 0;
}
