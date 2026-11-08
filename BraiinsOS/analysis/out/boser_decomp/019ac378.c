// FUN_019ac378 @ 019ac378 size=1052 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019ac378(undefined2 *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar7 = *param_3;
  uVar11 = param_3[2];
  uVar9 = uVar7 - uVar11;
  local_4c = uVar7;
  uVar5 = uVar11;
  if (uVar9 < 0x20) {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    while (uVar1 = FUN_01bf0424(param_2,&local_48,0x20), uVar1 == 0xffffffff) {
      piVar2 = (int *)FUN_01be3244();
      iVar3 = *piVar2;
      if (iVar3 != 4) {
        *(undefined1 *)((int)param_1 + 3) = 0;
        *(undefined2 *)((int)param_1 + 1) = 0;
        *(int *)(param_1 + 2) = iVar3;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    if (0x20 < uVar1) {
LAB_019ac758:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar1,0x20,&DAT_01d27744);
    }
    if (uVar9 < uVar1) {
      FUN_0197ac30(param_3,uVar11,uVar1,1);
      uVar5 = param_3[2];
    }
    FUN_01bed4e2(param_3[1] + uVar5,&local_48,uVar1);
    uVar5 = uVar5 + uVar1;
    param_3[2] = uVar5;
    if (uVar1 == 0) {
      *(undefined1 *)param_1 = 4;
      iVar3 = 0;
      goto LAB_019ac720;
    }
    local_4c = *param_3;
  }
  uVar6 = 0;
  uVar8 = 0x2000;
  iVar3 = 0;
LAB_019ac47c:
  if (local_4c == uVar7 && uVar5 == local_4c) {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    while (uVar1 = FUN_01bf0424(param_2,&local_48,0x20), uVar1 == 0xffffffff) {
      piVar2 = (int *)FUN_01be3244();
      if (*piVar2 != 4) {
        *(int *)(param_1 + 2) = *piVar2;
        *(undefined1 *)((int)param_1 + 3) = 0;
        *(undefined2 *)((int)param_1 + 1) = 0;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    if (0x20 < uVar1) goto LAB_019ac758;
    if (uVar1 == 0) {
      param_3[2] = uVar7;
      *(undefined1 *)param_1 = 4;
      *(uint *)(param_1 + 2) = uVar9;
      return;
    }
    FUN_0197ac30(param_3,uVar7,uVar1,1);
    uVar12 = param_3[1];
    uVar5 = param_3[2];
    FUN_01bed4e2(uVar12 + uVar5,&local_48,uVar1);
    uVar5 = uVar5 + uVar1;
    param_3[2] = uVar5;
    local_4c = *param_3;
    if (uVar5 == local_4c) goto LAB_019ac684;
  }
  else {
    uVar12 = param_3[1];
    if (uVar5 == local_4c) {
LAB_019ac684:
      uVar1 = local_4c + 0x20;
      if (uVar1 <= local_4c * 2) {
        uVar1 = local_4c << 1;
      }
      FUN_0197ad30(&local_48,local_4c,uVar12,uVar1);
      if (local_48 == 1) {
        *param_1 = 0x2601;
        return;
      }
      *param_3 = uVar1;
      param_3[1] = local_44;
      local_4c = uVar1;
      uVar12 = local_44;
    }
  }
  uVar1 = local_4c - uVar5;
  if (uVar8 < local_4c - uVar5) {
    uVar1 = uVar8;
  }
  uVar10 = uVar1;
  if (0x7ffffffe < uVar1) {
    uVar10 = 0x7fffffff;
  }
  while (uVar4 = FUN_01bf0424(param_2,uVar12 + uVar5,uVar10), uVar4 == 0xffffffff) {
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 != 4) {
      *(int *)(param_1 + 2) = *piVar2;
      *(undefined1 *)param_1 = 0;
      param_3[2] = uVar5;
      return;
    }
  }
  uVar5 = uVar4 + uVar5;
  uVar12 = uVar6;
  if (uVar6 < uVar4) {
    uVar12 = uVar4;
  }
  param_3[2] = uVar5;
  if (uVar4 != 0) {
    uVar6 = uVar12 - uVar4;
    iVar13 = 0;
    if (uVar4 < uVar1) {
      iVar13 = iVar3 + 1;
    }
    uVar10 = uVar8;
    if (1 < iVar13) {
      uVar10 = 0xffffffff;
    }
    if (uVar12 == uVar1) {
      uVar10 = uVar8;
    }
    uVar8 = uVar10;
    iVar3 = iVar13;
    if (((uVar4 == uVar1) && (uVar10 <= uVar1)) && (uVar8 = uVar10 << 1, 0x7fffffff < uVar10)) {
      uVar8 = 0xffffffff;
    }
    goto LAB_019ac47c;
  }
  *(undefined1 *)param_1 = 4;
  iVar3 = uVar5 - uVar11;
LAB_019ac720:
  *(int *)(param_1 + 2) = iVar3;
  return;
}

