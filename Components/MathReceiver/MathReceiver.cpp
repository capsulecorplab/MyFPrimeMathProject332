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
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void MathReceiver ::
    mathOpIn_handler(
        const NATIVE_INT_TYPE portNum,
        F32 val1,
        const MathModule::MathOp &op,
        F32 val2
    )
  {
    // TODO
  }

  void MathReceiver ::
    schedIn_handler(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void MathReceiver ::
    CLEAR_EVENT_THROTTLE_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace MathModule
