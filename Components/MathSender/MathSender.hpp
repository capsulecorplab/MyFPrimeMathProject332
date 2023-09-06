// ======================================================================
// \title  MathSender.hpp
// \author kasm-user
// \brief  hpp file for MathSender component implementation class
// ======================================================================

#ifndef MathSender_HPP
#define MathSender_HPP

#include "Components/MathSender/MathSenderComponentAc.hpp"

namespace MathModule {

  class MathSender :
    public MathSenderComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object MathSender
      //!
      MathSender(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object MathSender
      //!
      ~MathSender();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for TODO command handler
      //! TODO
      void TODO_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );


    };

} // end namespace MathModule

#endif
