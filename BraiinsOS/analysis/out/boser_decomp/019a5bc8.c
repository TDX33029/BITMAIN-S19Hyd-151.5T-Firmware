// FUN_019a5bc8 @ 019a5bc8 size=1140 calls_out=6 calls_in=2
// strings: 

void FUN_019a5bc8(undefined2 *param_1,undefined4 param_2,uint *param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_60;
  uint local_58;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar12 = *param_3;
  uVar11 = param_3[2];
  uVar8 = 0x2000;
  uVar5 = uVar12;
  uVar7 = uVar11;
  if ((param_4 & 1) != 0) {
    local_58 = 0;
    if (0xfffffbff < param_5) goto LAB_019a5d18;
    uVar4 = param_5 + 0x400;
    uVar8 = (param_5 - (uVar4 & 0x1fff)) + 0x2400;
    if (uVar8 < uVar4) {
      uVar8 = 0x2000;
    }
    if ((uVar4 & 0x1fff) == 0) {
      uVar8 = uVar4;
    }
    if (param_5 != 0) goto LAB_019a5d18;
  }
  local_58 = param_4 ^ 1;
  if (uVar12 - uVar11 < 0x20) {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    while (uVar4 = FUN_01bf0424(param_2,&local_48,0x20), uVar4 == 0xffffffff) {
      piVar1 = (int *)FUN_01be3244();
      iVar2 = *piVar1;
      if (iVar2 != 4) {
LAB_019a5ca8:
        *(int *)(param_1 + 2) = iVar2;
        *(undefined1 *)((int)param_1 + 3) = 0;
        *(undefined2 *)((int)param_1 + 1) = 0;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    if (0x20 < uVar4) {
LAB_019a6000:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,0x20,&DAT_01d27744);
    }
    if (uVar12 - uVar11 < uVar4) {
      FUN_0197ac30(param_3,uVar11,uVar4,1,1);
      uVar7 = param_3[2];
    }
    FUN_01bed4e2(param_3[1] + uVar7,&local_48,uVar4);
    param_3[2] = uVar7 + uVar4;
    if (uVar4 == 0) {
      *(undefined1 *)param_1 = 4;
      iVar2 = 0;
LAB_019a5fc0:
      *(int *)(param_1 + 2) = iVar2;
      return;
    }
    uVar5 = *param_3;
    uVar7 = uVar7 + uVar4;
  }
LAB_019a5d18:
  iVar6 = 0;
  local_60 = 0;
  do {
    if (uVar7 == uVar5 && uVar5 == uVar12) {
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      while (uVar4 = FUN_01bf0424(param_2,&local_48,0x20), uVar4 == 0xffffffff) {
        piVar1 = (int *)FUN_01be3244();
        iVar2 = *piVar1;
        if (iVar2 != 4) goto LAB_019a5ca8;
      }
      if (0x20 < uVar4) goto LAB_019a6000;
      if (uVar4 == 0) {
        FUN_01bed4e2(param_3[1] + uVar12,&local_48,0);
        param_3[2] = uVar12;
        iVar2 = uVar12 - uVar11;
        *(undefined1 *)param_1 = 4;
        goto LAB_019a5fc0;
      }
      FUN_0197ac30(param_3,uVar12,uVar4,1,1);
      uVar7 = param_3[2];
      uVar10 = param_3[1];
      FUN_01bed4e2(uVar10 + uVar7,&local_48,uVar4);
      uVar7 = uVar7 + uVar4;
      param_3[2] = uVar7;
      uVar5 = *param_3;
    }
    else {
      uVar10 = param_3[1];
    }
    if (uVar7 == uVar5) {
      uVar4 = uVar5 + 0x20;
      if (uVar4 <= uVar5 * 2) {
        uVar4 = uVar5 << 1;
      }
      FUN_0197ad30(&local_48,uVar5,uVar10,uVar4,1,1);
      if (local_48 == 1) {
        *param_1 = 0x2601;
        return;
      }
      *param_3 = uVar4;
      param_3[1] = local_44;
      uVar5 = uVar4;
      uVar10 = local_44;
    }
    else {
      uVar5 = *param_3;
    }
    uVar4 = uVar5 - uVar7;
    if (uVar8 < uVar5 - uVar7) {
      uVar4 = uVar8;
    }
    uVar9 = uVar4;
    if (0x7ffffffe < uVar4) {
      uVar9 = 0x7fffffff;
    }
    while (uVar3 = FUN_01bf0424(param_2,uVar10 + uVar7,uVar9), uVar3 == 0xffffffff) {
      piVar1 = (int *)FUN_01be3244();
      if (*piVar1 != 4) {
        *(int *)(param_1 + 2) = *piVar1;
        *(undefined1 *)param_1 = 0;
        param_3[2] = uVar7;
        return;
      }
    }
    uVar7 = uVar3 + uVar7;
    uVar10 = local_60;
    if (local_60 < uVar3) {
      uVar10 = uVar3;
    }
    param_3[2] = uVar7;
    if (uVar3 == 0) {
      *(undefined1 *)param_1 = 4;
      *(uint *)(param_1 + 2) = uVar7 - uVar11;
      return;
    }
    local_60 = uVar10 - uVar3;
    iVar2 = 0;
    if (uVar3 < uVar4) {
      iVar2 = iVar6 + 1;
    }
    iVar6 = iVar2;
    if ((local_58 & 1) != 0) {
      uVar9 = uVar8;
      if (1 < iVar6) {
        uVar9 = 0xffffffff;
      }
      if (uVar10 == uVar4) {
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
      if (((uVar3 == uVar4) && (uVar9 <= uVar4)) && (uVar8 = uVar9 << 1, (int)uVar9 < 0)) {
        uVar8 = 0xffffffff;
      }
    }
  } while( true );
}

