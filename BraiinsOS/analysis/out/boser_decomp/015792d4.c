// FUN_015792d4 @ 015792d4 size=752 calls_out=10 calls_in=2
// strings: 

int FUN_015792d4(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_b8 [16];
  uint local_a8 [3];
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  undefined8 local_90;
  int local_88;
  uint local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar11 = CONCAT44(local_bc,local_c0);
  if ((*param_2 == '\x05') && (iVar3 = param_1[4], iVar3 == *(int *)(param_2 + 0xc))) {
    local_7c = *(int *)(param_2 + 4);
    local_a8[2] = param_1[2];
    local_9c = param_1[3];
    local_78 = *(undefined4 *)(param_2 + 8);
    local_64 = 0;
    if (local_7c != 0) {
      local_64 = iVar3;
    }
    local_84 = (uint)(local_7c != 0);
    local_88 = iVar3;
    if (local_a8[2] == 0) {
      local_88 = 0;
    }
    local_a8[0] = (uint)(local_a8[2] != 0);
    local_5c = 0;
    local_60 = 0;
    local_70 = 0;
    local_80 = 0;
    local_94 = 0;
    local_a8[1] = 0;
    local_98 = (int *)local_a8[0];
    local_90._0_4_ = local_a8[2];
    local_90._4_4_ = local_9c;
    local_74 = local_84;
    local_6c = local_7c;
    local_68 = local_78;
    do {
      uVar9 = FUN_01a41998(local_a8);
      iVar3 = (int)uVar9;
      if (iVar3 == 0) {
        return 0;
      }
      uVar10 = FUN_01a41998(&local_84);
      iVar4 = (int)uVar10;
      if (iVar4 == 0) {
        return 0;
      }
    } while (((*(int *)(iVar3 + 8) == *(int *)(iVar4 + 8)) &&
             (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4)),
             iVar3 == 0)) &&
            (iVar3 = FUN_01578ae8((int)((ulonglong)uVar9 >> 0x20),(int)((ulonglong)uVar10 >> 0x20)),
            iVar3 != 0));
  }
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_015795b0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15795b0);
    (*pcVar1)();
  }
  uVar8 = param_1[1];
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    local_c8 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *local_c8;
      bVar2 = (bool)hasExclusiveAccess(local_c8);
    } while (!bVar2);
    *local_c8 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_015795b0;
    local_c4 = *(undefined4 *)(param_4 + 0x10);
    piVar6 = piVar5 + 2;
    uVar7 = (*(int **)(param_4 + 4))[1];
    if (uVar8 < uVar7) {
      uVar7 = 0;
    }
    else {
      iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar6,uVar7);
      if (iVar3 != 0) {
        uVar7 = 0;
      }
      piVar6 = (int *)((int)piVar6 + uVar7);
    }
    uVar11 = FUN_016bc0ec(piVar6,uVar8 - uVar7);
    local_cc = 3;
    uVar7 = 2;
  }
  uVar9 = FUN_01531840(param_3);
  FUN_0156aa80(local_a8,param_1 + 2);
  FUN_01bed4e2((uint)auStack_b8 | 3,local_a8,0xc);
  local_9c = local_cc;
  local_98 = local_c8;
  local_94 = local_c4;
  local_50 = 6;
  local_80 = CONCAT31(local_80._1_3_,5);
  local_88 = 0x8000000e;
  local_a8[0] = uVar7;
  local_4c = param_2;
  local_90 = uVar11;
  FUN_01bed4e2((int)&local_80 + 1,auStack_b8,0xf);
  local_30 = piVar5;
  local_2c = uVar8;
  local_38 = uVar9;
  iVar3 = thunk_FUN_01be5118(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar3,local_a8,0x80);
  return iVar3;
}

