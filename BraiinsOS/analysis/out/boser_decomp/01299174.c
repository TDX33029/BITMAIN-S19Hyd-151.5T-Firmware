// FUN_01299174 @ 01299174 size=180 calls_out=2 calls_in=2
// strings: 

void FUN_01299174(uint *param_1,undefined4 *param_2,uint param_3)

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
  
  uVar3 = param_3 * 0x10;
  bVar11 = 0xffffffe < param_3;
  bVar10 = param_3 == 0xfffffff;
  uVar6 = 0;
  if (param_3 < 0x10000000) {
    bVar11 = 0x7ffffffb < uVar3;
    bVar10 = uVar3 == 0x7ffffffc;
  }
  if (!bVar11 || bVar10) {
    if (uVar3 == 0) {
      uVar1 = 4;
      uVar3 = 0;
    }
    else {
      uVar6 = 4;
      uVar1 = FUN_01298504(uVar3,4);
      if (uVar1 == 0) goto LAB_0129918c;
      if (param_3 != 0) {
        uVar2 = 0;
        uVar4 = param_3;
        do {
          bVar10 = uVar3 == uVar2;
          if (!bVar10) {
            uVar9 = *param_2;
            uVar7 = param_2[1];
            uVar6 = param_2[2];
            uVar8 = param_2[3];
            param_2 = param_2 + 4;
            puVar5 = (undefined4 *)(uVar1 + uVar2);
            *puVar5 = uVar9;
            uVar2 = uVar2 + 0x10;
            puVar5[1] = uVar7;
            puVar5[2] = uVar6;
            puVar5[3] = uVar8;
            uVar4 = uVar4 - 1;
            bVar10 = uVar4 == 0;
          }
        } while (!bVar10);
      }
      uVar3 = param_3;
    }
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = param_3;
    return;
  }
LAB_0129918c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar3);
}

