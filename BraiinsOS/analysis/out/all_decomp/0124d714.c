// FUN_0124d714 @ 0124d714 size=1952 calls_out=15 calls_in=0
// strings: 

undefined8 FUN_0124d714(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int local_104;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
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
  
  piVar9 = (int *)&DAT_00000001;
  puVar10 = &DAT_0188a364;
  if (*param_2 != '\x05') {
LAB_0124de0c:
    return CONCAT44(puVar10,piVar9);
  }
  iVar4 = 0;
  local_ec = 0;
  local_f0 = 4;
  local_f4 = 0;
  if (param_4 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar9 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0124dec0;
    uVar15 = *(undefined4 *)(param_4 + 0xc);
    uVar17 = *(undefined4 *)(param_4 + 0x10);
    uVar11 = *(uint *)(param_1 + 0x28);
    uVar8 = 0;
    uVar14 = (*(int **)(param_4 + 4))[1];
    iVar4 = *(int *)(param_1 + 0x24) + 8;
    if (uVar14 <= uVar11) {
      iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar4,uVar14);
      uVar8 = uVar14;
      if (iVar5 != 0) {
        uVar8 = 0;
      }
    }
    local_d0 = FUN_011e1508(iVar4 + uVar8,uVar11 - uVar8);
    local_dc = 3;
    iVar4 = 2;
    local_d8 = uVar15;
    local_d4 = uVar17;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_2 + 4);
  local_e8 = iVar4;
  if (iVar5 != 0) {
    local_104 = *(int *)(param_2 + 8);
    iVar4 = iVar5;
    do {
      uVar11 = (uint)*(ushort *)(iVar4 + 0x192);
      iVar18 = iVar4 + 0x10c;
      uVar14 = 0xffffffff;
      iVar16 = uVar11 * 0xc;
      do {
        if (iVar16 == 0) goto LAB_0124d8c8;
        uVar12 = *(uint *)(iVar18 + 8);
        uVar13 = uVar12;
        if (uVar8 < uVar12) {
          uVar13 = uVar8;
        }
        iVar6 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar18 + 4),uVar13);
        if (iVar6 == 0) {
          iVar6 = uVar8 - uVar12;
        }
        iVar16 = iVar16 + -0xc;
        uVar14 = uVar14 + 1;
        iVar18 = iVar18 + 0xc;
      } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
      uVar11 = uVar14;
      if (0 < iVar6 == iVar6 < 0) {
        uVar15 = *(undefined4 *)(param_1 + 0x1c);
        uVar8 = *(uint *)(param_1 + 0x20);
        goto joined_r0x0124d8fc;
      }
LAB_0124d8c8:
      if (local_104 == 0) break;
      local_104 = local_104 + -1;
      iVar4 = *(int *)(iVar4 + uVar11 * 4 + 0x198);
    } while( true );
  }
  piVar9 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar9;
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = iVar4 + 1;
  if (-1 < iVar4) {
    uVar17 = *(undefined4 *)(param_1 + 0x28);
    FUN_012406e0(&local_c8,&local_e8);
    uVar20 = FUN_01238114(param_3);
    if (uVar8 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(uVar8);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar8);
      }
    }
    FUN_016dd1aa(iVar4,uVar15,uVar8);
    local_50 = 6;
    local_80 = 3;
    local_88 = 0x80000027;
    local_a8 = local_c8;
    local_a4 = uStack_c4;
    local_a0 = uStack_c0;
    local_9c = uStack_bc;
    local_98 = local_b8;
    uStack_94 = uStack_b4;
    uStack_90._0_4_ = (undefined4)uStack_b0;
    uStack_90._4_4_ = uStack_b0._4_4_;
    local_7c = uVar8;
    local_78 = iVar4;
    local_74 = uVar8;
    local_4c = param_2;
    local_30 = piVar9;
    local_2c = uVar17;
    local_38 = uVar20;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,&local_a8,0x80);
    iVar16 = local_ec;
    if (local_ec == local_f4) {
      FUN_011c4424(&local_f4);
    }
    *(int *)(local_f0 + iVar16 * 4) = iVar4;
    iVar5 = *(int *)(param_2 + 4);
    local_ec = iVar16 + 1;
    uVar15 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = *(uint *)(param_1 + 0x20);
joined_r0x0124d8fc:
    if (iVar5 != 0) {
      local_104 = *(int *)(param_2 + 8);
      do {
        iVar16 = iVar5 + 0x10c;
        uVar11 = (uint)*(ushort *)(iVar5 + 0x192);
        uVar14 = 0xffffffff;
        iVar4 = uVar11 * 0xc;
        do {
          if (iVar4 == 0) goto LAB_0124dacc;
          uVar12 = *(uint *)(iVar16 + 8);
          uVar13 = uVar12;
          if (uVar8 < uVar12) {
            uVar13 = uVar8;
          }
          iVar18 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar16 + 4),uVar13);
          if (iVar18 == 0) {
            iVar18 = uVar8 - uVar12;
          }
          iVar4 = iVar4 + -0xc;
          uVar14 = uVar14 + 1;
          iVar16 = iVar16 + 0xc;
        } while ((char)((0 < iVar18) - (iVar18 < 0)) == '\x01');
        uVar11 = uVar14;
        if (0 < iVar18 == iVar18 < 0) {
          bVar3 = false;
          iVar4 = *(int *)(param_1 + 8);
          goto joined_r0x0124db00;
        }
LAB_0124dacc:
        if (local_104 == 0) break;
        local_104 = local_104 + -1;
        iVar5 = *(int *)(iVar5 + uVar11 * 4 + 0x198);
      } while( true );
    }
    piVar9 = *(int **)(param_1 + 0x24);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + 1;
    if (-1 < iVar4) {
      uVar17 = *(undefined4 *)(param_1 + 0x28);
      local_c8 = local_e8;
      uStack_c4 = uStack_e4;
      uStack_c0 = uStack_e0;
      uStack_bc = local_dc;
      local_b8 = local_d8;
      uStack_b4 = local_d4;
      uStack_b0 = local_d0;
      uVar20 = FUN_01238114(param_3);
      if (uVar8 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(uVar8);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar8);
        }
      }
      FUN_016dd1aa(iVar4,uVar15,uVar8);
      local_50 = 6;
      local_80 = 3;
      local_88 = 0x80000027;
      local_a8 = local_e8;
      local_a4 = uStack_e4;
      local_a0 = uStack_e0;
      local_9c = local_dc;
      local_98 = local_d8;
      uStack_94 = local_d4;
      local_7c = uVar8;
      local_78 = iVar4;
      local_74 = uVar8;
      local_4c = param_2;
      local_30 = piVar9;
      local_2c = uVar17;
      local_38 = uVar20;
      uStack_90 = local_d0;
      iVar4 = thunk_FUN_016d4a50(0x80);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar4,&local_a8,0x80);
      iVar5 = local_ec;
      if (local_ec == local_f4) {
        FUN_011c4424(&local_f4);
      }
      *(int *)(local_f0 + iVar5 * 4) = iVar4;
      local_ec = iVar5 + 1;
      bVar3 = true;
      iVar4 = *(int *)(param_1 + 8);
joined_r0x0124db00:
      if (iVar4 != 0) {
        local_fc = *(int *)(param_1 + 4);
        iVar4 = local_fc + iVar4 * 0x20;
        iVar5 = *(int *)(param_2 + 4);
        iVar16 = *(int *)(param_2 + 8);
        do {
          if (iVar5 != 0) {
            uVar15 = *(undefined4 *)(local_fc + 4);
            uVar8 = *(uint *)(local_fc + 8);
            iVar18 = iVar5;
            local_f8 = iVar16;
            while( true ) {
              iVar19 = iVar18 + 0x10c;
              uVar2 = *(ushort *)(iVar18 + 0x192);
              uVar11 = 0xffffffff;
              iVar6 = (uint)uVar2 * 0xc;
              do {
                uVar14 = (uint)uVar2;
                if (iVar6 == 0) goto joined_r0x0124dd3c;
                uVar13 = *(uint *)(iVar19 + 8);
                uVar14 = uVar13;
                if (uVar8 < uVar13) {
                  uVar14 = uVar8;
                }
                iVar7 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar19 + 4),uVar14);
                if (iVar7 == 0) {
                  iVar7 = uVar8 - uVar13;
                }
                iVar6 = iVar6 + -0xc;
                uVar11 = uVar11 + 1;
                iVar19 = iVar19 + 0xc;
              } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
              uVar14 = uVar11;
              if (0 < iVar7 == iVar7 < 0) break;
joined_r0x0124dd3c:
              if (local_f8 == 0) goto LAB_0124dc60;
              local_f8 = local_f8 + -1;
              iVar18 = *(int *)(iVar18 + uVar14 * 4 + 0x198);
            }
            local_a8 = -0x80000000;
            local_a4 = uVar15;
            local_a0 = uVar8;
            local_9c = param_3;
            uVar20 = FUN_011cf8a8(local_fc + 0xc,iVar18 + uVar11 * 0x18,&local_a8,param_4,param_5);
            FUN_011590bc(&local_f4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
          }
LAB_0124dc60:
          local_fc = local_fc + 0x20;
        } while (local_fc != iVar4);
      }
      if (local_ec == 0) {
        piVar9 = (int *)&DAT_00000001;
        puVar10 = &DAT_0188a364;
        if (!bVar3) {
          FUN_0115842c(&local_e8);
        }
        if (local_f4 != 0) {
          thunk_FUN_016d3fb4(local_f0);
          return 0x188a36400000001;
        }
      }
      else {
        local_9c = local_f0 + local_ec * 4;
        local_a0 = local_f4;
        local_a8 = local_f0;
        local_a4 = local_f0;
        piVar9 = (int *)thunk_FUN_016d4a50(0x10);
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *piVar9 = local_a8;
        piVar9[1] = local_a4;
        piVar9[2] = local_a0;
        piVar9[3] = local_9c;
        if (!bVar3) {
          FUN_0115842c(&local_e8);
        }
        puVar10 = &UNK_0188ac6c;
      }
      goto LAB_0124de0c;
    }
  }
LAB_0124dec0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x124dec0);
  (*pcVar1)();
}

