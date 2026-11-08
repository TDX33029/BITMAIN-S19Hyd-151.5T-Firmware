// FUN_00ba4830 @ 00ba4830 size=1748 calls_out=21 calls_in=0
// strings: BUG: empty setupx-xss-protection

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00ba4b98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00ba4830(undefined4 param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int extraout_r1;
  uint uVar11;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  bool bVar22;
  bool bVar23;
  undefined8 in_d0;
  undefined8 uVar24;
  uint local_134;
  uint local_118;
  undefined4 local_114 [2];
  undefined4 local_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint *local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  uint local_98;
  uint *puStack_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint *puStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar20 = *param_3;
  uVar10 = param_3[1];
  local_e8 = *(undefined8 *)param_3;
  uVar12 = param_3[2];
  if (uVar20 == 0) {
    uVar12 = 0;
  }
  local_b8 = 0;
  local_c8 = 0;
  local_dc = 0;
  local_ec = 0;
  uVar2 = (uint)(uVar20 != 0);
  local_f0 = uVar2;
  local_e0 = uVar2;
  local_d8 = uVar20;
  local_d4 = (uint *)uVar10;
  local_d0 = uVar12;
  local_cc = param_2;
  FUN_00ce73bc(&local_98,&local_f0);
  if ((local_98 & 1) == 0) {
    iVar18 = extraout_r1;
    if (local_c8 != 0) {
      iVar18 = local_c0;
    }
    if (local_c8 != 0 && iVar18 != 0) {
      thunk_FUN_016d3fb4();
      iVar18 = extraout_r1_00;
    }
    if (local_b8 != 0) {
      iVar18 = local_b0;
    }
    if (local_b8 != 0 && iVar18 != 0) {
      thunk_FUN_016d3fb4();
    }
    local_10c = 0;
    local_114[0] = 0;
  }
  else {
    uVar11 = 0;
    if (local_c8 != 0) {
      uVar11 = ((uint)(local_bc - local_c4) >> 3) * -0x55555555;
    }
    if (local_b8 != 0) {
      uVar11 = ((uint)(local_ac - iStack_b4) >> 3) * -0x55555555 + uVar11;
    }
    uVar3 = uVar11;
    if (uVar11 < 4) {
      uVar3 = 3;
    }
    if (0x5555554 < uVar11) {
      uVar4 = 0;
      iVar18 = local_ac;
LAB_00ba4928:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,iVar18);
    }
    uVar3 = uVar3 + 1;
    iVar18 = uVar3 * 0x18;
    if (iVar18 == 0) {
      puVar5 = (uint *)&DAT_00000008;
      uVar3 = 0;
    }
    else {
      puVar5 = (uint *)thunk_FUN_016d4a50(iVar18);
      if (puVar5 == (uint *)0x0) {
        uVar4 = 8;
        goto LAB_00ba4928;
      }
    }
    uVar11 = 1;
    *puVar5 = local_90;
    puVar5[1] = local_8c;
    puVar5[2] = local_88;
    puVar5[3] = local_84;
    puVar5[4] = local_80;
    puVar5[5] = local_7c;
    local_9c = 1;
    local_a4 = uVar3;
    local_a0 = puVar5;
    FUN_016dd1aa(&local_98,&local_f0,0x48);
    iVar18 = 0x18;
    while (FUN_00ce73bc(&local_50,&local_98), (local_50 & 1) != 0) {
      if (uVar11 == local_a4) {
        iVar13 = ((uint)(local_54 - local_5c) >> 3) * -0x55555555 + 1;
        if (local_60 == 0) {
          iVar13 = 1;
        }
        if (local_70 != 0) {
          iVar13 = ((uint)(local_64 - local_6c) >> 3) * -0x55555555 + iVar13;
        }
        FUN_00d653ec(&local_a4,uVar11,iVar13,8);
        puVar5 = local_a0;
      }
      puVar6 = (uint *)((int)puVar5 + iVar18);
      uVar11 = uVar11 + 1;
      iVar18 = iVar18 + 0x18;
      *puVar6 = local_48;
      puVar6[1] = uStack_44;
      puVar6[2] = uStack_40;
      puVar6[3] = uStack_3c;
      puVar6[4] = uStack_38;
      puVar6[5] = uStack_34;
      local_9c = uVar11;
    }
    iVar18 = extraout_r1_01;
    if (local_70 != 0) {
      iVar18 = local_68;
    }
    if (local_70 != 0 && iVar18 != 0) {
      thunk_FUN_016d3fb4();
      iVar18 = extraout_r1_02;
    }
    if (local_60 != 0) {
      iVar18 = local_58;
    }
    uVar3 = local_a4;
    if (local_60 != 0 && iVar18 != 0) {
      thunk_FUN_016d3fb4();
      uVar3 = local_a4;
    }
    local_a4 = uVar3;
    if (uVar11 != 1) {
      if (uVar11 == 0) {
        local_10c = 0;
        local_114[0] = 0;
        if (uVar3 != 0) {
          thunk_FUN_016d3fb4(puVar5);
        }
        goto LAB_00ba4b20;
      }
      if (uVar11 < 0x15) {
        FUN_00b5d808(puVar5,uVar11);
      }
      else {
        FUN_00cd98c0(puVar5,uVar11);
      }
    }
    local_98 = uVar3;
    puStack_94 = puVar5;
    local_90 = uVar11;
    FUN_00c3f1c4(local_114,&local_98);
  }
LAB_00ba4b20:
  if ((param_5 & 1) == 0) {
    local_f0 = 1;
    local_e8 = in_d0;
    uVar4 = FUN_00c6fdc8(param_3);
    FUN_00cfa9b8(uVar4,(int)((ulonglong)in_d0 >> 0x20),0x47ae147b,&local_98,param_2 + 0x288,
                 &local_f0,local_114);
    uVar11 = local_98;
  }
  else {
    uVar11 = FUN_00c6fdc8(param_3);
    FUN_00c6fdc8(param_3);
    FUN_00cfbd90(&local_f0,param_2 + 0x288,local_114,param_4);
    local_90 = local_f0;
    local_8c = local_ec;
    local_88 = (uint)local_e8;
  }
  local_108 = local_90;
  uStack_104 = local_8c;
  uStack_100 = local_88;
  FUN_00d00228(&local_a4,*(undefined4 *)(param_2 + 0x48c),&local_108);
  puVar5 = local_a0;
  uVar16 = local_a4;
  uVar3 = local_9c;
  if (local_a4 == 0) {
    uVar3 = 0;
  }
  uVar15 = (uint)(local_a4 != 0);
  iVar18 = uVar3 * 0x38;
  uVar4 = 0;
  if (0x2492492 < uVar3) {
LAB_00ba4bf4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,iVar18);
  }
  if (iVar18 == 0) {
    iVar13 = 8;
    local_118 = 0;
  }
  else {
    iVar13 = thunk_FUN_016d4a50(iVar18);
    local_118 = uVar3;
    if (iVar13 == 0) {
      uVar4 = 8;
      goto LAB_00ba4bf4;
    }
  }
  iVar18 = *(int *)(param_2 + 0x204);
  puVar21 = (undefined1 *)(iVar13 + 0x34);
  local_d4 = puVar5;
  local_ec = 0;
  local_e8 = CONCAT44(puVar5,uVar16);
  iVar19 = 0;
  local_dc = 0;
  local_d8 = uVar16;
  local_f0 = uVar15;
  local_e0 = uVar15;
  local_d0 = uVar3;
  while( true ) {
    uVar24 = FUN_00c3926c(&local_f0);
    iVar9 = (int)((ulonglong)uVar24 >> 0x20);
    if ((undefined4 *)uVar24 == (undefined4 *)0x0) {
      local_fc = local_118;
      local_f8 = iVar13;
      local_f4 = iVar19;
      FUN_00c6fa14(param_1,&local_fc);
      FUN_00c4849c(&local_a4);
      FUN_00c481d4(&local_108);
      FUN_00c45ba8(local_114);
      if (*(int *)(param_4 + 0x18) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_4 + 0x1c));
      }
      iVar18 = *(int *)(param_4 + 0x28);
      puVar17 = (undefined4 *)(iVar18 + 4);
      for (iVar13 = *(int *)(param_4 + 0x2c); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar17[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar17);
        }
        puVar17 = puVar17 + 6;
      }
      if (*(int *)(param_4 + 0x24) != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      return;
    }
    uVar16 = *(uint *)(iVar9 + 8);
    uVar4 = 0;
    bVar23 = 0x3ffffffe < uVar16;
    bVar22 = uVar16 == 0x3fffffff;
    if (uVar16 < 0x40000000) {
      uVar3 = uVar16 << 2;
      bVar23 = 0x7ffffffb < uVar3;
      bVar22 = uVar3 == 0x7ffffffc;
    }
    if (bVar23 && !bVar22) break;
    uVar14 = *(undefined4 *)(iVar9 + 4);
    uVar4 = *(undefined4 *)uVar24;
    if (uVar3 == 0) {
      local_134 = 4;
      local_98 = 0;
    }
    else {
      local_134 = thunk_FUN_016d4a50(uVar3);
      if (local_134 == 0) {
        uVar4 = 4;
        local_134 = uVar3;
        break;
      }
      local_98 = uVar16;
    }
    puStack_94 = (uint *)local_134;
    FUN_016dd1aa(local_134,uVar14,uVar3);
    local_90 = uVar16;
    FUN_00d635b0(uVar11,&local_50,iVar18 + 0x18,&local_98);
    local_84 = 0;
    puStack_94 = (uint *)0x0;
    local_98 = uVar2;
    local_90 = uVar20;
    local_8c = uVar10;
    local_88 = uVar2;
    local_80 = uVar20;
    local_7c = uVar10;
    local_78 = uVar12;
    uVar24 = FUN_00c3901c(&local_98);
    puVar17 = (undefined4 *)((ulonglong)uVar24 >> 0x20);
    if ((int)uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: empty setupx-xss-protection",0x10,&DAT_01874068);
    }
    uVar14 = *puVar17;
    iVar19 = iVar19 + 1;
    uVar7 = puVar17[1];
    uVar8 = puVar17[2];
    iVar9 = puVar17[4];
    uVar1 = *(undefined1 *)(puVar17 + 5);
    local_98 = local_50;
    puStack_94 = puStack_4c;
    local_90 = local_48;
    local_8c = uStack_44;
    local_88 = uStack_40;
    local_84 = uStack_3c;
    *(uint *)(puVar21 + -0x34) = local_50;
    *(uint **)(puVar21 + -0x30) = puStack_4c;
    *(uint *)(puVar21 + -0x2c) = local_48;
    *(uint *)(puVar21 + -0x28) = uStack_44;
    *(uint *)(puVar21 + -0x24) = uStack_40;
    *(uint *)(puVar21 + -0x20) = uStack_3c;
    *puVar21 = uVar1;
    *(int *)(puVar21 + -4) = iVar9 + 1;
    *(undefined4 *)(puVar21 + -0x14) = uVar14;
    *(undefined4 *)(puVar21 + -0x10) = uVar7;
    *(undefined4 *)(puVar21 + -0xc) = uVar8;
    *(undefined4 *)(puVar21 + -0x1c) = uVar4;
    puVar21 = puVar21 + 0x38;
    uVar3 = uStack_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar4,local_134);
}

