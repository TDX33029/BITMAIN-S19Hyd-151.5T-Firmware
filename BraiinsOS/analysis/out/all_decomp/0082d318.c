// FUN_0082d318 @ 0082d318 size=120 calls_out=4 calls_in=3
// strings: 

void FUN_0082d318(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 & 1) == 0) {
    FUN_00600d2c();
    return;
  }
  uVar1 = param_3 >> 1;
  if (param_3 < 2) {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar1);
    uVar3 = uVar1;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
  }
  FUN_016dd1aa(uVar2,param_2,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

