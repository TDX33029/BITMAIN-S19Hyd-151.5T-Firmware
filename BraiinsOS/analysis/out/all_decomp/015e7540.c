// FUN_015e7540 @ 015e7540 size=1168 calls_out=6 calls_in=2
// strings: 

void FUN_015e7540(undefined2 *param_1,undefined4 *param_2,uint *param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_5c;
  uint local_54;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar13 = *param_3;
  uVar11 = param_3[2];
  uVar9 = 0x2000;
  local_4c = uVar13;
  uVar8 = uVar11;
  if ((param_4 & 1) != 0) {
    local_54 = 0;
    if (0xfffffbff < param_5) goto LAB_015e7698;
    uVar5 = param_5 + 0x400;
    uVar9 = (param_5 - (uVar5 & 0x1fff)) + 0x2400;
    if (uVar9 < uVar5) {
      uVar9 = 0x2000;
    }
    if ((uVar5 & 0x1fff) == 0) {
      uVar9 = uVar5;
    }
    if (param_5 != 0) goto LAB_015e7698;
  }
  local_54 = param_4 ^ 1;
  if (uVar13 - uVar11 < 0x20) {
    uVar7 = *param_2;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    while (uVar5 = FUN_016e0250(uVar7,&local_48,0x20), uVar5 == 0xffffffff) {
      piVar1 = (int *)FUN_016d2bc8();
      iVar2 = *piVar1;
      if (iVar2 != 4) {
LAB_015e7624:
        *(int *)(param_1 + 2) = iVar2;
        *(undefined1 *)((int)param_1 + 3) = 0;
        *(undefined2 *)((int)param_1 + 1) = 0;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    if (0x20 < uVar5) {
LAB_015e7994:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar5,0x20,&DAT_018aab48);
    }
    if (uVar13 - uVar11 < uVar5) {
      FUN_015bf41c(param_3,uVar11,uVar5,1,1);
      uVar8 = param_3[2];
    }
    FUN_016dd1aa(param_3[1] + uVar8,&local_48,uVar5);
    param_3[2] = uVar8 + uVar5;
    if (uVar5 == 0) {
      *(undefined1 *)param_1 = 4;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    local_4c = *param_3;
    uVar8 = uVar8 + uVar5;
  }
LAB_015e7698:
  local_5c = 0;
  iVar6 = 0;
  do {
    if (uVar8 == local_4c && local_4c == uVar13) {
      uVar7 = *param_2;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      while (uVar5 = FUN_016e0250(uVar7,&local_48,0x20), uVar5 == 0xffffffff) {
        piVar1 = (int *)FUN_016d2bc8();
        iVar2 = *piVar1;
        if (iVar2 != 4) goto LAB_015e7624;
      }
      if (0x20 < uVar5) goto LAB_015e7994;
      if (uVar5 == 0) {
        FUN_016dd1aa(param_3[1] + uVar13,&local_48,0);
        param_3[2] = uVar13;
        *(undefined1 *)param_1 = 4;
        *(uint *)(param_1 + 2) = uVar13 - uVar11;
        return;
      }
      FUN_015bf41c(param_3,uVar13,uVar5,1,1);
      uVar12 = param_3[1];
      uVar8 = param_3[2];
      FUN_016dd1aa(uVar12 + uVar8,&local_48,uVar5);
      uVar8 = uVar8 + uVar5;
      param_3[2] = uVar8;
      local_4c = *param_3;
      if (uVar8 != local_4c) goto LAB_015e76d0;
LAB_015e7804:
      uVar5 = local_4c + 0x20;
      if (uVar5 <= local_4c * 2) {
        uVar5 = local_4c << 1;
      }
      FUN_015bf51c(&local_48,local_4c,uVar12,uVar5,1,1);
      if (local_48 == 1) {
        *param_1 = 0x2601;
        return;
      }
      *param_3 = uVar5;
      param_3[1] = local_44;
      uVar12 = local_44;
    }
    else {
      uVar12 = param_3[1];
      if (uVar8 == local_4c) goto LAB_015e7804;
LAB_015e76d0:
      uVar5 = *param_3;
    }
    uVar7 = *param_2;
    uVar4 = uVar5 - uVar8;
    if (uVar9 < uVar5 - uVar8) {
      uVar4 = uVar9;
    }
    uVar10 = uVar4;
    if (0x7ffffffe < uVar4) {
      uVar10 = 0x7fffffff;
    }
    while (uVar3 = FUN_016e0250(uVar7,uVar12 + uVar8,uVar10), uVar3 == 0xffffffff) {
      piVar1 = (int *)FUN_016d2bc8();
      if (*piVar1 != 4) {
        *(int *)(param_1 + 2) = *piVar1;
        *(undefined1 *)param_1 = 0;
        param_3[2] = uVar8;
        return;
      }
    }
    uVar8 = uVar3 + uVar8;
    uVar12 = local_5c;
    if (local_5c < uVar3) {
      uVar12 = uVar3;
    }
    param_3[2] = uVar8;
    if (uVar3 == 0) {
      *(undefined1 *)param_1 = 4;
      *(uint *)(param_1 + 2) = uVar8 - uVar11;
      return;
    }
    local_5c = uVar12 - uVar3;
    iVar2 = 0;
    if (uVar3 < uVar4) {
      iVar2 = iVar6 + 1;
    }
    iVar6 = iVar2;
    local_4c = uVar5;
    if ((local_54 & 1) != 0) {
      uVar5 = uVar9;
      if (1 < iVar2) {
        uVar5 = 0xffffffff;
      }
      if (uVar12 == uVar4) {
        uVar5 = uVar9;
      }
      uVar9 = uVar5;
      if (((uVar3 == uVar4) && (uVar5 <= uVar4)) && (uVar9 = uVar5 << 1, (int)uVar5 < 0)) {
        uVar9 = 0xffffffff;
      }
    }
  } while( true );
}

