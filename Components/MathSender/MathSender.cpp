// ======================================================================
// \title  MathSender.cpp
// \author kasm-user
// \brief  cpp file for MathSender component implementation class
// ======================================================================


#include <Components/MathSender/MathSender.hpp>
#include <FpConfig.hpp>

namespace MathModule {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  MathSender ::
    MathSender(
        const char *const compName
    ) : MathSenderComponentBase(compName)
  {

  }

  MathSender ::
    ~MathSender()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void MathSender ::
    mathResultIn_handler(
        const NATIVE_INT_TYPE portNum,
        F32 result
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void MathSender ::
    DO_MATH_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        F32 val1,
        MathModule::MathOp op,
        F32 val2
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace MathModule
