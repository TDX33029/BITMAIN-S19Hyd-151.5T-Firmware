// FUN_011e3370 @ 011e3370 size=820 calls_out=11 calls_in=2
// strings: 

int FUN_011e3370(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined3 uStack_c8;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  int local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
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
  
  uVar12 = CONCAT44(local_cc,local_d0);
  if ((*param_2 == '\x05') && (iVar3 = param_1[4], iVar3 == *(int *)(param_2 + 0xc))) {
    local_7c = *(uint *)(param_2 + 4);
    local_78 = *(undefined4 *)(param_2 + 8);
    local_a0 = param_1[2];
    local_9c = param_1[3];
    local_64 = 0;
    if (local_7c != 0) {
      local_64 = iVar3;
    }
    local_84 = (uint)(local_7c != 0);
    local_88 = iVar3;
    if (local_a0 == 0) {
      local_88 = 0;
    }
    local_a8 = (uint)(local_a0 != 0);
    local_5c = 0;
    local_60 = 0;
    local_70 = 0;
    local_80 = 0;
    local_94 = 0;
    local_a4 = 0;
    local_98 = local_a8;
    local_90._0_4_ = local_a0;
    local_90._4_4_ = local_9c;
    local_74 = local_84;
    local_6c = local_7c;
    local_68 = local_78;
    do {
      uVar10 = FUN_00f45584(&local_a8);
      iVar3 = (int)uVar10;
      if (iVar3 == 0) {
        return 0;
      }
      uVar11 = FUN_00f45584(&local_84);
      iVar4 = (int)uVar11;
      if (iVar4 == 0) {
        return 0;
      }
    } while (((*(int *)(iVar3 + 8) == *(int *)(iVar4 + 8)) &&
             (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4)),
             iVar3 == 0)) &&
            (iVar3 = FUN_011e2b78((int)((ulonglong)uVar10 >> 0x20),(int)((ulonglong)uVar11 >> 0x20))
            , iVar3 != 0));
  }
  piVar8 = (int *)*param_1;
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_011e36a4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e36a4);
    (*pcVar1)();
  }
  uVar5 = param_1[1];
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_011e36a4;
    local_d8 = *(undefined4 *)(param_4 + 0xc);
    local_d4 = *(undefined4 *)(param_4 + 0x10);
    uVar7 = 0;
    uVar9 = (*(int **)(param_4 + 4))[1];
    if (uVar9 <= uVar5) {
      iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
      uVar7 = uVar9;
      if (iVar3 != 0) {
        uVar7 = 0;
      }
    }
    uVar12 = FUN_011e1508((int)(piVar8 + 2) + uVar7,uVar5 - uVar7);
    local_dc = 3;
    uVar7 = 2;
  }
  uVar10 = FUN_01238114(param_3);
  if (param_1[4] == 0) {
    local_a0 = 0;
    local_a8 = 0;
  }
  else {
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_011f809c(&local_a8,param_1[2],param_1[3]);
  }
  local_9c = local_dc;
  local_98 = local_d8;
  local_94 = local_d4;
  local_50 = 6;
  local_88 = 0x8000000e;
  local_80 = CONCAT31(uStack_c8,5);
  local_74 = local_a0;
  local_7c = local_a8;
  local_78 = local_a4;
  local_a8 = uVar7;
  local_4c = param_2;
  local_30 = piVar8;
  local_2c = uVar5;
  local_90 = uVar12;
  local_38 = uVar10;
  iVar3 = thunk_FUN_016d4a50(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar3,&local_a8,0x80);
  return iVar3;
}

