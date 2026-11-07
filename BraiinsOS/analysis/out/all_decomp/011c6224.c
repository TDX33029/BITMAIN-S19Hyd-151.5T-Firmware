// FUN_011c6224 @ 011c6224 size=2052 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_011c6224(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  int *local_114;
  int local_10c;
  int local_108;
  int *local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  int local_d4;
  int *local_d0;
  int local_cc;
  int *local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  int *local_a8;
  int *local_a4;
  int local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  piVar3 = (int *)0x0;
  if (param_4 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248(param_4 + 0xc,param_4);
    }
    piVar3 = *(int **)(param_4 + 0xc);
    do {
      iVar7 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_011c6a3c;
    uVar14 = *(undefined4 *)(param_4 + 0xc);
    uVar15 = *(undefined4 *)(param_4 + 0x10);
    uVar13 = *(uint *)(param_1 + 0x28);
    uVar8 = 0;
    uVar12 = (*(int **)(param_4 + 4))[1];
    iVar7 = *(int *)(param_1 + 0x24) + 8;
    if (uVar12 <= uVar13) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar7,uVar12);
      uVar8 = uVar12;
      if (iVar4 != 0) {
        uVar8 = 0;
      }
    }
    local_e0 = FUN_011e1508(iVar7 + uVar8,uVar13 - uVar8);
    local_ec = 3;
    piVar3 = (int *)0x2;
    local_e8 = uVar14;
    local_e4 = uVar15;
  }
  local_cc = 0;
  local_d4 = 0;
  uVar14 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(uint *)(param_1 + 8);
  iVar7 = *(int *)(param_2 + 4);
  local_d0 = (int *)&DAT_00000004;
  local_f8 = piVar3;
  if (iVar7 != 0) {
    local_108 = *(int *)(param_2 + 8);
    iVar4 = iVar7;
    do {
      uVar12 = (uint)*(ushort *)(iVar4 + 0x192);
      iVar16 = iVar4 + 0x10c;
      uVar13 = 0xffffffff;
      iVar10 = uVar12 * 0xc;
      do {
        if (iVar10 == 0) goto LAB_011c63c4;
        uVar11 = *(uint *)(iVar16 + 8);
        uVar9 = uVar11;
        if (uVar8 < uVar11) {
          uVar9 = uVar8;
        }
        iVar5 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar16 + 4),uVar9);
        if (iVar5 == 0) {
          iVar5 = uVar8 - uVar11;
        }
        iVar10 = iVar10 + -0xc;
        uVar13 = uVar13 + 1;
        iVar16 = iVar16 + 0xc;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      uVar12 = uVar13;
      if (0 < iVar5 == iVar5 < 0) {
        local_10c = 0;
        local_114 = (int *)&DAT_00000004;
        goto LAB_011c6518;
      }
LAB_011c63c4:
      if (local_108 == 0) break;
      local_108 = local_108 + -1;
      iVar4 = *(int *)(iVar4 + uVar12 * 4 + 0x198);
    } while( true );
  }
  piVar3 = *(int **)(param_1 + 0x24);
  do {
    iVar7 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar7 + 1;
  if (-1 < iVar7) {
    uVar15 = *(undefined4 *)(param_1 + 0x28);
    FUN_012406e0(&local_c8,&local_f8);
    uVar17 = FUN_01238114(param_3);
    if (uVar8 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(uVar8);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar8);
      }
    }
    FUN_016dd1aa(iVar7,uVar14,uVar8);
    local_50 = 6;
    local_80 = 3;
    local_88 = 0x80000027;
    local_a8 = local_c8;
    local_a4 = (int *)uStack_c4;
    local_a0 = uStack_c0;
    local_9c = (int *)uStack_bc;
    local_98 = local_b8;
    uStack_94 = uStack_b4;
    uStack_90._0_4_ = (undefined4)uStack_b0;
    uStack_90._4_4_ = uStack_b0._4_4_;
    local_7c = uVar8;
    local_78 = iVar7;
    local_74 = uVar8;
    local_4c = param_2;
    local_30 = piVar3;
    local_2c = uVar15;
    local_38 = uVar17;
    iVar7 = thunk_FUN_016d4a50(0x80);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar7,&local_a8,0x80);
    FUN_011c4424(&local_d4);
    local_114 = local_d0;
    local_cc = 1;
    *local_d0 = iVar7;
    iVar7 = *(int *)(param_2 + 4);
    local_10c = 1;
LAB_011c6518:
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = *(uint *)(param_1 + 0x14);
    if (iVar7 != 0) {
      local_108 = *(int *)(param_2 + 8);
      iVar4 = iVar7;
      do {
        uVar12 = (uint)*(ushort *)(iVar4 + 0x192);
        iVar16 = iVar4 + 0x10c;
        uVar13 = 0xffffffff;
        iVar10 = uVar12 * 0xc;
        do {
          if (iVar10 == 0) goto LAB_011c65c4;
          uVar11 = *(uint *)(iVar16 + 8);
          uVar9 = uVar11;
          if (uVar8 < uVar11) {
            uVar9 = uVar8;
          }
          iVar5 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar16 + 4),uVar9);
          if (iVar5 == 0) {
            iVar5 = uVar8 - uVar11;
          }
          iVar10 = iVar10 + -0xc;
          uVar13 = uVar13 + 1;
          iVar16 = iVar16 + 0xc;
        } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
        uVar12 = uVar13;
        if (0 < iVar5 == iVar5 < 0) {
          uVar14 = *(undefined4 *)(param_1 + 0x1c);
          uVar8 = *(uint *)(param_1 + 0x20);
          goto joined_r0x011c65f8;
        }
LAB_011c65c4:
        if (local_108 == 0) break;
        local_108 = local_108 + -1;
        iVar4 = *(int *)(iVar4 + uVar12 * 4 + 0x198);
      } while( true );
    }
    piVar3 = *(int **)(param_1 + 0x24);
    do {
      iVar7 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar7 + 1;
    if (-1 < iVar7) {
      uVar15 = *(undefined4 *)(param_1 + 0x28);
      FUN_012406e0(&local_c8,&local_f8);
      uVar17 = FUN_01238114(param_3);
      if (uVar8 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(uVar8);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar8);
        }
      }
      FUN_016dd1aa(iVar7,uVar14,uVar8);
      local_50 = 6;
      local_80 = 3;
      local_88 = 0x80000027;
      local_a8 = local_c8;
      local_a4 = (int *)uStack_c4;
      local_a0 = uStack_c0;
      local_9c = (int *)uStack_bc;
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90._0_4_ = (undefined4)uStack_b0;
      uStack_90._4_4_ = uStack_b0._4_4_;
      local_7c = uVar8;
      local_78 = iVar7;
      local_74 = uVar8;
      local_4c = param_2;
      local_30 = piVar3;
      local_2c = uVar15;
      local_38 = uVar17;
      iVar7 = thunk_FUN_016d4a50(0x80);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar7,&local_a8,0x80);
      if (local_10c == local_d4) {
        FUN_011c4424(&local_d4);
        local_114 = local_d0;
      }
      local_114[local_10c] = iVar7;
      local_10c = local_10c + 1;
      iVar7 = *(int *)(param_2 + 4);
      uVar14 = *(undefined4 *)(param_1 + 0x1c);
      uVar8 = *(uint *)(param_1 + 0x20);
      local_cc = local_10c;
joined_r0x011c65f8:
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_2 + 8);
        do {
          iVar16 = iVar7 + 0x10c;
          uVar12 = (uint)*(ushort *)(iVar7 + 0x192);
          uVar13 = 0xffffffff;
          iVar10 = uVar12 * 0xc;
          do {
            if (iVar10 == 0) goto LAB_011c67c8;
            uVar11 = *(uint *)(iVar16 + 8);
            uVar9 = uVar11;
            if (uVar8 < uVar11) {
              uVar9 = uVar8;
            }
            iVar5 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar16 + 4),uVar9);
            if (iVar5 == 0) {
              iVar5 = uVar8 - uVar11;
            }
            iVar10 = iVar10 + -0xc;
            uVar13 = uVar13 + 1;
            iVar16 = iVar16 + 0xc;
          } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
          uVar12 = uVar13;
          if (0 < iVar5 == iVar5 < 0) {
            bVar2 = true;
            if (local_10c == 0) {
              if (local_d4 != 0) {
                thunk_FUN_016d3fb4(local_d0);
              }
              FUN_0115842c(&local_f8);
              return 0x188a36400000001;
            }
            goto LAB_011c694c;
          }
LAB_011c67c8:
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          iVar7 = *(int *)(iVar7 + uVar12 * 4 + 0x198);
        } while( true );
      }
      piVar3 = *(int **)(param_1 + 0x24);
      do {
        iVar7 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar7 + 1;
      if (-1 < iVar7) {
        uVar15 = *(undefined4 *)(param_1 + 0x28);
        local_c8 = local_f8;
        uStack_c4 = uStack_f4;
        uStack_c0 = uStack_f0;
        uStack_bc = local_ec;
        local_b8 = local_e8;
        uStack_b4 = local_e4;
        uStack_b0 = local_e0;
        uVar17 = FUN_01238114(param_3);
        if (uVar8 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = thunk_FUN_016d4a50(uVar8);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar8);
          }
        }
        FUN_016dd1aa(iVar7,uVar14,uVar8);
        local_50 = 6;
        local_80 = 3;
        local_88 = 0x80000027;
        local_a8 = local_f8;
        local_a4 = (int *)uStack_f4;
        local_a0 = uStack_f0;
        local_9c = (int *)local_ec;
        local_98 = local_e8;
        uStack_94 = local_e4;
        local_7c = uVar8;
        local_78 = iVar7;
        local_74 = uVar8;
        local_4c = param_2;
        local_30 = piVar3;
        local_2c = uVar15;
        local_38 = uVar17;
        uStack_90 = local_e0;
        iVar7 = thunk_FUN_016d4a50(0x80);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar7,&local_a8,0x80);
        if (local_10c == local_d4) {
          FUN_011c4424(&local_d4);
        }
        bVar2 = false;
        local_d0[local_10c] = iVar7;
        local_10c = local_10c + 1;
LAB_011c694c:
        local_a0 = local_d4;
        local_9c = local_d0 + local_10c;
        local_a8 = local_d0;
        local_a4 = local_d0;
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar6 = local_a8;
        puVar6[1] = local_a4;
        puVar6[2] = local_a0;
        puVar6[3] = local_9c;
        if (bVar2) {
          FUN_0115842c(&local_f8);
        }
        return CONCAT44(&UNK_01889fe8,puVar6);
      }
    }
  }
LAB_011c6a3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11c6a3c);
  (*pcVar1)();
}

