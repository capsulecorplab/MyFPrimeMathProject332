// ======================================================================
// \title  MathSender.hpp
// \author kasm-user
// \brief  cpp file for MathSender test harness implementation class
// ======================================================================

#include "Tester.hpp"

namespace MathModule {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  Tester ::
    Tester() :
      MathSenderGTestBase("Tester", Tester::MAX_HISTORY_SIZE),
      component("MathSender")
  {
    this->initComponents();
    this->connectPorts();
  }

  Tester ::
    ~Tester()
  {

  }

  // ----------------------------------------------------------------------
  // Tests
  // ----------------------------------------------------------------------

  void Tester ::
    toDo()
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Handlers for typed from ports
  // ----------------------------------------------------------------------

  void Tester ::
    from_mathOpOut_handler(
        const NATIVE_INT_TYPE portNum,
        F32 val1,
        const MathModule::MathOp &op,
        F32 val2
    )
  {
    this->pushFromPortEntry_mathOpOut(val1, op, val2);
  }


} // end namespace MathModule
