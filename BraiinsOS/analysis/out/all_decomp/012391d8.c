// FUN_012391d8 @ 012391d8 size=2744 calls_out=11 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012391d8(undefined4 *param_1,undefined4 *param_2,int **param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ushort *unaff_r4;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int *unaff_r6;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  int local_154;
  undefined4 local_150;
  uint *local_138;
  undefined *local_134;
  int *local_130;
  undefined4 *local_12c;
  int **local_128;
  uint local_124;
  uint *local_120;
  int *local_11c;
  int local_118;
  uint local_114;
  int local_110;
  int local_10c;
  int *local_108;
  undefined4 *puStack_104;
  int **ppiStack_100;
  int *local_f8;
  undefined4 *local_f4;
  int **local_f0;
  code *local_ec;
  int *local_e8;
  undefined4 *local_e4;
  int *local_e0;
  undefined4 *local_dc;
  int **ppiStack_d8;
  undefined4 local_d4;
  byte local_d0;
  uint *local_cc;
  uint local_c8;
  uint *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_98;
  int local_8c;
  int *local_88;
  undefined4 *local_84;
  int **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_130 = (int *)&DAT_80000000;
  local_134 = &DAT_0188ab78;
  local_12c = param_2;
  local_128 = param_3;
  while( true ) {
    local_30 = 0;
    local_2c = 0xfa;
    local_34 = 1;
    local_38 = 1;
    local_44 = 1;
    local_3c = 0;
    local_28 = 0;
    local_88 = (int *)0x0;
    local_8c = 0;
    local_40 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 4;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 4;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 4;
    local_78 = 0;
    local_7c = 0;
    local_80 = (int **)0x0;
    local_84 = (undefined4 *)0x4;
    FUN_013dec94(&local_cc,&local_8c,local_12c,local_128);
    iVar13 = local_ac;
    iVar10 = local_b0;
    if (local_cc != (uint *)&DAT_0000000b) break;
    if (local_98 < local_a4) goto LAB_01239cf4;
    if (local_a4 != 0) {
      if (local_a4 < local_a8) {
        if (-0x41 < *(char *)(local_ac + local_a4)) goto LAB_012392e4;
      }
      else if (local_a4 == local_a8) goto LAB_012392e4;
      goto LAB_01239cf4;
    }
LAB_012392e4:
    if (local_98 != 0) {
      if (local_98 < local_a8) {
        if (*(char *)(local_ac + local_98) < -0x40) {
LAB_01239cf4:
          local_134 = &DAT_0188ab58;
          uVar3 = local_a4;
          goto LAB_01239d34;
        }
      }
      else if (local_98 != local_a8) goto LAB_01239cf4;
    }
    piVar2 = (int *)(local_98 - local_a4);
    bVar19 = piVar2 != (int *)&SUB_00000002;
    if (!bVar19) {
      unaff_r6 = (int *)0x635c;
      unaff_r4 = (ushort *)(local_ac + local_a4);
      piVar2 = (int *)(uint)*unaff_r4;
    }
    if (bVar19 || piVar2 != unaff_r6) {
LAB_01239534:
      bVar5 = 1;
      *param_1 = 0x80000001;
      goto joined_r0x01239c30;
    }
    if (local_98 < local_a8) {
      if (*(char *)(local_ac + local_98) < -0x40) goto LAB_01239d08;
    }
    else if (local_98 != local_a8) {
LAB_01239d08:
      local_134 = &DAT_0188ab68;
      uVar3 = local_98;
      local_98 = local_a8;
      goto LAB_01239d34;
    }
    if (local_98 == local_a8) goto LAB_01239534;
    pbVar11 = (byte *)(local_ac + local_98);
    uVar3 = (uint)*pbVar11;
    if ((char)*pbVar11 < '\0') {
      uVar18 = pbVar11[1] & 0x3f;
      if (uVar3 < 0xe0) {
        uVar12 = pbVar11[1] & 0x1f | (uVar3 & 0x1f) << 6;
        uVar3 = uVar18;
      }
      else {
        uVar18 = uVar18 << 6;
        uVar9 = pbVar11[2] & 0x3f | uVar18;
        if (uVar3 < 0xf0) {
          uVar12 = pbVar11[2] & 0x1f | uVar18 | (uVar3 & 0x1f) << 0xc;
          uVar3 = uVar9;
        }
        else {
          uVar12 = pbVar11[3] & 0x1f | uVar9 << 6 | (uVar3 & 7) << 0x12;
          uVar3 = pbVar11[3] & 0x3f;
        }
      }
    }
    else {
      uVar12 = uVar3 & 0xffffffdf;
    }
    if (0x19 < uVar12 - 0x41) goto LAB_01239534;
    unaff_r6 = (int *)(uVar3 & 0x1f);
    uVar3 = local_98 + 1;
    local_11c = unaff_r6;
    if (local_130 == (int *)&DAT_80000000) {
      if (local_a4 != 0) {
        if (local_a4 < local_a8) {
          if ((char)*unaff_r4 < -0x40) goto LAB_01239d1c;
        }
        else if (local_a4 != local_a8) {
LAB_01239d1c:
          uVar3 = 0;
          local_98 = local_a4;
          goto LAB_01239d34;
        }
      }
      local_114 = local_a4;
      local_118 = local_ac;
      if (uVar3 != 0) {
        if (uVar3 < local_a8) {
          if (*(char *)(local_ac + uVar3) < -0x40) goto LAB_01239d24;
        }
        else if (local_a8 != uVar3) {
LAB_01239d24:
          local_134 = &DAT_0188ab88;
          local_98 = local_a8;
LAB_01239d34:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_ac,local_a8,uVar3,local_98,local_134);
        }
      }
      local_10c = local_a8 - uVar3;
      local_110 = local_ac + uVar3;
      local_e8 = &local_110;
      local_e4 = &DAT_0157d360;
      local_f4 = &DAT_0157d360;
      local_f8 = &local_118;
      local_ec = FUN_00faaf34;
      local_f0 = &local_11c;
      FUN_00600d2c(&local_108,&DAT_0057fce6,&local_f8);
      if (((uint)local_130 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_12c);
      }
      local_130 = local_108;
      local_12c = puStack_104;
      local_128 = ppiStack_100;
    }
    else {
      local_f8 = unaff_r6;
      FUN_011e15ac(&local_130,local_a4,uVar3,&local_f8,1,&DAT_0188ab98);
    }
    if (iVar10 != 0) {
      thunk_FUN_016d3fb4(iVar13);
    }
    FUN_01239e50(&local_8c);
  }
  if (local_cc == (uint *)&DAT_00000022) {
    local_120 = local_c4;
    local_124 = local_c8;
    FUN_01239e50(&local_8c);
LAB_012395c4:
    uVar3 = 4;
    local_bc = 4;
    local_e0 = local_130;
    local_dc = local_12c;
    ppiStack_d8 = local_128;
    local_d0 = 0;
    local_d4 = 0;
    local_c0 = 0;
    local_c8 = 4;
    local_cc = (uint *)0x0;
    local_b8 = 0;
    local_c4 = (uint *)0x0;
    uVar12 = local_124 - 7;
    uVar18 = local_124;
    puVar8 = local_120;
    puVar16 = &local_124;
    if (4 < uVar12) goto LAB_0123999c;
LAB_01239614:
    puVar6 = local_c4;
    switch((int)&switchD_0123961c::switchdataD_01239620 +
           (&switchD_0123961c::switchdataD_01239620)[uVar12] & 0xfffffffe) {
    case 0x1239634:
      puVar6 = puVar8 + 1;
      if (*puVar8 != 0x110008) {
        puVar6 = puVar8;
      }
      uVar3 = (uint)(*puVar8 == 0x110008);
      if (uVar3 != 0) goto LAB_01239858;
LAB_01239668:
      uVar18 = *puVar6;
      if (uVar18 == 0x110005) {
        FUN_01240bcc(&local_e0,puVar6 + 1);
        uVar18 = *puVar6;
      }
      iVar10 = 2;
      if (0x10ffff < uVar18) {
        iVar10 = uVar18 - 0x110000;
      }
      if (iVar10 == 7) {
        if (puVar6[3] == 0) goto LAB_01239714;
        puVar8 = (uint *)puVar6[2];
        local_134 = (undefined *)(puVar6[3] - 1);
        local_138 = puVar8 + 0x16;
      }
      else {
        if (iVar10 != 6) goto LAB_01239714;
        puVar8 = (uint *)puVar6[1];
        if (*puVar8 == 0x110008) {
          puVar8 = puVar8 + 1;
          uVar12 = 1;
          uVar18 = 1;
          goto joined_r0x012396ec;
        }
        local_134 = (undefined *)0x0;
        local_138 = (uint *)&DAT_00000004;
      }
      uVar12 = 0;
      uVar18 = 0;
joined_r0x012396ec:
      puVar17 = puVar6;
      puVar7 = puVar8;
      uVar9 = uVar3;
      if (local_b8 != local_c0) goto LAB_01239820;
      do {
        iVar10 = local_b8;
        FUN_01401818(&local_c0);
        puVar17 = puVar6;
        local_b8 = iVar10;
        uVar9 = uVar3;
LAB_01239820:
        do {
          uVar3 = uVar18;
          puVar6 = puVar8;
          puVar8 = (uint *)(local_bc + local_b8 * 0x18);
          *puVar8 = uVar9;
          puVar8[4] = (uint)local_138;
          puVar8[1] = (uint)puVar17;
          puVar8[2] = uVar12;
          puVar8[3] = (uint)puVar7;
          puVar8[5] = (uint)local_134;
          local_b8 = local_b8 + 1;
          if (uVar3 == 0) goto LAB_01239668;
LAB_01239858:
          local_138 = (uint *)*puVar6;
          local_134 = (undefined *)puVar6[1];
          uVar12 = 2;
          puVar8 = local_138 + 1;
          if (*local_138 != 0x110008) {
            puVar8 = local_138;
          }
          uVar18 = (uint)(*local_138 == 0x110008);
          puVar17 = puVar6;
          puVar7 = puVar6;
          uVar9 = uVar3;
        } while (local_b8 != local_c0);
      } while( true );
    case 0x12398b0:
      uVar18 = puVar8[2];
      if (uVar18 == 0) {
        uVar18 = 0xb;
        goto LAB_0123999c;
      }
      puVar17 = (uint *)puVar8[1];
      uVar14 = 2;
      break;
    case 0x12398cc:
      puVar7 = (uint *)0x0;
      puVar17 = (uint *)puVar8[0xb];
      uVar14 = 1;
      iVar10 = 0;
      goto joined_r0x01239914;
    case 0x12398ec:
      uVar18 = puVar8[2];
      if (uVar18 == 0) {
        uVar18 = 10;
        goto LAB_0123999c;
      }
      puVar17 = (uint *)puVar8[1];
      uVar14 = 3;
      break;
    case 0x123991c:
      puVar17 = (uint *)puVar8[9];
      puVar7 = (uint *)0x0;
      iVar10 = 0;
      uVar14 = 0;
      if (local_c4 != local_cc) goto LAB_01239944;
      goto LAB_01239938;
    }
    iVar10 = uVar18 - 1;
    puVar7 = puVar17 + 2;
    puVar8 = puVar17;
joined_r0x01239914:
    if (local_c4 == local_cc) {
LAB_01239938:
      FUN_01401454(&local_cc);
      uVar3 = local_c8;
    }
LAB_01239944:
    puVar15 = (uint *)((int)puVar6 + 1);
    puVar1 = (undefined4 *)(uVar3 + (int)puVar6 * 0x14);
    *puVar1 = puVar16;
    puVar1[1] = uVar14;
    puVar1[2] = puVar8;
    puVar1[3] = puVar7;
    puVar1[4] = iVar10;
    goto LAB_01239968;
  }
  if (((uint)local_cc & 0x3e) == 0x20) {
    bVar5 = 0;
    *param_1 = local_130;
    param_1[1] = local_12c;
    param_1[2] = local_128;
joined_r0x01239c30:
    if (local_b0 == 0) goto LAB_01239554;
  }
  else {
    *param_1 = 0x80000001;
    if (local_b0 == 0) {
      bVar5 = 1;
      goto LAB_01239554;
    }
    bVar5 = 1;
  }
  thunk_FUN_016d3fb4(local_ac);
LAB_01239554:
  FUN_01239e50(&local_8c);
  if ((bool)(bVar5 & local_130 != (int *)&DAT_80000000)) {
LAB_01239570:
    if (local_130 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_12c);
    }
  }
  return;
LAB_01239714:
  if (local_b8 != 0) {
    iVar10 = local_bc + local_b8 * 0x18;
                    /* WARNING: Could not recover jumptable at 0x01239760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01239764 + *(int *)(&DAT_01239764 + *(int *)(iVar10 + -0x10) * 4)))
              (iVar10 + -0x18,local_b8,*(undefined4 *)(iVar10 + -4),local_b8 + -1);
    return;
  }
  uVar18 = *puVar16;
  puVar8 = (uint *)puVar16[1];
LAB_0123999c:
  FUN_01240a4c(&local_8c,&local_e0,uVar18,puVar8);
  uVar3 = local_c8;
  if (local_8c == 0x22) {
    if (local_c4 != (uint *)0x0) {
      iVar10 = (int)local_c4 * 0x14;
      iVar13 = (int)local_c4 * 0x14;
      puVar15 = local_c4;
      do {
        iVar10 = iVar10 + -0x14;
        puVar1 = *(undefined4 **)(uVar3 + iVar10);
        puVar8 = (uint *)((int)puVar15 + -1);
        uVar18 = *(uint *)(uVar3 + iVar13 + -0x10);
        if (1 < uVar18) {
          iVar4 = *(int *)(uVar3 + iVar13 + -4);
          puVar17 = (uint *)((int *)(uVar3 + iVar10))[3];
          if (iVar4 != 0) goto LAB_01239a38;
        }
        FUN_01240a4c(&local_8c,&local_e0,*puVar1,puVar1[1]);
        if (local_8c != 0x22) {
          bVar5 = (byte)local_7c;
          local_c4 = puVar8;
          goto LAB_01239aa8;
        }
        iVar13 = iVar13 + -0x14;
        puVar15 = puVar8;
        if (puVar8 == (uint *)0x0) break;
      } while( true );
    }
    bVar19 = true;
    bVar5 = local_d0;
    local_f8 = local_e0;
    local_f4 = local_dc;
    local_f0 = ppiStack_d8;
  }
  else {
    bVar5 = (byte)local_7c;
LAB_01239aa8:
    local_150 = local_6c;
    local_154 = local_70;
    bVar19 = false;
    local_f8 = local_88;
    local_f4 = local_84;
    local_f0 = local_80;
    if (((uint)local_e0 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_dc);
    }
  }
  if (local_cc != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_c8);
  }
  if (local_c0 != 0) {
    thunk_FUN_016d3fb4(local_bc);
  }
  if (!bVar19) {
    if (local_154 != 0) {
      thunk_FUN_016d3fb4(local_150);
    }
    *param_1 = 0x80000001;
    FUN_0123a018(&local_124);
    return;
  }
  local_130 = local_f8;
  local_12c = local_f4;
  local_128 = local_f0;
  if ((bVar5 & 1) == 0) {
    *param_1 = local_f8;
    param_1[1] = local_f4;
    param_1[2] = local_f0;
    FUN_0123a018(&local_124);
    return;
  }
  local_2c = 0xfa;
  local_30 = 0;
  local_34 = 1;
  local_38 = 1;
  local_3c = 0;
  local_28 = 0;
  local_88 = (int *)0x0;
  local_8c = 0;
  local_40 = 0;
  local_44 = 1;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 4;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 4;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 4;
  local_78 = 0;
  local_7c = 0;
  local_80 = (int **)0x0;
  local_84 = (undefined4 *)0x4;
  FUN_013dec94(&local_cc,&local_8c,local_f4,local_f0);
  puVar8 = local_c4;
  uVar3 = local_c8;
  if (local_cc == (uint *)&DAT_00000022) {
    FUN_0123a018(&local_124);
    local_120 = puVar8;
    local_124 = uVar3;
    FUN_01239e50(&local_8c);
    goto LAB_012395c4;
  }
  *param_1 = 0x80000001;
  if (local_b0 != 0) {
    thunk_FUN_016d3fb4(local_ac);
  }
  FUN_01239e50(&local_8c);
  FUN_0123a018(&local_124);
  if (local_130 == (int *)&DAT_80000000) {
    return;
  }
  goto LAB_01239570;
LAB_01239a38:
  iVar13 = uVar3 + iVar10;
  *(undefined4 **)(uVar3 + iVar10) = puVar1;
  *(uint *)(iVar13 + 4) = uVar18;
  *(uint **)(iVar13 + 8) = puVar17;
  *(uint **)(iVar13 + 0xc) = puVar17 + 2;
  *(int *)(iVar13 + 0x10) = iVar4 + -1;
LAB_01239968:
  uVar18 = *puVar17;
  puVar8 = (uint *)puVar17[1];
  uVar12 = uVar18 - 7;
  puVar16 = puVar17;
  local_c4 = puVar15;
  if (uVar12 < 5) goto LAB_01239614;
  goto LAB_0123999c;
}

