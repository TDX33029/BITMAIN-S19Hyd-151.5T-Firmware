// FUN_00f74748 @ 00f74748 size=188 calls_out=2 calls_in=1
// strings: 

void FUN_00f74748(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar1 = param_3 * 0x10;
  bVar11 = 0xffffffe < param_3;
  bVar10 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar11 = 0x7ffffffb < uVar1;
    bVar10 = uVar1 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(uVar1);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar1);
  }
  if (param_3 != 0) {
    uVar4 = 0;
    uVar3 = param_3;
    do {
      bVar10 = uVar1 == uVar4;
      if (!bVar10) {
        uVar6 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        uVar7 = *param_2;
        param_2 = param_2 + 4;
        puVar5 = (undefined4 *)(uVar2 + uVar4);
        *puVar5 = uVar7;
        uVar4 = uVar4 + 0x10;
        puVar5[1] = uVar6;
        puVar5[2] = uVar8;
        puVar5[3] = uVar9;
        uVar3 = uVar3 - 1;
        bVar10 = uVar3 == 0;
      }
    } while (!bVar10);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

