// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_PrinterOStream_HeaderFile
#define _Message_PrinterOStream_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Message_PrinterOStream.hxx>

#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Message_Printer.hxx>
#include <Message_Gravity.hxx>
#include <Standard_CString.hxx>
#include <Standard_OStream.hxx>
class TCollection_AsciiString;
class TCollection_ExtendedString;


//! Implementation of a message printer associated with an ostream
//! The ostream may be either externally defined one (e.g. cout),
//! or file stream maintained internally (depending on constructor).
class Message_PrinterOStream : public Message_Printer
{

public:

  
  //! Empty constructor, defaulting to cout
  Standard_EXPORT Message_PrinterOStream(const Message_Gravity theTraceLevel = Message_Info);
  
  //! Create printer for output to a specified file.
  //! The option theDoAppend specifies whether file should be
  //! appended or rewritten.
  //! For specific file names (cout, cerr) standard streams are used
  Standard_EXPORT Message_PrinterOStream(const Standard_CString theFileName, const Standard_Boolean theDoAppend, const Message_Gravity theTraceLevel = Message_Info);
  
  //! Flushes the output stream and destroys it if it has been
  //! specified externally with option doFree (or if it is internal
  //! file stream)
  Standard_EXPORT   void Close() ;
~Message_PrinterOStream()
{
  Close();
}
  
  //! Returns option to convert non-Ascii symbols to UTF8 encoding
      Standard_Boolean GetUseUtf8()  const;
  
  //! Sets option to convert non-Ascii symbols to UTF8 encoding
      void SetUseUtf8 (const Standard_Boolean useUtf8) ;
  
  //! Returns reference to the output stream
      Standard_OStream& GetStream()  const;
  
  //! Puts a message to the current stream
  //! if its gravity is equal or greater
  //! to the trace level set by SetTraceLevel()
  Standard_EXPORT virtual   void Send (const Standard_CString theString, const Message_Gravity theGravity, const Standard_Boolean putEndl = Standard_True)  const;
  
  //! Puts a message to the current stream
  //! if its gravity is equal or greater
  //! to the trace level set by SetTraceLevel()
  Standard_EXPORT virtual   void Send (const TCollection_AsciiString& theString, const Message_Gravity theGravity, const Standard_Boolean putEndl = Standard_True)  const;
  
  //! Puts a message to the current stream
  //! if its gravity is equal or greater
  //! to the trace level set by SetTraceLevel()
  //! Non-Ascii symbols are converted to UTF-8 if UseUtf8
  //! option is set, else replaced by symbols '?'
  Standard_EXPORT virtual   void Send (const TCollection_ExtendedString& theString, const Message_Gravity theGravity, const Standard_Boolean putEndl = Standard_True)  const;



  DEFINE_STANDARD_RTTI(Message_PrinterOStream)

protected:




private: 


  Standard_Address myStream;
  Standard_Boolean myIsFile;
  Standard_Boolean myUseUtf8;


};


#include <Message_PrinterOStream.lxx>





#endif // _Message_PrinterOStream_HeaderFile
