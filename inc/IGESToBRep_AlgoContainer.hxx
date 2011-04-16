// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESToBRep_AlgoContainer_HeaderFile
#define _IGESToBRep_AlgoContainer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESToBRep_AlgoContainer_HeaderFile
#include <Handle_IGESToBRep_AlgoContainer.hxx>
#endif

#ifndef _Handle_IGESToBRep_ToolContainer_HeaderFile
#include <Handle_IGESToBRep_ToolContainer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class IGESToBRep_ToolContainer;



class IGESToBRep_AlgoContainer : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   IGESToBRep_AlgoContainer();
  //! Sets ToolContainer <br>
        void SetToolContainer(const Handle(IGESToBRep_ToolContainer)& TC) ;
  //! Returns ToolContainer <br>
        Handle_IGESToBRep_ToolContainer ToolContainer() const;




  DEFINE_STANDARD_RTTI(IGESToBRep_AlgoContainer)

protected:




private: 


Handle_IGESToBRep_ToolContainer myTC;


};


#include <IGESToBRep_AlgoContainer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif