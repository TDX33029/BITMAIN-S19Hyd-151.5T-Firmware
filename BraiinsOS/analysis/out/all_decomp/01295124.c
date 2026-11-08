// FUN_01295124 @ 01295124 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_01295124(uint *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 5;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (param_2[1] == 0x80000000) {
      uVar1 = thunk_FUN_016d4a50(param_4);
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_4);
      }
      FUN_016dd1aa(uVar1,param_3,param_4);
      param_2[1] = param_4;
      param_2[2] = uVar1;
      param_2[3] = param_4;
    }
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  return;
}

