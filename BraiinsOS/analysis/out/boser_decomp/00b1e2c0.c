// FUN_00b1e2c0 @ 00b1e2c0 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_00b1e2c0(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  
  uVar4 = 0;
  iVar10 = param_3 * 0x28;
  if (0x3333333 < param_3) {
LAB_00b1e2e8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar10);
  }
  if (iVar10 == 0) {
    uVar1 = 8;
    uVar3 = 0;
  }
  else {
    uVar4 = 8;
    uVar1 = FUN_01298504(iVar10,8);
    if (uVar1 == 0) goto LAB_00b1e2e8;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)(uVar1 + 0x20);
      uVar3 = param_3;
      do {
        bVar13 = iVar10 == 0;
        if (!bVar13) {
          uVar4 = param_2[6];
          uVar9 = param_2[7];
          iVar10 = iVar10 + -0x28;
          uVar12 = param_2[8];
          uVar5 = param_2[1];
          uVar6 = param_2[2];
          uVar7 = param_2[3];
          uVar8 = param_2[4];
          uVar11 = param_2[5];
          puVar2[-8] = *param_2;
          puVar2[-7] = uVar5;
          puVar2[-6] = uVar6;
          puVar2[-5] = uVar7;
          puVar2[-4] = uVar8;
          puVar2[-3] = uVar11;
          *puVar2 = uVar12;
          puVar2[-1] = uVar9;
          puVar2[-2] = uVar4;
          puVar2 = puVar2 + 10;
          uVar3 = uVar3 - 1;
          bVar13 = uVar3 == 0;
          param_2 = param_2 + 10;
        }
      } while (!bVar13);
    }
    uVar3 = param_3;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

