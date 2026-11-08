// FUN_010f6fd8 @ 010f6fd8 size=1440 calls_out=17 calls_in=1
// strings: RUST_MIN_STACK | failed to spawn thread

/* WARNING: Removing unreachable block (ram,0x010f7224) */

void FUN_010f6fd8(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  byte bVar15;
  int iVar16;
  uint local_d0;
  int *local_b8;
  byte *local_b4;
  undefined *local_b0;
  uint local_ac;
  int *local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68 [3];
  int *local_5c;
  int *local_58;
  byte *pbStack_54;
  uint uStack_50;
  uint uStack_4c;
  int *local_48;
  byte *local_44;
  uint local_40;
  uint uStack_3c;
  int *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  
  iVar4 = (**(code **)(param_3 + 0x18))(param_2);
  if (iVar4 == 0) {
    iVar4 = FUN_010f6cf8();
    *param_1 = 0;
    param_1[1] = iVar4;
    FUN_009fdc6c(param_2,param_3);
    return;
  }
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_8c = 0;
  local_90 = 0;
  local_98 = 0;
  local_9c = (int *)0x0;
  local_a0 = 0;
  local_a8 = (int *)0x0;
  local_ac = local_ac & 0xffffff00;
  local_b0 = (undefined *)0x0;
  local_70 = 1;
  local_74 = 1;
  local_80 = 4;
  local_84 = 0x80000000;
  local_94 = 4;
  local_a4 = 4;
  local_b4 = &DAT_00000001;
  local_b8 = (int *)0x1;
  piVar5 = (int *)thunk_FUN_016d4a50(0x50);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(piVar5,&local_b8,0x50);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_010f7584;
  local_68[0] = 0x80000000;
  if (DAT_018dd980 == 0) {
    FUN_015e9334(&local_48,"RUST_MIN_STACK",0xe);
    pbVar3 = local_44;
    piVar9 = local_48;
    local_d0 = 0x200000;
    if (local_48 != (int *)0x80000000) {
      FUN_00fab1e0(&local_b8,local_44,local_40);
      if ((local_b8 == (int *)0x1) || (local_b0 == (undefined *)0x0)) {
LAB_010f71e0:
        local_d0 = 0x200000;
      }
      else {
        if (local_b0 == (undefined *)0x1) {
          bVar15 = *local_b4;
          if ((bVar15 == 0x2b) || (bVar15 == 0x2d)) goto LAB_010f71e0;
        }
        else {
          bVar15 = *local_b4;
        }
        puVar7 = local_b0;
        pbVar12 = local_b4;
        if (bVar15 == 0x2b) {
          pbVar12 = local_b4 + 1;
          puVar7 = (undefined *)((int)local_b0 - 1);
        }
        if (8 < puVar7) {
          local_d0 = 0;
          while( true ) {
            if (puVar7 == (undefined *)0x0) goto joined_r0x010f71e8;
            uVar8 = (uint)((ulonglong)local_d0 * 10);
            if ((int)((ulonglong)local_d0 * 10 >> 0x20) != 0) break;
            uVar13 = *pbVar12 - 0x30;
            local_d0 = uVar13 + uVar8;
            if ((9 < uVar13) ||
               (puVar7 = (undefined *)((int)puVar7 - 1), pbVar12 = pbVar12 + 1, CARRY4(uVar13,uVar8)
               )) break;
          }
          goto LAB_010f71e0;
        }
        local_d0 = 0;
        for (; puVar7 != (undefined *)0x0; puVar7 = (undefined *)((int)puVar7 - 1)) {
          bVar15 = *pbVar12;
          if (9 < bVar15 - 0x30) {
            local_d0 = 0x200000;
            break;
          }
          pbVar12 = pbVar12 + 1;
          local_d0 = (bVar15 - 0x30) + local_d0 * 10;
        }
      }
joined_r0x010f71e8:
      if (piVar9 != (int *)0x0) {
        thunk_FUN_016d3fb4(pbVar3);
      }
    }
    DAT_018dd980 = local_d0 + 1;
  }
  else {
    local_d0 = DAT_018dd980 - 1;
  }
  ClearExclusiveLocal();
  do {
    uVar8 = DAT_018dd9a8 + 1;
    uVar13 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
    if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
      FUN_015ee8c8();
      goto LAB_010f7584;
    }
    bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
  } while (!bVar2);
  DAT_018dd9a8 = uVar8;
  DAT_018dd9ac = uVar13;
  piVar9 = (int *)FUN_015f8074(uVar8,uVar13,local_68);
  local_5c = piVar9;
  FUN_015fc56c(&local_58,&local_5c);
  local_ac = 0;
  local_b0 = (undefined *)0x0;
  local_b4 = &DAT_00000001;
  local_b8 = (int *)0x1;
  piVar10 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *piVar10 = (int)local_b8;
  piVar10[1] = (int)local_b4;
  piVar10[2] = (int)local_b0;
  piVar10[3] = local_ac;
  piVar10[4] = (int)local_a8;
  piVar10[5] = local_a4;
  do {
    iVar6 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar6 + 1;
  if (-1 < iVar6) {
    iVar6 = piVar10[2];
    local_48 = local_58;
    local_44 = pbStack_54;
    local_40 = uStack_50;
    uStack_3c = uStack_4c;
    local_38 = piVar10;
    local_34 = param_2;
    local_30 = param_3;
    local_2c = piVar5;
    if (iVar6 != 0) {
      piVar14 = (int *)(iVar6 + 0xc);
      do {
        iVar16 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar16 + 1;
      if (iVar16 < 0) {
        FUN_015f85e4(iVar6 + 8);
        goto LAB_010f7584;
      }
    }
    local_b8 = local_58;
    local_b4 = pbStack_54;
    local_b0 = (undefined *)uStack_50;
    local_ac = uStack_4c;
    local_a8 = piVar10;
    local_a4 = param_2;
    local_a0 = param_3;
    local_9c = piVar5;
    piVar14 = (int *)thunk_FUN_016d4a50(0x20);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *piVar14 = (int)local_48;
    piVar14[1] = (int)local_44;
    piVar14[2] = local_40;
    piVar14[3] = uStack_3c;
    piVar14[4] = (int)local_38;
    piVar14[5] = local_34;
    piVar14[6] = local_30;
    piVar14[7] = (int)local_2c;
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (-1 < iVar6) {
      local_b0 = &DAT_01886984;
      local_b8 = piVar9;
      local_b4 = (byte *)piVar14;
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar11 = local_b8;
      puVar11[1] = local_b4;
      puVar11[2] = local_b0;
      FUN_015f6af4(&local_b8,local_d0);
      pbVar3 = local_b4;
      piVar14 = local_b8;
      if ((char)local_b8 != '\x04') {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010fefbc(piVar10);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(piVar9);
        }
        local_b8 = piVar14;
        local_b4 = pbVar3;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("failed to spawn thread",0x16,&local_b8,&DAT_018868e4,&DAT_01886874);
      }
      FUN_016dea68(local_b4);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(piVar9);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010fefbc(piVar10);
      }
      *param_1 = (int)piVar5;
      param_1[1] = iVar4;
      return;
    }
  }
LAB_010f7584:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10f7584);
  (*pcVar1)();
}

