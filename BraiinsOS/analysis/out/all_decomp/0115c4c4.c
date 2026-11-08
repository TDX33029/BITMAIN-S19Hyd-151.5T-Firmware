// FUN_0115c4c4 @ 0115c4c4 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_0115c4c4(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_3 * 4;
  bVar5 = 0x3ffffffe < param_3;
  bVar4 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar5 = 0x7ffffffb < uVar1;
    bVar4 = uVar1 == 0x7ffffffc;
  }
  if (bVar5 && !bVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    uVar3 = 0;
    uVar2 = 4;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar1);
    uVar3 = param_3;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  FUN_016dd1aa(uVar2,param_2,uVar1);
  param_1[2] = param_3;
  return;
}

