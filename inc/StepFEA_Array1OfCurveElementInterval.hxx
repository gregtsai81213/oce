// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_Array1OfCurveElementInterval_HeaderFile
#define _StepFEA_Array1OfCurveElementInterval_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepFEA_CurveElementInterval.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepFEA_CurveElementInterval;



class StepFEA_Array1OfCurveElementInterval 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepFEA_Array1OfCurveElementInterval(const Standard_Integer Low, const Standard_Integer Up);
  
    StepFEA_Array1OfCurveElementInterval(const Handle(StepFEA_CurveElementInterval)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepFEA_CurveElementInterval)& V) ;
  
      void Destroy() ;
~StepFEA_Array1OfCurveElementInterval()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepFEA_Array1OfCurveElementInterval& Assign (const StepFEA_Array1OfCurveElementInterval& Other) ;
 const  StepFEA_Array1OfCurveElementInterval& operator = (const StepFEA_Array1OfCurveElementInterval& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepFEA_CurveElementInterval)& Value) ;
  
     const  Handle(StepFEA_CurveElementInterval)& Value (const Standard_Integer Index)  const;
   const  Handle(StepFEA_CurveElementInterval)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepFEA_CurveElementInterval)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepFEA_CurveElementInterval)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepFEA_Array1OfCurveElementInterval(const StepFEA_Array1OfCurveElementInterval& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepFEA_CurveElementInterval)
#define Array1Item_hxx <StepFEA_CurveElementInterval.hxx>
#define TCollection_Array1 StepFEA_Array1OfCurveElementInterval
#define TCollection_Array1_hxx <StepFEA_Array1OfCurveElementInterval.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepFEA_Array1OfCurveElementInterval_HeaderFile
