// FUN_009d42ac @ 009d42ac size=240 calls_out=3 calls_in=3
// strings: 

void FUN_009d42ac(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_3 * 4;
  bVar6 = 0x3ffffffe < param_3;
  bVar5 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar3;
    bVar5 = uVar3 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar3);
  }
  if (uVar3 == 0) {
    uVar2 = 4;
    uVar1 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar3);
    uVar1 = param_3;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar3);
    }
  }
  if (param_3 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = 0;
    return;
  }
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_2 + 4);
  do {
    if (puVar4[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034ae12,0x13,&DAT_0186ab88);
    }
    *(undefined4 *)(uVar2 + uVar3 * 4) = *(undefined4 *)*puVar4;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 6;
  } while (param_3 != uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

