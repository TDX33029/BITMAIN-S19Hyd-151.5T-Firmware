// FUN_00f94b78 @ 00f94b78 size=1668 calls_out=11 calls_in=3
// strings: 

int FUN_00f94b78(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 extraout_s1;
  double dVar20;
  int local_16c;
  int local_168;
  int local_158;
  undefined4 *local_14c;
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
  
  uVar8 = param_2[1];
  uVar4 = param_2[2];
  uVar13 = 0;
  local_128 = 0;
  local_12c = 8;
  local_130 = 0;
  if (param_4 != 0) {
    iVar16 = 8;
    iVar18 = param_3;
    do {
      uVar15 = *(undefined4 *)(iVar18 + 4);
      iVar11 = *(int *)(iVar18 + 8);
      uVar19 = FUN_016232c0(uVar8,uVar4,uVar15,iVar11);
      dVar20 = (double)CONCAT44(extraout_s1,uVar19);
      if (0.7 < dVar20) {
        uVar19 = 0;
        if (iVar11 < 0) {
LAB_00f951ec:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar19,local_158);
        }
        uVar9 = 0;
        if (iVar11 == 0) {
          local_158 = 1;
          local_16c = 0;
        }
        else {
          local_158 = thunk_FUN_016d4a50(iVar11);
          if (local_158 == 0) {
            uVar19 = 1;
            local_158 = iVar11;
            goto LAB_00f951ec;
          }
          local_16c = iVar11;
        }
        FUN_016dd1aa(local_158,uVar15,iVar11);
        uVar5 = 0;
        if (uVar13 != 0) {
          if (uVar13 != 1) {
            uVar9 = 0;
            uVar5 = uVar13;
            do {
              uVar6 = uVar9 + (uVar5 >> 1);
              uVar5 = uVar5 - (uVar5 >> 1);
              if (*(double *)(iVar16 + uVar6 * 0x18) <= dVar20) {
                uVar9 = uVar6;
              }
            } while (1 < uVar5);
          }
          if (*(double *)(iVar16 + uVar9 * 0x18) <= dVar20) {
            uVar9 = uVar9 + 1;
          }
          uVar5 = uVar9;
        }
        if (uVar13 == local_130) {
          FUN_00f98e48(&local_130);
          iVar16 = local_12c;
        }
        pdVar10 = (double *)(iVar16 + uVar5 * 0x18);
        if (uVar5 < uVar13) {
          FUN_016dd52c(pdVar10 + 3,pdVar10,(uVar13 - uVar5) * 0x18);
        }
        uVar13 = uVar13 + 1;
        *(int *)(pdVar10 + 1) = local_16c;
        *(int *)((int)pdVar10 + 0xc) = local_158;
        *(int *)(pdVar10 + 2) = iVar11;
        *pdVar10 = dVar20;
        local_128 = uVar13;
      }
      iVar18 = iVar18 + 0xc;
      local_168 = param_4 * 3;
    } while (iVar18 != param_3 + param_4 * 0xc);
  }
  iVar16 = local_12c;
  uVar9 = local_130;
  uStack_f1._0_1_ = (undefined1)((uint)local_12c >> 0x18);
  uStack_f1 = CONCAT31((int3)local_130,(undefined1)uStack_f1);
  iVar18 = local_12c + uVar13 * 0x18;
  local_f8 = (undefined1)local_12c;
  uStack_f7 = (undefined2)((uint)local_12c >> 8);
  uStack_f5 = CONCAT31((int3)local_12c,(undefined1)uStack_f1);
  uStack_ed._1_3_ = (undefined3)iVar18;
  uStack_ed = CONCAT31(uStack_ed._1_3_,(char)(local_130 >> 0x18));
  uStack_e9 = (undefined1)((uint)iVar18 >> 0x18);
  if (uVar13 == 0) {
    uVar13 = 0;
    local_14c = (undefined4 *)&DAT_00000004;
    iVar17 = 0;
    iVar18 = 0;
    iVar11 = local_12c;
  }
  else {
    local_14c = (undefined4 *)thunk_FUN_016d4a50(uVar13 * 0xc);
    if (local_14c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar13 * 0xc);
    }
    iVar7 = uVar13 * 0x18;
    iVar17 = (iVar7 - 0x18U) / 0x18 + 1;
    iVar11 = iVar16;
    puVar14 = local_14c;
    do {
      uVar4 = *(undefined4 *)(iVar11 + 0xc);
      iVar7 = iVar7 + -0x18;
      puVar1 = (undefined4 *)(iVar11 + 8);
      uVar8 = *(undefined4 *)(iVar11 + 0x10);
      iVar11 = iVar11 + 0x18;
      *puVar14 = *puVar1;
      puVar14[1] = uVar4;
      puVar14[2] = uVar8;
      puVar14 = puVar14 + 3;
    } while (iVar7 != 0);
    iVar18 = ((uint)(iVar18 - iVar11) >> 3) * -0x55555555;
    local_168 = param_4 * 3;
  }
  piVar12 = (int *)(iVar11 + 8);
  for (; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*piVar12 != 0) {
      thunk_FUN_016d3fb4(piVar12[1]);
    }
    piVar12 = piVar12 + 6;
  }
  if (uVar9 != 0) {
    thunk_FUN_016d3fb4(iVar16);
  }
  if (iVar17 == 0) {
    iVar16 = -0x80000000;
    iVar17 = 0;
  }
  else {
    iVar17 = iVar17 + -1;
    piVar12 = local_14c + iVar17 * 3;
    iVar16 = *piVar12;
    local_158 = piVar12[1];
    local_168 = piVar12[2];
  }
  puVar14 = local_14c + 1;
  for (; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (puVar14[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar14);
    }
    puVar14 = puVar14 + 3;
  }
  if (uVar13 != 0) {
    thunk_FUN_016d3fb4(local_14c);
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
  iVar18 = thunk_FUN_016d4a50(0xc0);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar18,&local_f8,0xc0);
  FUN_00f9545c(iVar18,param_1);
  uVar3 = uStack_f7;
  uVar4 = *param_5;
  uVar8 = param_5[1];
  uVar15 = param_5[2];
  local_128 = *param_2;
  uStack_124 = param_2[1];
  local_120 = param_2[2];
  _local_144 = CONCAT31(CONCAT21(uStack_f7,local_f8),2);
  local_130 = CONCAT31(local_130._1_3_,5);
  local_12c = CONCAT31(CONCAT21(uStack_f7,local_f8),2);
  if (param_4 == 0) {
    param_4 = 0;
    uStack_f1 = 0;
    local_f8 = 0;
    uStack_f7 = 0;
    uStack_f5 = 0x400;
  }
  else {
    uStack_f5 = local_128;
    uStack_f1 = uStack_124;
    uStack_ed = local_120;
    iVar11 = thunk_FUN_016d4a50(param_4 * 0xc);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,param_4 * 0xc);
    }
    uStack_f1._0_1_ = (undefined1)((uint)iVar11 >> 0x18);
    iVar17 = 0;
    local_f8 = (undefined1)param_4;
    uStack_f7 = (undefined2)((uint)param_4 >> 8);
    uStack_f5._0_1_ = (undefined1)((uint)param_4 >> 0x18);
    uStack_f5 = CONCAT31((int3)iVar11,(undefined1)uStack_f5);
    puVar14 = (undefined4 *)(param_3 + 4);
    piVar12 = (int *)(iVar11 + 8);
    do {
      iVar11 = puVar14[1];
      uVar19 = *puVar14;
      if (iVar11 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(iVar11);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar11);
        }
      }
      puVar14 = puVar14 + 3;
      FUN_016dd1aa(iVar7,uVar19,iVar11);
      piVar12[-1] = iVar7;
      piVar12[-2] = iVar11;
      iVar17 = iVar17 + 1;
      *piVar12 = iVar11;
      piVar12 = piVar12 + 3;
    } while (param_4 != iVar17);
  }
  uStack_118 = CONCAT13(local_f8,(undefined3)uStack_118);
  uStack_114._3_1_ = (undefined1)(uStack_f5 >> 8);
  uStack_114 = CONCAT13(uStack_114._3_1_,
                        (int3)(CONCAT13((undefined1)uStack_f5,CONCAT21(uStack_f7,local_f8)) >> 8));
  uVar2 = (undefined3)(CONCAT13((undefined1)uStack_f1,uStack_f5._1_3_) >> 8);
  uStack_110._3_1_ = (undefined1)param_4;
  uStack_110 = CONCAT13(uStack_110._3_1_,uVar2);
  uStack_10c = (undefined3)((uint)param_4 >> 8);
  local_f8 = 1;
  uStack_f7 = (undefined2)((uint)local_148 >> 8);
  uStack_f5._0_1_ = (undefined1)((uint)local_148 >> 0x18);
  uStack_f5._1_3_ = (undefined3)_local_144;
  uStack_f1._0_1_ = (undefined1)((ushort)uVar3 >> 8);
  uStack_f1._1_3_ = (undefined3)uVar4;
  uStack_ed._0_1_ = (undefined1)((uint)uVar4 >> 0x18);
  uStack_ed = CONCAT31((int3)uVar8,(undefined1)uStack_ed);
  uStack_e9 = (undefined1)((uint)uVar8 >> 0x18);
  local_e4 = local_130;
  local_e0 = local_12c;
  local_dc = local_128;
  local_d8 = uStack_124;
  local_d4 = local_120;
  local_cc = 3;
  local_d0 = CONCAT31(local_d0._1_3_,4);
  local_cb = uStack_118;
  uStack_c3 = CONCAT13(uStack_110._3_1_,uVar2);
  uStack_bf = uStack_10c;
  local_e8 = uVar15;
  uStack_c7 = uStack_114;
  FUN_00f95814(iVar18,&local_f8);
  if (iVar16 != -0x80000000) {
    uStack_e9 = (undefined1)((uint)local_168 >> 0x18);
    uStack_ed._0_1_ = (undefined1)((uint)local_158 >> 0x18);
    uStack_ed = CONCAT31((int3)local_168,(undefined1)uStack_ed);
    uStack_f5._1_3_ = (undefined3)iVar16;
    uStack_f1._0_1_ = (undefined1)((uint)iVar16 >> 0x18);
    uStack_f1 = CONCAT31((int3)local_158,(undefined1)uStack_f1);
    local_f8 = 2;
    FUN_00f959b8(iVar18,0xc,&local_f8);
  }
  return iVar18;
}

