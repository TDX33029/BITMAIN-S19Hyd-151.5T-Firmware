// FUN_0074ce58 @ 0074ce58 size=1660 calls_out=11 calls_in=3
// strings: 

int FUN_0074ce58(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 extraout_s1;
  double dVar21;
  int local_170;
  int local_16c;
  int local_158;
  undefined4 *local_150;
  uint local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined3 local_143;
  uint local_130;
  int local_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined3 uStack_10c;
  undefined1 local_f8;
  undefined2 uStack_f7;
  uint uStack_f5;
  undefined4 uStack_f1;
  undefined4 uStack_ed;
  undefined1 uStack_e9;
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_cb;
  uint uStack_c7;
  undefined4 uStack_c3;
  undefined3 uStack_bf;
  undefined1 local_bc;
  undefined1 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_aa;
  undefined1 local_a6;
  undefined2 local_a2;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined1 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_8e;
  undefined1 local_8a;
  undefined2 local_86;
  undefined1 local_84;
  undefined1 local_80;
  undefined1 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_72;
  undefined1 local_6e;
  undefined2 local_6a;
  undefined1 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_56;
  undefined1 local_52;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_3e;
  undefined2 local_3d;
  undefined1 local_3b;
  
  uVar15 = param_2[1];
  uVar6 = param_2[2];
  local_14c = 0;
  local_128 = 0;
  local_12c = 8;
  local_130 = 0;
  if (param_4 != 0) {
    iVar17 = 8;
    iVar19 = param_3;
    do {
      uVar16 = *(undefined4 *)(iVar19 + 4);
      iVar12 = *(int *)(iVar19 + 8);
      uVar20 = FUN_016232c0(uVar15,uVar6,uVar16,iVar12);
      dVar21 = (double)CONCAT44(extraout_s1,uVar20);
      if (0.7 < dVar21) {
        uVar20 = 0;
        if (iVar12 < 0) {
LAB_0074d4c4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar20,local_158);
        }
        uVar10 = 0;
        if (iVar12 == 0) {
          local_158 = 1;
          local_16c = 0;
        }
        else {
          local_158 = thunk_FUN_016d4a50(iVar12);
          if (local_158 == 0) {
            uVar20 = 1;
            local_158 = iVar12;
            goto LAB_0074d4c4;
          }
          local_16c = iVar12;
        }
        FUN_016dd1aa(local_158,uVar16,iVar12);
        uVar7 = 0;
        if (local_14c != 0) {
          if (local_14c != 1) {
            uVar10 = 0;
            uVar7 = local_14c;
            do {
              uVar8 = uVar10 + (uVar7 >> 1);
              uVar7 = uVar7 - (uVar7 >> 1);
              if (*(double *)(iVar17 + uVar8 * 0x18) <= dVar21) {
                uVar10 = uVar8;
              }
            } while (1 < uVar7);
          }
          if (*(double *)(iVar17 + uVar10 * 0x18) <= dVar21) {
            uVar10 = uVar10 + 1;
          }
          uVar7 = uVar10;
        }
        if (local_14c == local_130) {
          FUN_00f98e48(&local_130);
          iVar17 = local_12c;
        }
        pdVar11 = (double *)(iVar17 + uVar7 * 0x18);
        if (uVar7 < local_14c) {
          FUN_016dd52c(pdVar11 + 3,pdVar11,(local_14c - uVar7) * 0x18);
        }
        local_14c = local_14c + 1;
        *(int *)(pdVar11 + 1) = local_16c;
        *(int *)((int)pdVar11 + 0xc) = local_158;
        *(int *)(pdVar11 + 2) = iVar12;
        *pdVar11 = dVar21;
        local_128 = local_14c;
      }
      iVar19 = iVar19 + 0xc;
    } while (iVar19 != param_3 + param_4 * 0xc);
  }
  iVar17 = local_12c;
  uVar10 = local_130;
  uStack_f1._0_1_ = (undefined1)((uint)local_12c >> 0x18);
  uStack_f1 = CONCAT31((int3)local_130,(undefined1)uStack_f1);
  iVar19 = local_12c + local_14c * 0x18;
  local_f8 = (undefined1)local_12c;
  uStack_f7 = (undefined2)((uint)local_12c >> 8);
  uStack_f5 = CONCAT31((int3)local_12c,(undefined1)uStack_f1);
  uStack_ed._1_3_ = (undefined3)iVar19;
  uStack_ed = CONCAT31(uStack_ed._1_3_,(char)(local_130 >> 0x18));
  uStack_e9 = (undefined1)((uint)iVar19 >> 0x18);
  if (local_14c == 0) {
    iVar18 = 0;
    local_14c = 0;
    local_150 = (undefined4 *)&DAT_00000004;
    iVar19 = 0;
    iVar12 = local_12c;
  }
  else {
    local_150 = (undefined4 *)thunk_FUN_016d4a50(local_14c * 0xc);
    if (local_150 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,local_14c * 0xc);
    }
    iVar9 = local_14c * 0x18;
    iVar18 = (iVar9 - 0x18U) / 0x18 + 1;
    iVar12 = iVar17;
    puVar14 = local_150;
    do {
      uVar6 = *(undefined4 *)(iVar12 + 0xc);
      iVar9 = iVar9 + -0x18;
      puVar1 = (undefined4 *)(iVar12 + 8);
      uVar15 = *(undefined4 *)(iVar12 + 0x10);
      iVar12 = iVar12 + 0x18;
      *puVar14 = *puVar1;
      puVar14[1] = uVar6;
      puVar14[2] = uVar15;
      puVar14 = puVar14 + 3;
    } while (iVar9 != 0);
    iVar19 = ((uint)(iVar19 - iVar12) >> 3) * -0x55555555;
  }
  piVar13 = (int *)(iVar12 + 8);
  for (; iVar19 != 0; iVar19 = iVar19 + -1) {
    if (*piVar13 != 0) {
      thunk_FUN_016d3fb4(piVar13[1]);
    }
    piVar13 = piVar13 + 6;
  }
  if (uVar10 != 0) {
    thunk_FUN_016d3fb4(iVar17);
  }
  if (iVar18 == 0) {
    iVar17 = -0x80000000;
    iVar18 = 0;
  }
  else {
    iVar18 = iVar18 + -1;
    piVar13 = local_150 + iVar18 * 3;
    iVar17 = *piVar13;
    local_16c = piVar13[1];
    local_170 = piVar13[2];
  }
  puVar14 = local_150 + 1;
  for (; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (puVar14[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar14);
    }
    puVar14 = puVar14 + 3;
  }
  if (local_14c != 0) {
    thunk_FUN_016d3fb4(local_150);
  }
  local_d8 = 4;
  local_4c = 4;
  local_f8 = 2;
  uStack_f7 = 0;
  uStack_f5 = uStack_f5 & 0xffffff00;
  local_d4 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_3b = 0;
  uStack_c7 = uStack_c7 & 0xffffff;
  uStack_c3 = (uint)uStack_c3._3_1_ << 0x18;
  local_4e = 0;
  local_52 = 3;
  local_56 = 3;
  local_5a = 3;
  local_5c = 0;
  local_60 = 3;
  local_64 = 3;
  local_68 = 3;
  local_6a = 0;
  local_6e = 3;
  local_72 = 3;
  local_76 = 3;
  local_78 = 0;
  local_7c = 3;
  local_80 = 3;
  local_84 = 3;
  local_86 = 0;
  local_8a = 3;
  local_8e = 3;
  local_92 = 3;
  local_94 = 0;
  local_98 = 3;
  local_9c = 3;
  local_a0 = 3;
  local_a2 = 0;
  local_a6 = 3;
  local_aa = 3;
  local_ae = 3;
  local_b0 = 0;
  local_3e = 0;
  local_b4 = 3;
  local_b8 = 3;
  local_bc = 3;
  local_e4 = 1;
  local_3d = 0x202;
  local_d0 = 0x80000001;
  iVar19 = thunk_FUN_016d4a50(0xc0);
  if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar19,&local_f8,0xc0);
  FUN_0074ca74(iVar19,param_1);
  uVar5 = uStack_f7;
  uVar3 = local_f8;
  uVar6 = *param_5;
  uVar15 = param_5[1];
  uVar16 = param_5[2];
  local_128 = *param_2;
  uStack_124 = param_2[1];
  local_120 = param_2[2];
  _local_144 = CONCAT31(CONCAT21(uStack_f7,local_f8),2);
  local_130 = CONCAT31(local_130._1_3_,5);
  local_12c = CONCAT31(CONCAT21(uStack_f7,local_f8),2);
  local_f8 = (undefined1)param_4;
  uVar4 = local_f8;
  if (param_4 == 0) {
    uStack_f1 = 0;
    local_f8 = 0;
    uStack_f7 = 0;
    uStack_f5 = 0x400;
  }
  else {
    local_f8 = uVar3;
    uStack_f5 = local_128;
    uStack_f1 = uStack_124;
    uStack_ed = local_120;
    iVar12 = thunk_FUN_016d4a50(param_4 * 0xc);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,param_4 * 0xc);
    }
    puVar14 = (undefined4 *)(param_3 + 4);
    iVar18 = 0;
    uStack_f1._0_1_ = (undefined1)((uint)iVar12 >> 0x18);
    uStack_f7 = (undefined2)((uint)param_4 >> 8);
    uStack_f5._0_1_ = (undefined1)((uint)param_4 >> 0x18);
    uStack_f5 = CONCAT31((int3)iVar12,(undefined1)uStack_f5);
    piVar13 = (int *)(iVar12 + 8);
    local_f8 = uVar4;
    do {
      iVar12 = puVar14[1];
      uVar20 = *puVar14;
      if (iVar12 == 0) {
        iVar9 = 1;
      }
      else {
        iVar9 = thunk_FUN_016d4a50(iVar12);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar12);
        }
      }
      puVar14 = puVar14 + 3;
      FUN_016dd1aa(iVar9,uVar20,iVar12);
      piVar13[-1] = iVar9;
      piVar13[-2] = iVar12;
      iVar18 = iVar18 + 1;
      *piVar13 = iVar12;
      piVar13 = piVar13 + 3;
    } while (param_4 != iVar18);
  }
  uStack_118 = CONCAT13(local_f8,(undefined3)uStack_118);
  uStack_114._3_1_ = (undefined1)(uStack_f5 >> 8);
  uStack_114 = CONCAT13(uStack_114._3_1_,
                        (int3)(CONCAT13((undefined1)uStack_f5,CONCAT21(uStack_f7,local_f8)) >> 8));
  uVar2 = (undefined3)(CONCAT13((undefined1)uStack_f1,uStack_f5._1_3_) >> 8);
  uStack_110 = CONCAT13(uVar4,uVar2);
  uStack_10c = (undefined3)((uint)param_4 >> 8);
  local_f8 = 1;
  uStack_f7 = (undefined2)((uint)local_148 >> 8);
  uStack_f5._0_1_ = (undefined1)((uint)local_148 >> 0x18);
  uStack_f5._1_3_ = (undefined3)_local_144;
  uStack_f1._0_1_ = (undefined1)((ushort)uVar5 >> 8);
  uStack_f1._1_3_ = (undefined3)uVar6;
  uStack_ed._0_1_ = (undefined1)((uint)uVar6 >> 0x18);
  uStack_ed = CONCAT31((int3)uVar15,(undefined1)uStack_ed);
  uStack_e9 = (undefined1)((uint)uVar15 >> 0x18);
  local_e4 = local_130;
  local_e0 = local_12c;
  local_dc = local_128;
  local_d8 = uStack_124;
  local_d4 = local_120;
  local_cc = 3;
  local_d0 = CONCAT31(local_d0._1_3_,4);
  local_cb = uStack_118;
  uStack_c3 = CONCAT13(uVar4,uVar2);
  uStack_bf = uStack_10c;
  local_e8 = uVar16;
  uStack_c7 = uStack_114;
  FUN_00f95814(iVar19);
  if (iVar17 != -0x80000000) {
    uStack_e9 = (undefined1)((uint)local_170 >> 0x18);
    uStack_ed._0_1_ = (undefined1)((uint)local_16c >> 0x18);
    uStack_ed = CONCAT31((int3)local_170,(undefined1)uStack_ed);
    uStack_f5._1_3_ = (undefined3)iVar17;
    uStack_f1._0_1_ = (undefined1)((uint)iVar17 >> 0x18);
    uStack_f1 = CONCAT31((int3)local_16c,(undefined1)uStack_f1);
    local_f8 = 2;
    FUN_00f959b8(iVar19,0xc,&local_f8);
  }
  return iVar19;
}

