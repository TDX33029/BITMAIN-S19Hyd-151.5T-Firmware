// FUN_0136210c @ 0136210c size=200 calls_out=2 calls_in=1
// strings: 

void FUN_0136210c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar4;
    bVar9 = uVar4 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
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
      bVar9 = uVar4 != 0;
      if (bVar9) {
        puVar6 = (undefined4 *)(param_2 + uVar3 * 0x10);
        uVar4 = uVar4 - 0x10;
        uVar5 = puVar6[1];
        uVar8 = puVar6[2];
        uVar7 = puVar6[3];
        puVar2 = (undefined4 *)(uVar1 + uVar3 * 0x10);
        *puVar2 = *puVar6;
        uVar3 = uVar3 + 1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar8;
        puVar2[3] = uVar7;
      }
    } while (bVar9 && param_3 != uVar3);
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

