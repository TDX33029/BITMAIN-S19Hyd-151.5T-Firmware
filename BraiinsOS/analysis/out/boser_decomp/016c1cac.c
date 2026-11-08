// FUN_016c1cac @ 016c1cac size=184 calls_out=2 calls_in=2
// strings: 

void FUN_016c1cac(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar6 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  uVar7 = 0;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar6;
    bVar9 = uVar6 == 0x7ffffffc;
  }
  if (!bVar10 || bVar9) {
    if (uVar6 == 0) {
      uVar3 = 4;
      uVar6 = 0;
    }
    else {
      uVar7 = 4;
      uVar3 = FUN_01298504(uVar6,4);
      if (uVar3 == 0) goto LAB_016c1cc4;
      if (param_3 != 0) {
        iVar4 = 0;
        uVar6 = param_3;
        do {
          bVar9 = param_3 * -0x10 == iVar4;
          if (!bVar9) {
            uVar8 = *param_2;
            uVar7 = param_2[2];
            uVar1 = *(undefined2 *)(param_2 + 3);
            uVar2 = *(ushort *)(param_2 + 1);
            param_2 = param_2 + 4;
            puVar5 = (undefined4 *)(uVar3 - iVar4);
            *puVar5 = uVar8;
            iVar4 = iVar4 + -0x10;
            puVar5[1] = (uint)uVar2;
            *(undefined2 *)(puVar5 + 3) = uVar1;
            puVar5[2] = uVar7;
            uVar6 = uVar6 - 1;
            bVar9 = uVar6 == 0;
          }
        } while (!bVar9);
      }
      uVar6 = param_3;
    }
    *param_1 = uVar6;
    param_1[1] = uVar3;
    param_1[2] = param_3;
    return;
  }
LAB_016c1cc4:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar7,uVar6);
}

