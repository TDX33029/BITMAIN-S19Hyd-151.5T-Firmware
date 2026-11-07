// FUN_01206f54 @ 01206f54 size=948 calls_out=11 calls_in=2
// strings: 

int FUN_01206f54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar16 = CONCAT44(local_e4,local_e8);
  iVar4 = param_1[6];
  uVar8 = 1;
  if ((int)*(uint *)(iVar4 + 8) < 0) {
    uVar8 = *(uint *)(iVar4 + 8) ^ 0x80000000;
  }
  if (uVar8 == 0) {
    if (*(int *)(iVar4 + 0xc) != 0) {
      return 0;
    }
  }
  else if (uVar8 == 1) {
    puVar12 = *(undefined4 **)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 1) {
      iVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
      if (iVar4 == 0) {
        return 0;
      }
    }
    else if (iVar4 != 0) {
      puVar9 = puVar12 + iVar4 * 8;
      do {
        iVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
        if (iVar4 == 0) {
          return 0;
        }
        puVar12 = puVar12 + 8;
      } while (puVar12 != puVar9);
    }
  }
  else {
    puVar12 = *(undefined4 **)(iVar4 + 0x10);
    iVar4 = *(int *)(iVar4 + 0x14) << 5;
    while (iVar4 != 0) {
      iVar5 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
      iVar4 = iVar4 + -0x20;
      puVar12 = puVar12 + 8;
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  piVar15 = (int *)param_1[7];
  do {
    iVar4 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_01207324:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1207324);
    (*pcVar1)();
  }
  uVar13 = param_1[8];
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01207324;
    local_ec = *(undefined4 *)(param_4 + 0x10);
    local_f0 = *(undefined4 *)(param_4 + 0xc);
    uVar11 = param_1[8];
    uVar10 = (*(int **)(param_4 + 4))[1];
    uVar8 = 0;
    if (uVar10 <= uVar11) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar15 + 2,uVar10);
      uVar8 = uVar10;
      if (iVar4 != 0) {
        uVar8 = 0;
      }
    }
    uVar16 = FUN_011e1508((int)(piVar15 + 2) + uVar8,uVar11 - uVar8);
    local_f4 = 3;
    iVar4 = 2;
  }
  uVar17 = FUN_01238114(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar3 = 0;
    break;
  default:
    local_e0 = *param_1;
    local_dc = param_1[1];
    local_d8 = param_1[2];
    local_d4 = param_1[3];
    uStack_d0 = param_1[4];
    uStack_cc = param_1[5];
    goto LAB_01207254;
  case 3:
    iVar5 = param_1[3];
    uVar14 = param_1[2];
    if (iVar5 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar5);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar5);
      }
    }
    FUN_016dd1aa(iVar7,uVar14,iVar5);
    uVar3 = 3;
    local_dc = iVar5;
    local_d8 = iVar7;
    local_d4 = iVar5;
    break;
  case 4:
    FUN_0115c22c((uint)&local_e0 | 4,param_1 + 1);
    uVar3 = 4;
    break;
  case 5:
    if (param_1[3] == 0) {
      local_a0 = 0;
      local_a8 = 0;
    }
    else {
      if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c(&local_a8,param_1[1],param_1[2]);
    }
    local_dc = local_a8;
    local_d8 = iStack_a4;
    local_d4 = local_a0;
    uVar3 = 5;
  }
  local_e0 = CONCAT31(local_e0._1_3_,uVar3);
LAB_01207254:
  puVar12 = (undefined4 *)((uint)&local_c8 | 4);
  *puVar12 = local_e0;
  puVar12[1] = local_dc;
  puVar12[2] = local_d8;
  puVar12[3] = local_d4;
  puVar12[4] = uStack_d0;
  puVar12[5] = uStack_cc;
  local_50 = 6;
  local_88 = 0x80000022;
  local_84 = local_c8;
  uStack_80 = uStack_c4;
  uStack_7c = uStack_c0;
  local_78 = local_bc;
  uStack_74 = uStack_b8;
  uStack_70 = uStack_b4;
  uStack_6c = uStack_b0;
  uStack_9c = local_f4;
  local_98 = local_f0;
  uStack_94 = local_ec;
  local_a8 = iVar4;
  local_4c = param_2;
  local_30 = piVar15;
  local_2c = uVar13;
  uStack_90 = uVar16;
  local_38 = uVar17;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar4,&local_a8,0x80);
  return iVar4;
}

