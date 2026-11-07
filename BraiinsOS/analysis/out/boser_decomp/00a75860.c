// FUN_00a75860 @ 00a75860 size=640 calls_out=4 calls_in=2
// strings: 

void FUN_00a75860(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
    iVar10 = param_2 + param_3 * 0x28;
    iVar5 = param_3 * 0x28;
    uVar7 = 0;
    uVar9 = param_6;
    while (uVar6 = uVar7, uVar4 == 0 || uVar4 == unaff_r7) {
      if (iVar5 == 0) {
        uVar8 = 0;
        uVar7 = 0;
        puVar3 = (uint *)&SUB_00000004;
        goto LAB_00a75a64;
      }
      piVar1 = (int *)(param_2 + 0x24);
      uVar4 = *(uint *)(param_2 + 0x20);
      iVar5 = iVar5 + -0x28;
      param_2 = param_2 + 0x28;
      uVar7 = uVar6 + 1;
      uVar9 = uVar6;
      unaff_r7 = *piVar1 * 0x1d8 + uVar4;
    }
    uVar7 = (unaff_r7 - (uVar4 + 0x1d8) >> 3) * -0x5f75270d;
    if (uVar7 < 4) {
      uVar7 = 3;
    }
    iVar5 = (uVar7 + 1) * 8;
    puVar3 = (uint *)FUN_01298504(iVar5,4);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar5);
    }
    *puVar3 = uVar9;
    puVar3[1] = uVar4;
    uVar8 = 1;
    local_28 = 1;
    uVar4 = uVar4 + 0x1d8;
    local_30 = uVar7 + 1;
    local_2c = puVar3;
    while( true ) {
      while( true ) {
        uVar7 = uVar6;
        if (uVar4 == unaff_r7) break;
        if (uVar8 == local_30) {
          FUN_0132b898(&local_30,uVar8,(unaff_r7 - (uVar4 + 0x1d8) >> 3) * -0x5f75270d + 1,4,8);
          puVar3 = local_2c;
        }
        iVar5 = uVar8 * 2;
        puVar3[iVar5] = uVar9;
        uVar8 = uVar8 + 1;
        (puVar3 + iVar5)[1] = uVar4;
        uVar6 = uVar7;
        uVar4 = uVar4 + 0x1d8;
        local_28 = uVar8;
      }
      if (param_2 == iVar10) break;
      puVar2 = (uint *)(param_2 + 0x20);
      unaff_r7 = *(int *)(param_2 + 0x24) * 0x1d8 + *puVar2;
      param_2 = param_2 + 0x28;
      uVar6 = uVar7 + 1;
      uVar4 = *puVar2;
      uVar9 = uVar7;
    }
    uVar7 = local_30;
    puVar3 = local_2c;
  }
  else {
    if (param_3 <= param_5) {
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    param_2 = param_2 + param_5 * 0x28;
    uVar7 = *(uint *)(param_2 + 0x24);
    if (uVar7 == 0) {
      puVar3 = (uint *)&SUB_00000004;
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_00a75a9c;
    }
    uVar9 = *(uint *)(param_2 + 0x20);
    puVar3 = (uint *)FUN_01298504(uVar7 << 3,4);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,uVar7 << 3);
    }
    uVar4 = 0;
    do {
      iVar5 = uVar4 * 2;
      puVar3[iVar5] = param_5;
      uVar4 = uVar4 + 1;
      (puVar3 + iVar5)[1] = uVar9;
      uVar9 = uVar9 + 0x1d8;
    } while (uVar7 != uVar4);
    uVar8 = uVar7;
  }
LAB_00a75a64:
  if (param_6 < uVar8) {
    uVar4 = puVar3[param_6 * 2];
    uVar9 = (puVar3 + param_6 * 2)[1];
    *param_1 = 0;
    param_1[1] = uVar9;
    param_1[2] = uVar4;
    param_1[3] = uVar7;
    param_1[4] = puVar3;
    param_1[5] = uVar8;
    return;
  }
LAB_00a75a9c:
  param_1[1] = 5;
  param_1[2] = param_6;
  param_1[3] = uVar8 - 1;
  *param_1 = 1;
  FUN_0132b958(uVar7,puVar3,4,8);
  return;
}

