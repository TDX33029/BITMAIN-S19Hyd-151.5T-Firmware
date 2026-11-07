// FUN_0074c448 @ 0074c448 size=164 calls_out=4 calls_in=1
// strings: 

void FUN_0074c448(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_016dd1aa(1,param_2,0);
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  if (param_3 < 0x21) {
    *param_1 = 0;
    param_1[1] = iVar1;
    param_1[2] = param_3;
    return;
  }
  param_1[3] = 0x20;
  thunk_FUN_016d3fb4(iVar1);
  *param_1 = 1;
  param_1[1] = param_3;
  param_1[2] = 0;
  return;
}

