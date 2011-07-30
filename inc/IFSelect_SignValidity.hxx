// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignValidity_HeaderFile
#define _IFSelect_SignValidity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SignValidity_HeaderFile
#include <Handle_IFSelect_SignValidity.hxx>
#endif

#ifndef _IFSelect_Signature_HeaderFile
#include <IFSelect_Signature.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Standard_Transient;
class Interface_InterfaceModel;


//! This Signature returns the Validity Status of an entity, as <br>
//!           deducted from data in the model : it can be <br>
//!           "OK" "Unknown" "Unloaded" "Syntactic Fail"(but loaded) <br>
//!           "Syntactic Warning" "Semantic Fail" "Semantic Warning" <br>
class IFSelect_SignValidity : public IFSelect_Signature {

public:

  //! Returns a SignValidity <br>
  Standard_EXPORT   IFSelect_SignValidity();
  //! Returns the Signature for a Transient object, as a validity <br>
//!           deducted from data (reports) stored in the model. <br>
//!           Class method, can be called by any one <br>
  Standard_EXPORT   static  Standard_CString CVal(const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) ;
  //! Returns the Signature for a Transient object, as a validity <br>
//!           deducted from data (reports) stored in the model <br>
//!           Calls the class method CVal <br>
  Standard_EXPORT     Standard_CString Value(const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;




  DEFINE_STANDARD_RTTI(IFSelect_SignValidity)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif