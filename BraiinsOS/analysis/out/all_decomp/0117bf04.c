// FUN_0117bf04 @ 0117bf04 size=1280 calls_out=9 calls_in=0
// strings: 

void FUN_0117bf04(uint *param_1,undefined4 param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8 [4];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar10 = *(uint *)(param_3 + 0xc);
  local_e4 = 0;
  bVar16 = 0x3fffffe < uVar10;
  bVar15 = uVar10 == 0x3ffffff;
  uVar4 = uVar10 * 0x40;
  if (uVar10 < 0x4000000) {
    bVar16 = 0x7ffffffb < uVar4;
    bVar15 = uVar4 == 0x7ffffffc;
  }
  if (bVar16 && !bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar12 = 0;
  if (uVar4 == 0) {
    local_e8 = 4;
  }
  else {
    local_e8 = thunk_FUN_016d4a50(uVar4);
    local_e4 = uVar10;
    if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
  }
  uVar4 = *(uint *)(param_3 + 4);
  uVar7 = *(uint *)(param_3 + 8);
  if (uVar4 == 0) {
    uVar10 = 0;
  }
  uVar14 = (uint)(uVar4 != 0);
  local_dc = 0;
  local_c4 = 0;
  local_d8[1] = 0;
  iVar8 = 1;
  local_e0 = local_e8;
  local_d8[0] = uVar14;
  local_d8[2] = uVar4;
  local_d8[3] = uVar7;
  local_c8 = uVar14;
  local_c0 = uVar4;
  local_bc = uVar7;
  local_b8 = uVar10;
  while( true ) {
    iVar11 = iVar8;
    uVar17 = FUN_00f45584(local_d8);
    iVar8 = (int)uVar17;
    uVar13 = iVar11 - 1;
    if (iVar8 == 0) break;
    local_3c = *(int *)(iVar8 + 4);
    local_38 = *(int *)(iVar8 + 8);
    local_40 = 0x80000000;
    local_34 = param_4;
    FUN_011c9534(&local_b0,param_2,(int)((ulonglong)uVar17 >> 0x20),&local_40,param_5,param_6);
    if (uVar13 == local_e4) {
      FUN_011ca644(&local_e4);
      local_e8 = local_e0;
    }
    puVar2 = (uint *)(local_e8 + iVar12);
    iVar12 = iVar12 + 0x40;
    *puVar2 = local_b0;
    puVar2[1] = local_ac;
    puVar2[2] = local_a8;
    puVar2[3] = local_a4;
    puVar2[4] = (uint)local_a0;
    puVar2[5] = local_9c;
    puVar2[6] = uStack_98;
    puVar2[7] = uStack_94;
    puVar2[8] = local_90;
    puVar2[9] = uStack_8c;
    puVar2[10] = local_88;
    puVar2[0xb] = uStack_84;
    puVar2[0xc] = uStack_80;
    puVar2[0xd] = uStack_7c;
    puVar2[0xe] = uStack_78;
    puVar2[0xf] = uStack_74;
    iVar8 = iVar11 + 1;
    local_dc = iVar11;
  }
  uVar5 = local_e8;
  do {
    if (iVar12 == 0) {
      local_c8 = 0;
      local_d8[1] = local_e4;
      local_d8[2] = local_e8;
      local_d8[0] = 0x80000000;
      local_d8[3] = uVar13;
      goto LAB_0117c10c;
    }
    pcVar1 = (char *)(uVar5 + 0x3c);
    iVar12 = iVar12 + -0x40;
    uVar5 = uVar5 + 0x40;
  } while (*pcVar1 != '\0');
  local_d8[3] = local_e4;
  local_c8 = local_e8;
  local_d8[0] = 0;
  local_c0 = 0;
  local_d8[2] = 0;
  local_d8[1] = 4;
  local_c4 = uVar13;
LAB_0117c10c:
  uVar13 = 0;
  local_5c = 0;
  local_6c = 0;
  local_70 = uVar14;
  local_68 = uVar4;
  uStack_64 = uVar7;
  local_60 = uVar14;
  local_58 = uVar4;
  local_54 = uVar7;
  local_50 = uVar10;
  iVar12 = FUN_00f45584(&local_70);
  puVar2 = (uint *)&DAT_00000008;
  if (iVar12 == 0) {
    local_a4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar12 + 8);
    if (uVar4 == 0) {
      uVar10 = 1;
    }
    else {
      uVar9 = *(undefined4 *)(iVar12 + 4);
      uVar10 = thunk_FUN_016d4a50(uVar4);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar4);
      }
      FUN_016dd1aa(uVar10,uVar9,uVar4);
      local_a4 = 0;
      if (uVar4 == 0x80000000) goto LAB_0117c324;
    }
    local_b0 = CONCAT31(local_b0._1_3_,3);
    uVar7 = local_50 + 1;
    if (local_50 == 0xffffffff) {
      uVar7 = 0xffffffff;
    }
    uVar14 = uVar7;
    if (uVar7 < 5) {
      uVar14 = 4;
    }
    iVar12 = uVar14 * 0x18;
    uVar9 = 0;
    local_ac = uVar4;
    local_a8 = uVar10;
    local_a4 = uVar4;
    if (0x5555555 < uVar7) {
LAB_0117c1ec:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,iVar12);
    }
    if (iVar12 == 0) {
      puVar2 = (uint *)&DAT_00000008;
      uVar14 = 0;
    }
    else {
      puVar2 = (uint *)thunk_FUN_016d4a50(iVar12);
      if (puVar2 == (uint *)0x0) {
        uVar9 = 8;
        goto LAB_0117c1ec;
      }
    }
    *puVar2 = local_b0;
    puVar2[1] = local_ac;
    puVar2[2] = local_a8;
    puVar2[3] = local_a4;
    puVar2[4] = (uint)local_a0;
    puVar2[5] = local_9c;
    iVar12 = 0x18;
    local_44 = 1;
    local_b0 = local_70;
    local_ac = local_6c;
    local_a8 = local_68;
    local_a4 = uStack_64;
    local_a0 = (uint *)local_60;
    local_9c = local_5c;
    uStack_98 = local_58;
    uStack_94 = local_54;
    local_90 = local_50;
    local_4c = uVar14;
    local_48 = puVar2;
    while (uVar13 = local_44, iVar8 = FUN_00f45584(&local_b0), iVar8 != 0) {
      iVar11 = *(int *)(iVar8 + 8);
      if (iVar11 == 0) {
        iVar8 = 1;
      }
      else {
        uVar9 = *(undefined4 *)(iVar8 + 4);
        iVar8 = thunk_FUN_016d4a50(iVar11);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar11);
        }
        FUN_016dd1aa(iVar8,uVar9,iVar11);
        if (iVar11 == -0x80000000) break;
      }
      local_40 = CONCAT31(local_40._1_3_,3);
      local_3c = iVar11;
      local_38 = iVar8;
      local_34 = iVar11;
      if (uVar13 == local_4c) {
        iVar8 = local_90 + 1;
        if (local_90 == 0xffffffff) {
          iVar8 = -1;
        }
        FUN_011cf828(&local_4c,uVar13,iVar8,8,0x18);
        puVar2 = local_48;
      }
      puVar3 = (undefined4 *)((int)puVar2 + iVar12);
      local_44 = uVar13 + 1;
      iVar12 = iVar12 + 0x18;
      *puVar3 = local_40;
      puVar3[1] = local_3c;
      puVar3[2] = local_38;
      puVar3[3] = local_34;
      puVar3[4] = uStack_30;
      puVar3[5] = uStack_2c;
    }
    local_a4 = local_4c;
  }
LAB_0117c324:
  local_a8 = CONCAT31(local_a8._1_3_,4);
  local_ac = 1;
  local_b0 = 1;
  local_a0 = puVar2;
  local_9c = uVar13;
  puVar2 = (uint *)thunk_FUN_016d4a50(0x20);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar2 = local_b0;
  puVar2[1] = local_ac;
  puVar2[2] = local_a8;
  puVar2[3] = local_a4;
  iVar12 = 0x18;
  puVar2[4] = (uint)local_a0;
  puVar2[5] = local_9c;
  puVar2[6] = uStack_98;
  puVar2[7] = uStack_94;
  if (local_d8[0] == 0x80000000) {
    iVar12 = 0x10;
  }
  piVar6 = *(int **)((int)local_d8 + iVar12);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar15 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar15);
    *piVar6 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_d8 + iVar12));
    }
  }
  *(uint **)((int)local_d8 + iVar12) = puVar2;
  *param_1 = local_d8[0];
  param_1[1] = local_d8[1];
  param_1[2] = local_d8[2];
  param_1[3] = local_d8[3];
  param_1[4] = local_c8;
  param_1[5] = local_c4;
  param_1[6] = local_c0;
  return;
}

