// FUN_013d9120 @ 013d9120 size=1620 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d9120(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint unaff_r4;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int local_124;
  uint local_120;
  undefined4 uStack_11c;
  uint uStack_118;
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint local_e8;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_74 [20];
  
  local_124 = FUN_013d2518(param_2);
  if (local_124 != 0x5b) {
    FUN_013ff7ac(&local_124,&DAT_0056738c,&DAT_01894da8);
LAB_013d9774:
    uVar5 = 1;
LAB_013d9410:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,unaff_r4);
  }
  iVar10 = *param_2;
  uStack_11c = *(undefined4 *)(iVar10 + 0x54);
  uStack_118 = *(uint *)(iVar10 + 0x58);
  puVar11 = (uint *)(iVar10 + 0x50);
  local_120 = *puVar11;
  iVar1 = FUN_013d2d20(param_2);
  if (iVar1 == 0) {
    uVar7 = param_2[2];
  }
  else {
    FUN_013d2168(param_2);
    uVar7 = *puVar11;
    unaff_r4 = param_2[2];
    if (uVar7 != unaff_r4) {
      iVar1 = FUN_013d2518(param_2);
      if ((iVar1 == 0x5e) &&
         ((iVar2 = FUN_013d2d20(param_2), iVar2 == 0 ||
          (FUN_013d2168(param_2), *puVar11 == unaff_r4)))) {
        iVar1 = param_2[1];
        local_dc = *puVar11;
        uStack_d8 = *(undefined4 *)(iVar10 + 0x54);
        local_d4 = *(undefined4 *)(iVar10 + 0x58);
        local_e8 = local_120;
        local_e4 = uStack_11c;
        local_e0 = uStack_118;
        if ((int)unaff_r4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,unaff_r4);
        }
        if (unaff_r4 == 0) {
          uVar7 = 0;
          iVar10 = 1;
        }
        else {
          iVar10 = thunk_FUN_016d4a50(unaff_r4);
          uVar7 = unaff_r4;
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,unaff_r4);
          }
        }
        FUN_016dd1aa(iVar10,iVar1,unaff_r4);
        param_1[0xb] = local_e8;
        param_1[0xc] = local_e4;
        param_1[0xd] = local_e0;
        param_1[0xe] = local_dc;
        param_1[0xf] = uStack_d8;
        param_1[0x10] = local_d4;
        param_1[8] = uVar7;
        param_1[9] = iVar10;
        param_1[10] = unaff_r4;
        goto LAB_013d93d0;
      }
      local_104 = *puVar11;
      local_100 = *(undefined4 *)(iVar10 + 0x54);
      uStack_fc = *(uint *)(iVar10 + 0x58);
      local_108 = 0;
      local_10c = 4;
      local_110 = 0;
      uStack_f8 = local_104;
      uStack_f4 = local_100;
      uStack_f0 = uStack_fc;
      local_e8 = local_104;
      local_e4 = local_100;
      local_e0 = uStack_fc;
      local_dc = local_104;
      uStack_d8 = local_100;
      local_d4 = uStack_fc;
      do {
        iVar2 = FUN_013d2518(param_2);
        if (iVar2 != 0x2d) {
          if ((local_108 != 0) || (iVar2 = FUN_013d2518(param_2), iVar2 != 0x5d)) {
LAB_013d95c8:
            uVar7 = *puVar11;
            uVar9 = *(undefined4 *)(iVar10 + 0x54);
            uVar5 = *(undefined4 *)(iVar10 + 0x58);
            param_1[0x1d] = local_110;
            param_1[0x1e] = local_10c;
            param_1[0x1f] = local_108;
            param_1[0x20] = local_104;
            param_1[0x21] = local_100;
            param_1[0x22] = uStack_fc;
            param_1[0x23] = uStack_f8;
            param_1[0x24] = uStack_f4;
            param_1[0x25] = uStack_f0;
            param_1[1] = 0;
            param_1[2] = 4;
            param_1[3] = 0;
            *param_1 = 0x110007;
            param_1[4] = local_104;
            param_1[5] = local_100;
            param_1[6] = uStack_fc;
            param_1[7] = local_104;
            param_1[8] = local_100;
            param_1[9] = uStack_fc;
            param_1[0x16] = local_120;
            param_1[0x17] = uStack_11c;
            param_1[0x18] = uStack_118;
            param_1[0x19] = uVar7;
            param_1[0x1a] = uVar9;
            param_1[0x1b] = uVar5;
            *(bool *)(param_1 + 0x1c) = iVar1 == 0x5e;
            return;
          }
          uVar8 = *puVar11;
          uVar3 = FUN_013d2518(param_2);
          uVar7 = 1;
          if (0x7f < uVar3) {
            uVar7 = 2;
          }
          if ((0x7ff < uVar3) && (uVar7 = 4, uVar3 < 0x10000)) {
            uVar7 = 3;
          }
          puVar6 = &DAT_01894f38;
          if (!CARRY4(uVar7,uVar8)) {
            iVar2 = *(int *)(iVar10 + 0x58);
            puVar6 = &DAT_01894f28;
            if (iVar2 != -1) {
              iVar12 = *(int *)(iVar10 + 0x54);
              iVar4 = FUN_013d2518(param_2);
              local_e0 = *puVar11;
              local_dc = *(uint *)(iVar10 + 0x54);
              uStack_d8 = *(undefined4 *)(iVar10 + 0x58);
              local_c8 = local_c8 & 0xffffff00;
              local_cc = iVar2 + 1;
              local_e4 = 0x5d;
              if (iVar4 == 10) {
                local_cc = 1;
                iVar12 = iVar12 + 1;
              }
              local_e8 = 0x110001;
              local_d4 = uVar7 + uVar8;
              local_d0 = iVar12;
              FUN_013f53b4(&local_110,&local_e8);
              iVar2 = FUN_013d2d20(param_2);
              if ((iVar2 != 0) && (FUN_013d2168(param_2), *puVar11 != unaff_r4)) goto LAB_013d95c8;
              uStack_84 = *puVar11;
              uStack_80 = *(undefined4 *)(iVar10 + 0x54);
              local_7c = *(undefined4 *)(iVar10 + 0x58);
              local_90 = local_120;
              uStack_8c = uStack_11c;
              uStack_88 = uStack_118;
              local_74[0] = 4;
              FUN_013d1ce4(&local_e8,param_2[1],unaff_r4,&local_90,local_74);
              param_1[1] = local_e8;
              param_1[2] = local_e4;
              param_1[3] = local_e0;
              param_1[4] = local_dc;
              param_1[5] = uStack_d8;
              param_1[6] = local_d4;
              param_1[7] = local_d0;
              param_1[8] = local_cc;
              param_1[9] = local_c8;
              param_1[10] = uStack_c4;
              param_1[0xb] = local_c0;
              param_1[0xc] = uStack_bc;
              param_1[0xd] = uStack_b8;
              param_1[0xe] = uStack_b4;
              param_1[0xf] = uStack_b0;
              param_1[0x10] = uStack_ac;
              *param_1 = 0x110009;
              goto LAB_013d96c0;
            }
          }
LAB_013d9754:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(puVar6);
        }
        uVar8 = *puVar11;
        uVar3 = FUN_013d2518(param_2);
        uVar7 = 1;
        if (0x7f < uVar3) {
          uVar7 = 2;
        }
        if ((0x7ff < uVar3) && (uVar7 = 4, uVar3 < 0x10000)) {
          uVar7 = 3;
        }
        if (CARRY4(uVar7,uVar8)) {
          puVar6 = &DAT_01894f38;
          goto LAB_013d9754;
        }
        iVar2 = *(int *)(iVar10 + 0x58);
        if (iVar2 == -1) {
          puVar6 = &DAT_01894f28;
          goto LAB_013d9754;
        }
        iVar12 = *(int *)(iVar10 + 0x54);
        iVar4 = FUN_013d2518(param_2);
        local_e0 = *puVar11;
        local_dc = *(uint *)(iVar10 + 0x54);
        uStack_d8 = *(undefined4 *)(iVar10 + 0x58);
        local_cc = iVar2 + 1;
        if (iVar4 == 10) {
          local_cc = 1;
          iVar12 = iVar12 + 1;
        }
        local_c8 = local_c8 & 0xffffff00;
        local_e4 = 0x2d;
        local_e8 = 0x110001;
        local_d4 = uVar7 + uVar8;
        local_d0 = iVar12;
        FUN_013f53b4(&local_110,&local_e8);
        iVar2 = FUN_013d2d20(param_2);
      } while ((iVar2 != 0) && (FUN_013d2168(param_2), *puVar11 != unaff_r4));
      local_e8 = local_120;
      local_e4 = uStack_11c;
      local_e0 = uStack_118;
      local_dc = local_120;
      uStack_d8 = uStack_11c;
      local_d4 = uStack_118;
      if ((int)unaff_r4 < 0) {
        uVar5 = 0;
        goto LAB_013d9410;
      }
      iVar1 = param_2[1];
      if (unaff_r4 == 0) {
        iVar10 = 1;
        uVar7 = 0;
LAB_013d9684:
        FUN_016dd1aa(iVar10,iVar1,unaff_r4);
        param_1[0xb] = local_e8;
        param_1[0xc] = local_e4;
        param_1[0xd] = local_e0;
        param_1[0xe] = local_dc;
        param_1[0xf] = uStack_d8;
        param_1[0x10] = local_d4;
        param_1[8] = uVar7;
        param_1[9] = iVar10;
        param_1[10] = unaff_r4;
        *param_1 = 0x110009;
        param_1[1] = 4;
LAB_013d96c0:
        iVar1 = local_10c;
        iVar2 = local_108 + 1;
        iVar10 = local_10c;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          FUN_013e7308(iVar10);
          iVar10 = iVar10 + 0x58;
        }
        if (local_110 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(iVar1);
        return;
      }
      iVar10 = thunk_FUN_016d4a50(unaff_r4);
      if (iVar10 != 0) {
        uVar7 = unaff_r4;
        goto LAB_013d9684;
      }
      goto LAB_013d9774;
    }
  }
  iVar1 = param_2[1];
  local_d4 = *(undefined4 *)(iVar10 + 0x58);
  local_dc = *puVar11;
  uStack_d8 = *(undefined4 *)(iVar10 + 0x54);
  local_e8 = local_120;
  local_e4 = uStack_11c;
  local_e0 = uStack_118;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar7);
  }
  if (uVar7 == 0) {
    uVar3 = 0;
    iVar10 = 1;
  }
  else {
    iVar10 = thunk_FUN_016d4a50(uVar7);
    uVar3 = uVar7;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar7);
    }
  }
  FUN_016dd1aa(iVar10,iVar1,uVar7);
  param_1[0xb] = local_e8;
  param_1[0xc] = local_e4;
  param_1[0xd] = local_e0;
  param_1[0xe] = local_dc;
  param_1[0xf] = uStack_d8;
  param_1[0x10] = local_d4;
  param_1[8] = uVar3;
  param_1[9] = iVar10;
  param_1[10] = uVar7;
LAB_013d93d0:
  *param_1 = 0x110009;
  param_1[1] = 4;
  return;
}

