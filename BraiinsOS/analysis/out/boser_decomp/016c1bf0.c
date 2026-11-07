// FUN_016c1bf0 @ 016c1bf0 size=188 calls_out=2 calls_in=2
// strings: 

void FUN_016c1bf0(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  uVar6 = 0;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar4;
    bVar9 = uVar4 == 0x7ffffffc;
  }
  if (!bVar10 || bVar9) {
    if (uVar4 == 0) {
      uVar2 = 4;
      uVar4 = 0;
    }
    else {
      uVar6 = 4;
      uVar2 = FUN_01298504(uVar4,4);
      if (uVar2 == 0) goto LAB_016c1c0c;
      if (param_3 != 0) {
        iVar3 = 0;
        uVar4 = param_3;
        do {
          bVar9 = param_3 * -0x10 == iVar3;
          if (!bVar9) {
            uVar6 = *param_2;
            uVar8 = param_2[2];
            uVar7 = param_2[1];
            uVar1 = *(undefined1 *)(param_2 + 3);
            param_2 = param_2 + 4;
            puVar5 = (undefined4 *)(uVar2 - iVar3);
            *puVar5 = uVar6;
            iVar3 = iVar3 + -0x10;
            *(undefined1 *)(puVar5 + 3) = uVar1;
            puVar5[1] = uVar7;
            puVar5[2] = uVar8;
            uVar4 = uVar4 - 1;
            bVar9 = uVar4 == 0;
          }
        } while (!bVar9);
      }
      uVar4 = param_3;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = param_3;
    return;
  }
LAB_016c1c0c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar4);
}

