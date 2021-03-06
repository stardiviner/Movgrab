
#ifndef MOVGRAB_OUTPUT_FILES
#define MOVGRAB_OUTPUT_FILES

#include "common.h"

char *OutputFilesGetFilePath();
void OpenOutputFiles(const char *Title, const char *URL, double *FileSize);
void WriteOutputFiles(const char *Data, int Len);
void AddOutputFile(const char *Path, int SingleOutput);
char *GuessExtn(const char *ContentType, const char *Format, const char *ID);


#endif
