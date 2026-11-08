// FUN_00bdedec @ 00bdedec size=76 calls_out=2 calls_in=0
// strings: assertion failed: self.state.load(SeqCst).is_null()OnControlBoardTemperaturet_control_board

void FUN_00bdedec(int param_1)

{
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.state.load(SeqCst).is_null()OnControlBoardTemperaturet_control_board"
                 ,0x33,&DAT_01872a7c);
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_0064866c(param_1 + 0xc);
  return;
}

