// ======================================================================
// \title  MathReceiver.hpp
// \author kasm-user
// \brief  hpp file for MathReceiver component implementation class
// ======================================================================

#ifndef MathReceiver_HPP
#define MathReceiver_HPP

#include "Components/MathReceiver/MathReceiverComponentAc.hpp"

namespace MathModule {

  class MathReceiver :
    public MathReceiverComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object MathReceiver
      //!
      MathReceiver(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object MathReceiver
      //!
      ~MathReceiver();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for TODO_1 command handler
      //! TODO
      void TODO_1_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      //! Implementation for TODO_2 command handler
      //! TODO
      void TODO_2_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );


    };

} // end namespace MathModule

#endif
