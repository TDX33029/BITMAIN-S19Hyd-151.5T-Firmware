// FUN_011893b8 @ 011893b8 size=1868 calls_out=14 calls_in=0
// strings: 

undefined8 FUN_011893b8(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  int local_ec;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  local_a0 = *(uint *)(param_2 + 4);
  local_9c = *(uint *)(param_2 + 8);
  iVar17 = 0;
  local_e0 = 4;
  local_88 = *(undefined1 **)(param_2 + 0xc);
  local_d4 = 4;
  if (local_a0 == 0) {
    local_88 = (undefined1 *)0x0;
  }
  iVar12 = *(int *)(param_1 + 4);
  local_ec = 4;
  iVar8 = *(int *)(param_1 + 8);
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  local_a8 = (uint)(local_a0 != 0);
  local_dc = 0;
  local_e4 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_94 = 0;
  local_a4 = 0;
  local_98 = local_a8;
  local_90._0_4_ = local_a0;
  local_90._4_4_ = local_9c;
  if (iVar8 == 0) {
    iVar4 = 4;
    while( true ) {
      iVar21 = local_d0;
      iVar8 = FUN_00f45584(&local_a8);
      if (iVar8 == 0) break;
      uVar13 = *(undefined4 *)(iVar8 + 4);
      iVar8 = *(int *)(iVar8 + 8);
      if (iVar8 == 0) {
        iVar12 = 1;
      }
      else {
        iVar12 = thunk_FUN_016d4a50(iVar8);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar8);
        }
      }
      FUN_016dd1aa(iVar12,uVar13,iVar8);
      if (iVar21 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar4 = local_d4;
      }
      local_d0 = iVar21 + 1;
      piVar9 = (int *)(iVar4 + iVar17);
      *piVar9 = iVar8;
      iVar17 = iVar17 + 0xc;
      piVar9[1] = iVar12;
      piVar9[2] = iVar8;
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
    iVar21 = 0;
LAB_011894a0:
    uVar24 = FUN_00f45584(&local_a8);
    iVar17 = (int)uVar24;
    if (iVar17 != 0) {
      uVar11 = *(undefined4 *)(iVar17 + 4);
      iVar14 = *(int *)(iVar17 + 8);
      iVar15 = iVar8 << 5;
      iVar18 = iVar12;
      do {
        if (*(int *)(iVar18 + 8) == iVar14) {
          uVar23 = *(undefined4 *)(iVar18 + 4);
          iVar5 = thunk_FUN_016dd50a(uVar23,uVar11,iVar14);
          if (iVar5 == 0) {
            local_c8 = 0x80000000;
            local_c4 = uVar23;
            local_c0 = iVar14;
            local_bc = param_3;
            uVar24 = FUN_011cf8a8(iVar18 + 0xc,(int)((ulonglong)uVar24 >> 0x20),&local_c8,param_4,
                                  param_5);
            FUN_011590bc(&local_e4,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
            if (*(int *)(iVar17 + 8) == iVar4) {
              iVar17 = thunk_FUN_016dd50a(*(undefined4 *)(iVar17 + 4),uVar13,iVar4);
              bVar3 = (bool)(iVar17 == 0 | bVar3);
            }
            goto LAB_011894a0;
          }
        }
        iVar18 = iVar18 + 0x20;
        iVar15 = iVar15 + -0x20;
      } while (iVar15 != 0);
      if (iVar14 == 0) {
        iVar17 = 1;
      }
      else {
        iVar17 = thunk_FUN_016d4a50(iVar14);
        if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar14);
        }
      }
      FUN_016dd1aa(iVar17,uVar11,iVar14);
      if (iVar21 == local_d8) {
        FUN_015f37b0(&local_d8);
        local_ec = local_d4;
      }
      local_d0 = iVar21 + 1;
      piVar9 = (int *)(local_ec + iVar21 * 0xc);
      *piVar9 = iVar14;
      piVar9[1] = iVar17;
      piVar9[2] = iVar14;
      iVar21 = local_d0;
      goto LAB_011894a0;
    }
  }
  uVar24 = local_b0;
  if (iVar21 != 0) {
    piVar9 = *(int **)(param_1 + 0x18);
    do {
      iVar17 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar17 + 1;
    if (iVar17 < 0) goto LAB_01189b14;
    uVar13 = *(undefined4 *)(param_1 + 0x1c);
    if (param_4 == 0) {
      local_c8 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      uVar24 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
      piVar6 = *(int **)(param_4 + 0xc);
      do {
        iVar17 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar17 + 1;
      if (iVar17 < 0) goto LAB_01189b14;
      uVar22 = *(uint *)(param_4 + 0xc);
      uVar11 = *(undefined4 *)(param_4 + 0x10);
      uVar16 = (*(int **)(param_4 + 4))[1];
      uVar19 = *(uint *)(param_1 + 0x1c);
      uVar10 = 0;
      if (uVar16 <= uVar19) {
        iVar17 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar16);
        uVar10 = uVar16;
        if (iVar17 != 0) {
          uVar10 = 0;
        }
      }
      local_b0 = FUN_011e1508((int)(piVar9 + 2) + uVar10,uVar19 - uVar10);
      local_bc = 3;
      local_c8 = 2;
      local_b8 = uVar22;
      local_b4 = uVar11;
    }
    local_38 = FUN_01238114(param_3);
    local_88 = &DAT_8000000b;
    local_84 = local_d8;
    local_80 = local_d4;
    local_7c = local_d0;
    local_50 = 6;
    local_a8 = local_c8;
    local_a4 = local_c4;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    local_94 = local_b4;
    local_4c = param_2;
    local_30 = piVar9;
    local_2c = uVar13;
    local_90 = local_b0;
    iVar17 = thunk_FUN_016d4a50(0x80);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar17,&local_a8,0x80);
    uVar10 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    *(int *)(local_e0 + uVar10 * 4) = iVar17;
    local_dc = uVar10 + 1;
    uVar24 = local_b0;
  }
  local_b0 = uVar24;
  if (!bVar3) {
    piVar9 = *(int **)(param_1 + 0x20);
    do {
      iVar17 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar17 + 1;
    if (iVar17 < 0) {
LAB_01189b14:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1189b14);
      local_b0 = uVar24;
      (*pcVar1)();
    }
    uVar13 = *(undefined4 *)(param_1 + 0x24);
    if (param_4 == 0) {
      local_c8 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        uVar24 = local_b0;
      }
      piVar6 = *(int **)(param_4 + 0xc);
      do {
        iVar17 = *piVar6;
        bVar3 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar3);
      *piVar6 = iVar17 + 1;
      if (iVar17 < 0) goto LAB_01189b14;
      uVar22 = *(uint *)(param_4 + 0xc);
      uVar11 = *(undefined4 *)(param_4 + 0x10);
      uVar16 = (*(int **)(param_4 + 4))[1];
      uVar19 = *(uint *)(param_1 + 0x24);
      uVar10 = 0;
      local_b0 = uVar24;
      if (uVar16 <= uVar19) {
        iVar17 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar16);
        uVar10 = uVar16;
        if (iVar17 != 0) {
          uVar10 = 0;
        }
      }
      uVar24 = FUN_011e1508((int)(piVar9 + 2) + uVar10,uVar19 - uVar10);
      local_bc = 3;
      local_c8 = 2;
      local_b8 = uVar22;
      local_b4 = uVar11;
    }
    local_b0 = uVar24;
    uVar24 = FUN_01238114(param_3);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    local_74 = *(int *)(param_1 + 0x14);
    if (local_74 == 0) {
      iVar17 = 1;
    }
    else {
      iVar17 = thunk_FUN_016d4a50(local_74);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_74);
      }
    }
    FUN_016dd1aa(iVar17,uVar11,local_74);
    local_50 = 6;
    local_80 = CONCAT31(local_80._1_3_,3);
    local_88 = (undefined1 *)0x80000027;
    local_a8 = local_c8;
    local_a4 = local_c4;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    local_94 = local_b4;
    local_7c = local_74;
    local_78 = iVar17;
    local_4c = param_2;
    local_30 = piVar9;
    local_2c = uVar13;
    local_38 = uVar24;
    local_90 = local_b0;
    iVar17 = thunk_FUN_016d4a50(0x80);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar17,&local_a8,0x80);
    uVar10 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar10 + 1;
    *(int *)(local_e0 + uVar10 * 4) = iVar17;
  }
  local_9c = local_e0 + local_dc * 4;
  local_a0 = local_e4;
  local_a8 = local_e0;
  local_a4 = local_e0;
  puVar7 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar17 = local_d4;
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar7 = local_a8;
  puVar7[1] = local_a4;
  puVar7[2] = local_a0;
  puVar7[3] = local_9c;
  if (iVar21 == 0) {
    puVar20 = (undefined4 *)(local_d4 + 4);
    for (iVar4 = local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar20[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar20);
      }
      puVar20 = puVar20 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar17);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar7);
}

