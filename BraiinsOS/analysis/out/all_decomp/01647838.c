// FUN_01647838 @ 01647838 size=72 calls_out=3 calls_in=0
// strings: tokio-runtime-worker

void FUN_01647838(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x14);
  }
  FUN_016dd1aa(iVar1,"tokio-runtime-worker",0x14);
  *param_1 = 0x14;
  param_1[1] = iVar1;
  param_1[2] = 0x14;
  return;
}

