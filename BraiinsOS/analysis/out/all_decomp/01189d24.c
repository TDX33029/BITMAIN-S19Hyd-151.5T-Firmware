// FUN_01189d24 @ 01189d24 size=2184 calls_out=16 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01189d24(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 extraout_r1;
  uint uVar14;
  undefined4 *******pppppppuVar15;
  undefined4 uVar16;
  undefined4 *******pppppppuVar17;
  int iVar18;
  uint uVar19;
  uint unaff_r7;
  int iVar20;
  undefined4 uVar21;
  undefined4 *******unaff_r10;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined4 *******local_108;
  int local_104;
  undefined4 *******local_100;
  undefined4 *******local_fc;
  int local_f8;
  undefined4 *******local_f4;
  undefined4 *******local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 *******local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 *******local_d0;
  undefined4 local_c8;
  undefined4 *******local_c4;
  int local_c0;
  undefined4 *******local_bc;
  int local_b8;
  undefined4 *******local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 *******local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 *******local_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 *******local_84;
  int local_80;
  undefined4 *******local_7c;
  int local_78;
  undefined4 *******local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 == '\x05') {
    pppppppuVar17 = *(undefined4 ********)(param_3 + 0xc);
    uVar23 = (int)pppppppuVar17 * 0xc;
    if ((undefined4 *******)0xaaaaaaa < pppppppuVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    uVar21 = 0;
    if (uVar23 == 0) {
      iVar5 = 4;
      local_108 = (undefined4 *******)0x0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(uVar23);
      local_108 = pppppppuVar17;
      unaff_r7 = uVar23;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar23);
      }
    }
    local_100 = (undefined4 *******)0x0;
    local_104 = iVar5;
    if (((undefined4 *******)0x3ffffff < pppppppuVar17) ||
       (unaff_r7 = (int)pppppppuVar17 * 0x40, 0x7ffffffc < unaff_r7)) {
LAB_01189e10:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar21,unaff_r7);
    }
    if (unaff_r7 == 0) {
      local_f8 = 4;
      local_fc = (undefined4 *******)0x0;
    }
    else {
      local_f8 = thunk_FUN_016d4a50(unaff_r7);
      if (local_f8 == 0) {
        uVar21 = 4;
        goto LAB_01189e10;
      }
      local_fc = pppppppuVar17;
    }
    local_e8 = *(int *)(param_3 + 4);
    local_e4 = *(undefined4 *)(param_3 + 8);
    uVar21 = *(undefined4 *)(param_2 + 0x10);
    if (local_e8 == 0) {
      pppppppuVar17 = (undefined4 *******)0x0;
    }
    iVar6 = *(int *)(param_2 + 4);
    iVar12 = *(int *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0x14);
    local_f0 = (undefined4 *******)(uint)(local_e8 != 0);
    local_f4 = (undefined4 *******)0x0;
    local_dc = 0;
    local_ec = 0;
    local_e0 = local_f0;
    local_d8 = local_e8;
    local_d4 = local_e4;
    local_d0 = pppppppuVar17;
    if (iVar12 == 0) {
      unaff_r10 = &local_108;
      iVar6 = 0;
      pppppppuVar17 = (undefined4 *******)0x0;
      while (iVar7 = FUN_00f45584(&local_f0), iVar7 != 0) {
        uVar21 = *(undefined4 *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 8);
        if (iVar7 == 0) {
          iVar12 = 1;
        }
        else {
          iVar12 = thunk_FUN_016d4a50(iVar7);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar7);
          }
        }
        FUN_016dd1aa(iVar12,uVar21,iVar7);
        if (pppppppuVar17 == local_108) {
          FUN_015f37b0(unaff_r10);
          iVar5 = local_104;
        }
        pppppppuVar17 = (undefined4 *******)((int)pppppppuVar17 + 1);
        piVar13 = (int *)(iVar5 + iVar6);
        *piVar13 = iVar7;
        iVar6 = iVar6 + 0xc;
        piVar13[1] = iVar12;
        piVar13[2] = iVar7;
        local_100 = pppppppuVar17;
      }
      bVar4 = false;
    }
    else {
      bVar4 = false;
      pppppppuVar17 = (undefined4 *******)0x0;
LAB_01189ed0:
      uVar24 = FUN_00f45584(&local_f0);
      iVar10 = (int)uVar24;
      if (iVar10 != 0) {
        uVar16 = *(undefined4 *)(iVar10 + 4);
        iVar18 = *(int *)(iVar10 + 8);
        iVar20 = iVar6;
        iVar22 = iVar12 << 5;
        do {
          if ((*(int *)(iVar20 + 8) == iVar18) &&
             (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),uVar16,iVar18), iVar8 == 0)) {
            local_c8 = 0x80000000;
            local_c4 = (undefined4 *******)uVar16;
            local_c0 = iVar18;
            local_bc = (undefined4 *******)param_4;
            FUN_011c9534(&local_a8,iVar20 + 0xc,(int)((ulonglong)uVar24 >> 0x20),&local_c8,param_5,
                         param_6);
            unaff_r10 = local_f4;
            if (local_f4 == local_fc) {
              FUN_011ca644(&local_fc);
            }
            puVar9 = (undefined4 *)(local_f8 + (int)unaff_r10 * 0x40);
            *puVar9 = local_a8;
            puVar9[1] = uStack_a4;
            puVar9[2] = iStack_a0;
            puVar9[3] = uStack_9c;
            puVar9[4] = local_98;
            puVar9[5] = local_94;
            puVar9[6] = iStack_90;
            puVar9[7] = uStack_8c;
            puVar9[8] = local_88;
            puVar9[9] = local_84;
            puVar9[10] = local_80;
            puVar9[0xb] = local_7c;
            puVar9[0xc] = local_78;
            puVar9[0xd] = local_74;
            puVar9[0xe] = uStack_70;
            puVar9[0xf] = uStack_6c;
            local_f4 = (undefined4 *******)((int)unaff_r10 + 1);
            if (*(int *)(iVar10 + 8) == iVar7) {
              iVar10 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + 4),uVar21,iVar7);
              bVar4 = (bool)(iVar10 == 0 | bVar4);
            }
            goto LAB_01189ed0;
          }
          iVar20 = iVar20 + 0x20;
          iVar22 = iVar22 + -0x20;
        } while (iVar22 != 0);
        if (iVar18 == 0) {
          iVar10 = 1;
        }
        else {
          iVar10 = thunk_FUN_016d4a50(iVar18);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar18);
          }
        }
        FUN_016dd1aa(iVar10,uVar16,iVar18);
        if (pppppppuVar17 == local_108) {
          FUN_015f37b0(&local_108);
          iVar5 = local_104;
        }
        local_100 = (undefined4 *******)((int)pppppppuVar17 + 1);
        piVar13 = (int *)(iVar5 + (int)pppppppuVar17 * 0xc);
        *piVar13 = iVar18;
        piVar13[1] = iVar10;
        piVar13[2] = iVar18;
        unaff_r10 = (undefined4 *******)0x0;
        pppppppuVar17 = local_100;
        goto LAB_01189ed0;
      }
    }
    iVar5 = (int)local_f4 << 6;
    iVar6 = local_f8;
    do {
      if (iVar5 == 0) {
        uVar21 = 0;
        local_b8 = 0;
        local_c8 = 0x80000000;
        local_c4 = local_fc;
        local_bc = local_f4;
        local_c0 = local_f8;
        goto joined_r0x0118a15c;
      }
      pcVar1 = (char *)(iVar6 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar6 = iVar6 + 0x40;
    } while (*pcVar1 != '\0');
    uVar21 = 4;
    local_b0 = 0;
    local_c0 = 0;
    local_c4 = (undefined4 *******)&DAT_00000004;
    local_c8 = 0;
    local_b8 = local_f8;
    local_bc = local_fc;
    local_b4 = local_f4;
joined_r0x0118a15c:
    if (pppppppuVar17 != (undefined4 *******)0x0) {
      piVar13 = *(int **)(param_2 + 0x18);
      uVar23 = *(uint *)(param_2 + 0x1c);
      if (param_5 == 0) {
        pppppppuVar15 = (undefined4 *******)0x0;
        iVar5 = param_5;
        iVar6 = local_f8;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
        }
        piVar11 = *(int **)(param_5 + 0xc);
        do {
          iVar5 = *piVar11;
          bVar3 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar3);
        *piVar11 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_0118a5bc;
        unaff_r10 = *(undefined4 ********)(param_5 + 0xc);
        iVar6 = *(int *)(param_5 + 0x10);
        uVar14 = 0;
        uVar19 = (*(int **)(param_5 + 4))[1];
        if (uVar19 <= uVar23) {
          iVar5 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar13 + 2,uVar19);
          uVar14 = uVar19;
          if (iVar5 != 0) {
            uVar14 = 0;
          }
        }
        uVar24 = FUN_011e1508((int)(piVar13 + 2) + uVar14,uVar23 - uVar14);
        uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
        pppppppuVar15 = (undefined4 *******)&SUB_00000002;
        iVar5 = (int)uVar24;
      }
      do {
        iVar7 = *piVar13;
        bVar3 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar3);
      *piVar13 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_0118a5bc;
      local_e4 = 3;
      local_f0 = pppppppuVar15;
      local_e0 = unaff_r10;
      local_dc = iVar6;
      local_d8 = iVar5;
      local_d4 = uVar21;
      local_38 = FUN_01238114(param_4);
      local_88 = &DAT_8000000b;
      local_84 = local_108;
      local_80 = local_104;
      local_7c = local_100;
      local_50 = 6;
      local_a8 = local_f0;
      uStack_a4 = local_ec;
      iStack_a0 = local_e8;
      uStack_9c = local_e4;
      local_98 = local_e0;
      local_94 = local_dc;
      iStack_90 = local_d8;
      uStack_8c = local_d4;
      local_4c = param_3;
      local_30 = piVar13;
      local_2c = uVar23;
      iVar5 = thunk_FUN_016d4a50(0x80);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar5,&local_a8,0x80);
      local_ac = iVar5;
      FUN_011720bc(&local_a8,&local_ac);
      FUN_012128e0(&local_c8,&local_a8);
      FUN_01164df4(iVar5);
      thunk_FUN_016d3fb4(iVar5);
      uVar21 = extraout_r1;
    }
    if (!bVar4) {
      piVar13 = *(int **)(param_2 + 0x20);
      uVar23 = *(uint *)(param_2 + 0x24);
      if (param_5 == 0) {
        pppppppuVar15 = (undefined4 *******)0x0;
        iVar5 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
        }
        piVar11 = *(int **)(param_5 + 0xc);
        do {
          iVar5 = *piVar11;
          bVar4 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar4);
        *piVar11 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_0118a5bc;
        unaff_r10 = *(undefined4 ********)(param_5 + 0xc);
        iVar5 = *(int *)(param_5 + 0x10);
        uVar14 = 0;
        uVar19 = (*(int **)(param_5 + 4))[1];
        if (uVar19 <= uVar23) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar13 + 2,uVar19);
          uVar14 = uVar19;
          if (iVar6 != 0) {
            uVar14 = 0;
          }
        }
        uVar24 = FUN_011e1508((int)(piVar13 + 2) + uVar14,uVar23 - uVar14);
        uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
        param_5 = (int)uVar24;
        pppppppuVar15 = (undefined4 *******)&SUB_00000002;
      }
      do {
        iVar6 = *piVar13;
        bVar4 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar4);
      *piVar13 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_0118a5bc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x118a5bc);
        (*pcVar2)();
      }
      local_e4 = 3;
      local_f0 = pppppppuVar15;
      local_e0 = unaff_r10;
      local_dc = iVar5;
      local_d8 = param_5;
      local_d4 = uVar21;
      uVar24 = FUN_01238114(param_4);
      local_74 = *(undefined4 ********)(param_2 + 0x14);
      uVar21 = *(undefined4 *)(param_2 + 0x10);
      if (local_74 == (undefined4 *******)0x0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(local_74);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_74);
        }
      }
      FUN_016dd1aa(iVar5,uVar21,local_74);
      local_50 = 6;
      local_80 = CONCAT31(local_80._1_3_,3);
      local_88 = (undefined1 *)0x80000027;
      local_a8 = local_f0;
      uStack_a4 = local_ec;
      iStack_a0 = local_e8;
      uStack_9c = local_e4;
      local_98 = local_e0;
      local_94 = local_dc;
      iStack_90 = local_d8;
      uStack_8c = local_d4;
      local_7c = local_74;
      local_78 = iVar5;
      local_4c = param_3;
      local_30 = piVar13;
      local_2c = uVar23;
      local_38 = uVar24;
      iVar5 = thunk_FUN_016d4a50(0x80);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar5,&local_a8,0x80);
      local_ac = iVar5;
      FUN_011720bc(&local_a8,&local_ac);
      FUN_012128e0(&local_c8,&local_a8);
      FUN_01164df4(iVar5);
      thunk_FUN_016d3fb4(iVar5);
    }
    iVar5 = local_104;
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (pppppppuVar17 == (undefined4 *******)0x0) {
      puVar9 = (undefined4 *)(local_104 + 4);
      for (pppppppuVar17 = local_100; pppppppuVar17 != (undefined4 *******)0x0;
          pppppppuVar17 = (undefined4 *******)((int)pppppppuVar17 + -1)) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (local_108 != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(iVar5);
        return;
      }
    }
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

