// FUN_01bea9c6 @ 01bea9c6 size=92 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01bea9f0) */

void FUN_01bea9c6(int param_1)

{
  software_interrupt(0);
  if (param_1 == -9) {
    software_interrupt(0);
    FUN_01be3b5a(0xfffffff7,1);
    return;
  }
  FUN_01be3b5a(param_1);
  return;
}

