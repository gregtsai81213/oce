// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_HSequenceOfPointConstraint_HeaderFile
#define _GeomPlate_HSequenceOfPointConstraint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_GeomPlate_HSequenceOfPointConstraint.hxx>

#include <GeomPlate_SequenceOfPointConstraint.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_GeomPlate_PointConstraint.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class GeomPlate_PointConstraint;
class GeomPlate_SequenceOfPointConstraint;



class GeomPlate_HSequenceOfPointConstraint : public MMgt_TShared
{

public:

  
    GeomPlate_HSequenceOfPointConstraint();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(GeomPlate_PointConstraint)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(GeomPlate_HSequenceOfPointConstraint)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(GeomPlate_PointConstraint)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(GeomPlate_HSequenceOfPointConstraint)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(GeomPlate_PointConstraint)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(GeomPlate_HSequenceOfPointConstraint)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(GeomPlate_PointConstraint)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(GeomPlate_HSequenceOfPointConstraint)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(GeomPlate_HSequenceOfPointConstraint) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(GeomPlate_PointConstraint)& anItem) ;
  
  Standard_EXPORT  const  Handle(GeomPlate_PointConstraint)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(GeomPlate_PointConstraint)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  GeomPlate_SequenceOfPointConstraint& Sequence()  const;
  
      GeomPlate_SequenceOfPointConstraint& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(GeomPlate_HSequenceOfPointConstraint)

protected:




private: 


  GeomPlate_SequenceOfPointConstraint mySequence;


};

#define Item Handle(GeomPlate_PointConstraint)
#define Item_hxx <GeomPlate_PointConstraint.hxx>
#define TheSequence GeomPlate_SequenceOfPointConstraint
#define TheSequence_hxx <GeomPlate_SequenceOfPointConstraint.hxx>
#define TCollection_HSequence GeomPlate_HSequenceOfPointConstraint
#define TCollection_HSequence_hxx <GeomPlate_HSequenceOfPointConstraint.hxx>
#define Handle_TCollection_HSequence Handle_GeomPlate_HSequenceOfPointConstraint
#define TCollection_HSequence_Type_() GeomPlate_HSequenceOfPointConstraint_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _GeomPlate_HSequenceOfPointConstraint_HeaderFile
