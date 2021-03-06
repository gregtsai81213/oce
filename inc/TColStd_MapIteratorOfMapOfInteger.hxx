// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapIteratorOfMapOfInteger_HeaderFile
#define _TColStd_MapIteratorOfMapOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_StdMapNodeOfMapOfInteger.hxx>
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class TColStd_MapOfInteger;
class TColStd_StdMapNodeOfMapOfInteger;



class TColStd_MapIteratorOfMapOfInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_MapIteratorOfMapOfInteger();
  
  Standard_EXPORT TColStd_MapIteratorOfMapOfInteger(const TColStd_MapOfInteger& aMap);
  
  Standard_EXPORT   void Initialize (const TColStd_MapOfInteger& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;




protected:





private:





};







#endif // _TColStd_MapIteratorOfMapOfInteger_HeaderFile
