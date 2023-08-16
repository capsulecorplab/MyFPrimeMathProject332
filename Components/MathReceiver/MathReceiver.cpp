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
        const MathOp& op,
        F32 val2
    )
  {
      // Get the initial result
      F32 res = 0.0;
      switch (op.e) {
          case MathOp::ADD:
              res = val1 + val2;
              break;
          case MathOp::SUB:
              res = val1 - val2;
              break;
          case MathOp::MUL:
              res = val1 * val2;
              break;
          case MathOp::DIV:
              res = val1 / val2;
              break;
          default:
              FW_ASSERT(0, op.e);
              break;
      }//end switch

      // Get the factor value
      Fw::ParamValid valid;
      F32 factor = paramGet_FACTOR(valid);
      FW_ASSERT(
          valid.e == Fw::ParamValid::VALID || valid.e == Fw::ParamValid::DEFAULT,
          valid.e
      );

      // Multiply result by factor
      res *= factor;

      // Emit telemetry and events
      this->log_ACTIVITY_HI_OPERATION_PERFORMED(op);
      this->tlmWrite_OPERATION(op);

      // Emit result
      this->mathResultOut_out(0, res);

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
