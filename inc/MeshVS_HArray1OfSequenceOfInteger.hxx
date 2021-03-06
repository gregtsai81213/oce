// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_HArray1OfSequenceOfInteger_HeaderFile
#define _MeshVS_HArray1OfSequenceOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>

#include <MeshVS_Array1OfSequenceOfInteger.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TColStd_SequenceOfInteger;
class MeshVS_Array1OfSequenceOfInteger;



class MeshVS_HArray1OfSequenceOfInteger : public MMgt_TShared
{

public:

  
    MeshVS_HArray1OfSequenceOfInteger(const Standard_Integer Low, const Standard_Integer Up);
  
    MeshVS_HArray1OfSequenceOfInteger(const Standard_Integer Low, const Standard_Integer Up, const TColStd_SequenceOfInteger& V);
  
      void Init (const TColStd_SequenceOfInteger& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TColStd_SequenceOfInteger& Value) ;
  
     const  TColStd_SequenceOfInteger& Value (const Standard_Integer Index)  const;
  
      TColStd_SequenceOfInteger& ChangeValue (const Standard_Integer Index) ;
  
     const  MeshVS_Array1OfSequenceOfInteger& Array1()  const;
  
      MeshVS_Array1OfSequenceOfInteger& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(MeshVS_HArray1OfSequenceOfInteger)

protected:




private: 


  MeshVS_Array1OfSequenceOfInteger myArray;


};

#define ItemHArray1 TColStd_SequenceOfInteger
#define ItemHArray1_hxx <TColStd_SequenceOfInteger.hxx>
#define TheArray1 MeshVS_Array1OfSequenceOfInteger
#define TheArray1_hxx <MeshVS_Array1OfSequenceOfInteger.hxx>
#define TCollection_HArray1 MeshVS_HArray1OfSequenceOfInteger
#define TCollection_HArray1_hxx <MeshVS_HArray1OfSequenceOfInteger.hxx>
#define Handle_TCollection_HArray1 Handle_MeshVS_HArray1OfSequenceOfInteger
#define TCollection_HArray1_Type_() MeshVS_HArray1OfSequenceOfInteger_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _MeshVS_HArray1OfSequenceOfInteger_HeaderFile
