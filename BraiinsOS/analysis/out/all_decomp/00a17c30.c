// FUN_00a17c30 @ 00a17c30 size=1216 calls_out=9 calls_in=1
// strings: 

void FUN_00a17c30(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 extraout_r2;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ushort *puVar13;
  undefined4 extraout_r12;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  ushort *local_d0;
  int local_bc;
  ushort *local_b8;
  undefined4 *local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  ushort local_88;
  ushort local_86;
  int local_84;
  ushort *local_80;
  int local_7c;
  ushort *local_78;
  ushort local_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort *local_48;
  int local_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10)) {
  case 0:
    local_b8 = (ushort *)(param_2 + 2);
    *(undefined4 *)local_b8 = *param_2;
    param_2[3] = param_2[1];
    local_b4 = &DAT_0157d360;
    FUN_00600d2c(&local_48,&DAT_00586879,&local_b8);
    local_b8 = local_48;
    local_b4 = (undefined4 *)local_44;
    uStack_b0 = local_40;
    param_2[4] = local_48;
    param_2[5] = local_44;
    param_2[6] = local_40;
    param_2[7] = uStack_ac;
    param_2[8] = uStack_a8;
    param_2[9] = local_a4;
    param_2[10] = uStack_a0;
    param_2[0xb] = uStack_9c;
    param_2[0xc] = uStack_98;
    param_2[0xd] = uStack_94;
    param_2[0xe] = uStack_90;
    *(undefined1 *)(param_2 + 0xf) = 0;
switchD_00a17cec_caseD_0:
    iVar10 = param_2[4];
    uVar8 = param_2[5];
    FUN_0165a2a8(&local_48,uVar8,param_2[6]);
    if (iVar10 != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    local_68 = (ushort)local_48;
    uStack_66 = (undefined2)((uint)local_48 >> 0x10);
    uStack_64 = (undefined2)local_44;
    uStack_62 = (undefined2)((uint)local_44 >> 0x10);
    uStack_60 = local_40;
    uStack_5c = uStack_3c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    param_2[7] = local_48;
    param_2[8] = local_44;
    param_2[9] = local_40;
    param_2[10] = uStack_3c;
    param_2[0xb] = local_38;
    param_2[0xc] = uStack_34;
    param_2[0xd] = uStack_30;
    param_2[0xe] = uStack_2c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f248);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f248);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      goto switchD_00a17cec_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187bca0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187bca0);
    }
  }
  FUN_0164e5d4(&local_88,param_2 + 7,param_3);
  if (local_88 == 5) {
    *(undefined1 *)(param_2 + 0xf) = 3;
    *param_1 = 1;
    *(undefined1 *)(param_2 + 0x10) = 3;
    return;
  }
  if (*(short *)(param_2 + 7) == 3) {
    piVar2 = (int *)param_2[8];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar17 = (bool)hasExclusiveAccess(piVar2);
      if (bVar17) {
        *piVar2 = 0x84;
        goto LAB_00a17dd8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00a17dd8:
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (local_88 == 4) {
    local_44 = 0;
    iVar10 = local_84;
    goto LAB_00a180c4;
  }
  if (local_88 == 3) {
    if (local_78 != local_80) {
      puVar13 = local_80 + 0x10;
      puVar6 = *(ushort **)(local_80 + 4);
      iVar10 = *(int *)(local_80 + 2);
      iVar15 = *(int *)(local_80 + 6);
      local_86 = local_80[1];
      uVar4 = *local_80;
      local_d0 = *(ushort **)(local_80 + 8);
      local_bc = 3;
      if (uVar4 != 2) goto LAB_00a17ea4;
      goto LAB_00a17e40;
    }
LAB_00a18048:
    if (local_7c != 0) {
      thunk_FUN_016d3fb4(local_84);
    }
LAB_00a1805c:
    local_44 = 1;
    puVar6 = (ushort *)0x0;
    local_48 = (ushort *)0x0;
  }
  else {
    local_bc = 2;
    local_d0 = local_78;
    puVar6 = local_80;
    puVar13 = local_80;
    iVar10 = local_84;
    iVar15 = local_7c;
    uVar4 = local_88;
    if (local_88 == 2) {
LAB_00a17e40:
      if (local_bc == 3) goto LAB_00a18048;
      goto LAB_00a1805c;
    }
LAB_00a17ea4:
    bVar17 = (uVar4 & 1) != 0;
    uStack_66 = (undefined2)iVar10;
    uStack_64 = (undefined2)((uint)iVar10 >> 0x10);
    if (!bVar17) {
      iVar10 = CONCAT22(uStack_66,local_86);
    }
    uVar5 = 0;
    if (local_88 == 3) {
      uVar5 = (int)local_78 - (int)puVar13;
    }
    uVar8 = 0;
    if (local_88 == 3) {
      uVar5 = uVar5 >> 5;
    }
    if (uVar5 < 4) {
      uVar5 = 3;
    }
    iVar7 = (int)(uVar5 + 1) * 0x11;
    local_68 = local_86;
    if (iVar7 < 0) {
LAB_00a17eec:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar7);
    }
    iVar3 = thunk_FUN_016d4a50(iVar7);
    if (iVar3 == 0) {
      uVar8 = 1;
      goto LAB_00a17eec;
    }
    iVar7 = 0;
    *(ushort **)(iVar3 + 0xd) = local_d0;
    *(int *)(iVar3 + 9) = iVar15;
    *(int *)(iVar3 + 1) = iVar10;
    *(bool *)iVar3 = bVar17;
    *(ushort **)(iVar3 + 5) = puVar6;
    local_40 = 1;
    uVar8 = extraout_r2;
    uVar14 = extraout_r12;
    uVar16 = 0xa17f0c;
    local_48 = (ushort *)(uVar5 + 1);
    local_44 = iVar3;
    while (puVar6 = (ushort *)(iVar7 + 1), local_bc == 3) {
      if ((local_78 == puVar13) || (*puVar13 == 2)) {
        if (local_7c != 0) {
          thunk_FUN_016d3fb4(local_84);
        }
        break;
      }
      uVar12 = *(undefined4 *)(puVar13 + 2);
      bVar17 = (*puVar13 & 1) != 0;
      local_68 = puVar13[1];
      uStack_66 = (undefined2)uVar12;
      uStack_64 = (undefined2)((uint)uVar12 >> 0x10);
      uVar1 = *(undefined4 *)(puVar13 + 8);
      uVar9 = *(undefined4 *)(puVar13 + 6);
      uVar11 = *(undefined4 *)(puVar13 + 4);
      if (!bVar17) {
        uVar1 = uVar8;
        uVar9 = uVar16;
        uVar11 = uVar14;
        uVar12 = *(undefined4 *)(puVar13 + 1);
      }
      uVar8 = uVar1;
      puVar13 = puVar13 + 0x10;
      if (puVar6 == local_48) {
        FUN_00a8a86c(&local_48,puVar6,((uint)((int)local_78 - (int)puVar13) >> 5) + 1,1,0x11);
        iVar3 = local_44;
      }
      iVar10 = iVar3 + iVar7 * 0x11;
      *(undefined4 *)(iVar10 + 0x12) = uVar12;
      *(bool *)(iVar10 + 0x11) = bVar17;
      *(undefined4 *)(iVar10 + 0x1e) = uVar8;
      *(undefined4 *)(iVar10 + 0x1a) = uVar9;
      *(undefined4 *)(iVar10 + 0x16) = uVar11;
      local_40 = iVar7 + 2;
      iVar7 = iVar7 + 1;
      uVar14 = uVar11;
      uVar16 = uVar9;
      local_bc = 3;
    }
  }
  local_84 = local_44 + (int)puVar6 * 0x11;
  iVar10 = local_44;
  local_80 = local_48;
LAB_00a180c4:
  *param_1 = 0;
  param_1[1] = local_44;
  param_1[2] = iVar10;
  param_1[3] = local_80;
  param_1[4] = local_84;
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}

