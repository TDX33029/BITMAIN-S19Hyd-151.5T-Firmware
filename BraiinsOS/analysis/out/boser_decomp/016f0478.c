// FUN_016f0478 @ 016f0478 size=540 calls_out=7 calls_in=1
// strings: 

void FUN_016f0478(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 auStack_1020 [4092];
  
  if (param_2[1] == param_2[4]) {
    uVar3 = param_2[1] - 1;
    if (*(uint *)(param_1 + 8) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,*(uint *)(param_1 + 8),&DAT_01d13148);
    }
    piVar9 = (int *)(*(int *)(param_1 + 4) + uVar3 * 0xc);
    iVar14 = piVar9[2];
    if (iVar14 == *piVar9) {
      FUN_015f5b18(piVar9);
    }
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar10 = param_2[4];
    uVar13 = param_2[5];
    puVar4 = (undefined4 *)(piVar9[1] + iVar14 * 0x18);
    *puVar4 = *param_2;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = uVar10;
    puVar4[5] = uVar13;
    uVar3 = iVar14 + 1;
    iVar8 = piVar9[1];
    piVar9[2] = uVar3;
    if (uVar3 < 2) {
      return;
    }
    if (uVar3 < 0x15) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 0x18;
        FUN_016f3660(iVar8,iVar11 + iVar8);
      } while (iVar14 * 0x18 != iVar11);
      return;
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x14);
    if (iVar14 == *(int *)(param_1 + 0xc)) {
      FUN_015f5b18();
    }
    iVar8 = *(int *)(param_1 + 0x10);
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar10 = param_2[4];
    uVar13 = param_2[5];
    puVar4 = (undefined4 *)(iVar8 + iVar14 * 0x18);
    *puVar4 = *param_2;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = uVar10;
    puVar4[5] = uVar13;
    uVar3 = iVar14 + 1;
    *(uint *)(param_1 + 0x14) = uVar3;
    if (uVar3 < 2) {
      return;
    }
    if (uVar3 < 0x15) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 0x18;
        FUN_016f3660(iVar8,iVar11 + iVar8);
      } while (iVar14 * 0x18 != iVar11);
      return;
    }
  }
  uVar1 = uVar3 - (uVar3 >> 1);
  uVar12 = 0x51615;
  if (uVar3 < 0x51615) {
    uVar12 = uVar3;
  }
  if (uVar12 <= uVar1) {
    uVar12 = uVar1;
  }
  if (uVar12 < 0xab) {
    puVar2 = auStack_1020;
    uVar1 = 0xaa;
  }
  else {
    uVar5 = 0;
    iVar14 = uVar12 * 0x18;
    if (0x5555555 < uVar1) {
LAB_016edb5c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar14);
    }
    if (iVar14 == 0) {
      puVar2 = &SUB_00000004;
      uVar1 = 0;
    }
    else {
      uVar5 = 4;
      puVar2 = (undefined1 *)FUN_01298504(iVar14,4);
      uVar1 = uVar12;
      if (puVar2 == (undefined1 *)0x0) goto LAB_016edb5c;
    }
  }
  FUN_016edc1c(iVar8,uVar3,puVar2,uVar1,uVar3 < 0x41);
  if (0xaa < uVar12) {
    FUN_0134aee0(uVar1,puVar2,4,0x18);
  }
  return;
}

