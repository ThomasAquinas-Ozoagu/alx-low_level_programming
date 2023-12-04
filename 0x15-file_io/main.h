#ifndef _MAIN_H_
#define _MAIN_H_

#ifndef _READ_TEXTFILE_
#define _READ_TEXTFILE_
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* _READ_TEXTFILE_ */

#ifndef _CREATE_FILE_
int create_file(const char *filename, char *text_content);
#define _CREATE_FILE_
#endif /* _CREATE_FILE_ */



#endif /* _MAIN_H_ */
