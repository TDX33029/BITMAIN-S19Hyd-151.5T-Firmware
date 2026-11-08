// FUN_013c4750 @ 013c4750 size=192 calls_out=2 calls_in=1
// strings: 

void FUN_013c4750(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  param_2 = param_2 >> (param_3 & 0x1f);
  bVar5 = 0x3ffffffe < param_2;
  bVar4 = param_2 == 0x3fffffff;
  uVar3 = param_2 * 4;
  if (param_2 < 0x40000000) {
    bVar5 = 0x7ffffffb < uVar3;
    bVar4 = uVar3 == 0x7ffffffc;
  }
  if (bVar5 && !bVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar3 == 0) {
    uVar2 = 4;
    uVar1 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar3);
    uVar1 = param_2;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar3);
    }
  }
  if (param_2 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = 0;
    param_1[3] = param_3;
    return;
  }
  uVar3 = 0;
  do {
    *(uint *)(uVar2 + uVar3 * 4) = uVar3 << (param_3 & 0x1f);
    uVar3 = uVar3 + 1;
  } while (param_2 != uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}

