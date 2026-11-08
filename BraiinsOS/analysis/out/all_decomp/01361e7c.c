// FUN_01361e7c @ 01361e7c size=188 calls_out=2 calls_in=1
// strings: 

void FUN_01361e7c(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_3 * 8;
  bVar7 = 0x1ffffffe < param_3;
  bVar6 = param_3 == 0x1fffffff;
  if (param_3 < 0x20000000) {
    bVar7 = 0x7ffffffb < uVar4;
    bVar6 = uVar4 == 0x7ffffffc;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  if (uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar1 = thunk_FUN_016d4a50(uVar4);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4);
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      bVar6 = uVar4 != 0;
      if (bVar6) {
        uVar5 = param_2[1];
        puVar2 = (undefined4 *)(uVar1 + uVar3 * 8);
        *puVar2 = *param_2;
        uVar4 = uVar4 - 8;
        param_2 = param_2 + 2;
        uVar3 = uVar3 + 1;
        puVar2[1] = uVar5;
      }
    } while (bVar6 && param_3 != uVar3);
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

