// FUN_01182478 @ 01182478 size=1252 calls_out=14 calls_in=0
// strings: 

undefined8 FUN_01182478(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 uVar21;
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
  int iStack_80;
  int iStack_7c;
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
  local_88 = *(undefined1 **)(param_2 + 0xc);
  iVar18 = 4;
  iVar6 = *(int *)(param_1 + 8);
  if (local_a0 == 0) {
    local_88 = (undefined1 *)0x0;
  }
  iVar14 = *(int *)(param_1 + 4);
  local_a8 = (uint)(local_a0 != 0);
  local_dc = 0;
  local_e0 = 4;
  local_e4 = 0;
  local_d0 = 0;
  local_d4 = 4;
  local_d8 = 0;
  local_94 = 0;
  local_a4 = 0;
  local_98 = local_a8;
  local_90._0_4_ = local_a0;
  local_90._4_4_ = local_9c;
  if (iVar6 == 0) {
    iVar18 = 4;
    iVar6 = 0;
    while( true ) {
      iVar20 = local_d0;
      iVar14 = FUN_00f45584(&local_a8);
      if (iVar14 == 0) break;
      iVar12 = *(int *)(iVar14 + 8);
      uVar9 = *(undefined4 *)(iVar14 + 4);
      if (iVar12 == 0) {
        iVar14 = 1;
      }
      else {
        iVar14 = thunk_FUN_016d4a50(iVar12);
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar12);
        }
      }
      FUN_016dd1aa(iVar14,uVar9,iVar12);
      if (iVar20 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar18 = local_d4;
      }
      local_d0 = iVar20 + 1;
      piVar7 = (int *)(iVar18 + iVar6);
      *piVar7 = iVar12;
      iVar6 = iVar6 + 0xc;
      piVar7[1] = iVar14;
      piVar7[2] = iVar12;
    }
  }
  else {
    iVar20 = 0;
LAB_01182538:
    uVar21 = FUN_00f45584(&local_a8);
    iVar12 = (int)uVar21;
    if (iVar12 != 0) {
      uVar9 = *(undefined4 *)(iVar12 + 4);
      iVar10 = *(int *)(iVar12 + 8);
      iVar12 = iVar6 << 5;
      iVar15 = iVar14;
      do {
        if (*(int *)(iVar15 + 8) == iVar10) {
          uVar19 = *(undefined4 *)(iVar15 + 4);
          iVar3 = thunk_FUN_016dd50a(uVar19,uVar9,iVar10);
          if (iVar3 == 0) {
            local_c8 = 0x80000000;
            local_c4 = uVar19;
            local_c0 = iVar10;
            local_bc = param_3;
            uVar21 = FUN_011cf8a8(iVar15 + 0xc,(int)((ulonglong)uVar21 >> 0x20),&local_c8,param_4,
                                  param_5);
            FUN_011590bc(&local_e4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
            goto LAB_01182538;
          }
        }
        iVar15 = iVar15 + 0x20;
        iVar12 = iVar12 + -0x20;
      } while (iVar12 != 0);
      if (iVar10 == 0) {
        iVar12 = 1;
      }
      else {
        iVar12 = thunk_FUN_016d4a50(iVar10);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar10);
        }
      }
      FUN_016dd1aa(iVar12,uVar9,iVar10);
      if (iVar20 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar18 = local_d4;
      }
      local_d0 = iVar20 + 1;
      piVar7 = (int *)(iVar18 + iVar20 * 0xc);
      *piVar7 = iVar10;
      piVar7[1] = iVar12;
      piVar7[2] = iVar10;
      iVar20 = local_d0;
      goto LAB_01182538;
    }
  }
  if (iVar20 != 0) {
    piVar7 = *(int **)(param_1 + 0xc);
    do {
      iVar18 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar18 + 1;
    if (iVar18 < 0) {
LAB_01182964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1182964);
      (*pcVar1)();
    }
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_c8 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar4 = *(int **)(param_4 + 0xc);
      do {
        iVar18 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar18 + 1;
      if (iVar18 < 0) goto LAB_01182964;
      uVar17 = *(uint *)(param_4 + 0xc);
      uVar19 = *(undefined4 *)(param_4 + 0x10);
      uVar13 = (*(int **)(param_4 + 4))[1];
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar8 = 0;
      if (uVar13 <= uVar11) {
        iVar18 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar13);
        uVar8 = uVar13;
        if (iVar18 != 0) {
          uVar8 = 0;
        }
      }
      local_b0 = FUN_011e1508((int)(piVar7 + 2) + uVar8,uVar11 - uVar8);
      local_bc = 3;
      local_c8 = 2;
      local_b8 = uVar17;
      local_b4 = uVar19;
    }
    local_38 = FUN_01238114(param_3);
    local_88 = &DAT_8000000b;
    local_84 = local_d8;
    iStack_80 = local_d4;
    iStack_7c = local_d0;
    local_50 = 6;
    local_a8 = local_c8;
    local_a4 = local_c4;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    local_94 = local_b4;
    local_4c = param_2;
    local_30 = piVar7;
    local_2c = uVar9;
    local_90 = local_b0;
    iVar18 = thunk_FUN_016d4a50(0x80);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar18,&local_a8,0x80);
    uVar8 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar8 + 1;
    *(int *)(local_e0 + uVar8 * 4) = iVar18;
  }
  local_9c = local_e0 + local_dc * 4;
  local_a0 = local_e4;
  local_a8 = local_e0;
  local_a4 = local_e0;
  puVar5 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar18 = local_d4;
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar5 = local_a8;
  puVar5[1] = local_a4;
  puVar5[2] = local_a0;
  puVar5[3] = local_9c;
  if (iVar20 == 0) {
    puVar16 = (undefined4 *)(local_d4 + 4);
    for (iVar6 = local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar16[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar16);
      }
      puVar16 = puVar16 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar5);
}

