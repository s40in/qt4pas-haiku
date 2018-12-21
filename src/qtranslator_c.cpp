//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QTranslatorH QTranslator_create(QObjectH parent)
{
	return (QTranslatorH) new QTranslator((QObject*)parent);
}

C_EXPORT void QTranslator_destroy(QTranslatorH handle)
{
	delete (QTranslator *)handle;
}

C_EXPORT void QTranslator_translate(QTranslatorH handle, PWideString retval, const char* context, const char* sourceText, const char* disambiguation)
{
	QString t_retval;
	t_retval = ((QTranslator *)handle)->translate(context, sourceText, disambiguation);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QTranslator_translate2(QTranslatorH handle, PWideString retval, const char* context, const char* sourceText, const char* disambiguation, int n)
{
	QString t_retval;
	t_retval = ((QTranslator *)handle)->translate(context, sourceText, disambiguation, n);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT bool QTranslator_isEmpty(QTranslatorH handle)
{
	return (bool) ((QTranslator *)handle)->isEmpty();
}

C_EXPORT bool QTranslator_load(QTranslatorH handle, PWideString filename, PWideString directory, PWideString search_delimiters, PWideString suffix)
{
	QString t_filename;
	QString t_directory;
	QString t_search_delimiters;
	QString t_suffix;
	copyPWideStringToQString(filename, t_filename);
	copyPWideStringToQString(directory, t_directory);
	copyPWideStringToQString(search_delimiters, t_search_delimiters);
	copyPWideStringToQString(suffix, t_suffix);
	return (bool) ((QTranslator *)handle)->load(t_filename, t_directory, t_search_delimiters, t_suffix);
}

C_EXPORT bool QTranslator_load2(QTranslatorH handle, const uchar* data, int len)
{
	return (bool) ((QTranslator *)handle)->load(data, len);
}

