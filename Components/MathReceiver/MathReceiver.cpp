// ======================================================================
// \title  MathReceiver.cpp
// \author kasm-user
// \brief  cpp file for MathReceiver component implementation class
// ======================================================================


#include <Components/MathReceiver/MathReceiver.hpp>
#include <FpConfig.hpp>

namespace MathModule {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  MathReceiver ::
    MathReceiver(
        const char *const compName
    ) : MathReceiverComponentBase(compName)
  {

  }

  MathReceiver ::
    ~MathReceiver()
  {

  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void MathReceiver ::
    TODO_1_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

  void MathReceiver ::
    TODO_2_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace MathModule
