// FUN_01170844 @ 01170844 size=232 calls_out=4 calls_in=1
// strings: assertion failed: self.state.load(SeqCst).is_null()

void FUN_01170844(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if (param_1[0x38] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.state.load(SeqCst).is_null()",0x33,&DAT_01c20b40);
  }
  if (*param_1 == 0 && param_1[1] == 0) {
    return;
  }
  FUN_0116d3a8(param_1 + 0x28);
  piVar2 = (int *)param_1[0x2e];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711c88(param_1[0x2e]);
  }
  piVar2 = (int *)param_1[0x2f];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711c88(param_1[0x2f]);
  }
  FUN_01170a14(param_1 + 2);
  if ((char)param_1[0x36] == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01170958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x32] + 0x10))(param_1 + 0x35,param_1[0x33],param_1[0x34]);
  return;
}

