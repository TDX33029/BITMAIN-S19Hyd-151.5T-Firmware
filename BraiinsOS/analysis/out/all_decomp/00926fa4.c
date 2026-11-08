// FUN_00926fa4 @ 00926fa4 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_00926fa4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  param_1[3] = param_3;
  param_1[4] = iVar1;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

