// FUN_00f5ee10 @ 00f5ee10 size=128 calls_out=3 calls_in=0
// strings: 

void FUN_00f5ee10(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_4);
    uVar2 = param_4;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar1,param_3,param_4);
  *param_1 = iVar1;
  param_1[1] = param_4;
  param_1[2] = uVar2;
  uVar2 = 0x20 - LZCOUNT(uVar2 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  param_1[3] = uVar2 << 2 | 1;
  return;
}

