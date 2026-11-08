// FUN_00b1f9e4 @ 00b1f9e4 size=2300 calls_out=18 calls_in=2
// strings: 

void FUN_00b1f9e4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *local_150;
  undefined4 *local_148;
  int local_138;
  undefined4 uStack_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined *local_58;
  byte **local_54;
  byte *local_50;
  undefined1 *local_4c;
  uint *local_48;
  code *local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar4 = (undefined4 *)((uint)&local_108 | 4);
  puVar20 = (undefined4 *)((uint)&local_138 | 4);
  local_148 = &local_fc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 10)) {
  case 0:
    uVar5 = param_2[4];
    param_2[5] = *param_2;
    param_2[6] = param_2[1];
    param_2[7] = param_2[2];
    param_2[8] = param_2[3];
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[0xb] = uVar5;
LAB_00b1fa94:
    param_2[0xc] = uVar5;
    *(undefined1 *)(param_2 + 0x18) = 0;
LAB_00b1faac:
    param_2[0xd] = uVar5;
    *(undefined1 *)(param_2 + 0xf) = 0;
LAB_00b1fac0:
    param_2[0xe] = uVar5;
LAB_00b1fac4:
    *(undefined1 *)(param_2 + 0x17) = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 1;
    param_2[0x16] = 1;
    param_2[0x10] = uVar5;
    param_2[0x11] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187704c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187704c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x19)) {
    case 0:
      uVar5 = param_2[0xb];
      goto LAB_00b1fa94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886258);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886258);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x18)) {
    case 0:
      uVar5 = param_2[0xc];
      goto LAB_00b1faac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886268);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886268);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      uVar5 = param_2[0xd];
      goto LAB_00b1fac0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886278);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886278);
    case 3:
      uVar5 = param_2[0xe];
      goto LAB_00b1fac4;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe)) {
    case 0:
      iVar6 = param_2[0xc];
      param_2[0xd] = iVar6;
      goto LAB_00b1fdb4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018775b4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018775b4);
    case 3:
      iVar6 = param_2[0xd];
      goto LAB_00b1fdb4;
    }
  }
  local_150 = param_2 + 0x19;
  bVar2 = FUN_0163c8bc(param_2 + 0x10,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0xf) = 4;
    *(undefined1 *)local_150 = 3;
    *(undefined1 *)(param_2 + 0x18) = 3;
    *param_1 = 8;
    *(undefined1 *)(param_2 + 10) = 3;
    return;
  }
  FUN_0163c790(param_2 + 0x10);
  if (param_2[0x11] != 0) {
    (**(code **)(param_2[0x11] + 0xc))(param_2[0x12]);
  }
  if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
  }
  uVar10 = param_2[5];
  iVar6 = param_2[0xc];
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (-1 < (int)uVar10) {
    uVar10 = 2;
  }
  *(undefined1 *)(param_2 + 0x19) = 1;
  *(undefined1 *)(param_2 + 0x18) = 1;
  param_2[9] = iVar6;
  *(char *)(param_2 + 0xb) = (char)uVar10;
  while (cVar3 = FUN_00d07630(iVar6 + 0x50,uVar10), cVar3 == '\x03') {
    iVar6 = param_2[9];
    uVar10 = *(uint *)(iVar6 + 0x18);
    *(undefined4 *)(iVar6 + 0x18) = 8;
    if (uVar10 == 8) {
      *(undefined1 *)(param_2 + 0xe) = 0;
      iVar6 = param_2[9] + 0x48;
      param_2[0xc] = iVar6;
      param_2[0xd] = iVar6;
LAB_00b1fdb4:
      FUN_00d40168(&local_108,iVar6,*param_3);
      uVar9 = 1;
      uVar10 = 1;
      if (local_108 == 9) {
        uVar9 = 3;
      }
      *(undefined1 *)(param_2 + 0xe) = uVar9;
      if (local_108 == 9) {
        *param_1 = 8;
        *(undefined1 *)(param_2 + 10) = 4;
        return;
      }
      puVar12 = (undefined4 *)((uint)&local_108 | 4);
      local_d8 = *puVar12;
      uStack_d4 = puVar12[1];
      uStack_d0 = puVar12[2];
      uStack_cc = puVar12[3];
      uStack_c8 = puVar12[4];
      local_c4 = puVar12[5];
      uStack_c0 = puVar12[6];
      uStack_bc = puVar12[7];
      uStack_b8 = puVar12[8];
      uStack_b4 = puVar12[9];
      uStack_b0 = puVar12[10];
      if (local_108 == 8) goto LAB_00b20358;
      *puVar20 = local_d8;
      puVar20[1] = uStack_d4;
      puVar20[2] = uStack_d0;
      puVar20[3] = uStack_cc;
      puVar20[4] = uStack_c8;
      puVar20[5] = local_c4;
      puVar20[6] = uStack_c0;
      puVar20[7] = uStack_bc;
      puVar20[8] = uStack_b8;
      puVar20[9] = uStack_b4;
      puVar20[10] = uStack_b0;
      uVar10 = local_108;
    }
    else {
      uVar5 = *(undefined4 *)(iVar6 + 0x20);
      uVar14 = *(undefined4 *)(iVar6 + 0x24);
      uVar18 = *(undefined4 *)(iVar6 + 0x28);
      uVar19 = *(undefined4 *)(iVar6 + 0x2c);
      *puVar20 = *(undefined4 *)(iVar6 + 0x1c);
      puVar20[1] = uVar5;
      puVar20[2] = uVar14;
      puVar20[3] = uVar18;
      puVar20[4] = uVar19;
      uVar5 = *(undefined4 *)(iVar6 + 0x34);
      uVar14 = *(undefined4 *)(iVar6 + 0x38);
      uVar18 = *(undefined4 *)(iVar6 + 0x3c);
      uVar19 = *(undefined4 *)(iVar6 + 0x40);
      uVar17 = *(undefined4 *)(iVar6 + 0x44);
      puVar20[5] = *(undefined4 *)(iVar6 + 0x30);
      puVar20[6] = uVar5;
      puVar20[7] = uVar14;
      puVar20[8] = uVar18;
      puVar20[9] = uVar19;
      puVar20[10] = uVar17;
    }
    local_138 = 7;
    if (uVar10 != 7) {
      uVar5 = puVar20[1];
      uVar14 = puVar20[2];
      uVar18 = puVar20[3];
      *puVar4 = *puVar20;
      puVar4[1] = uVar5;
      puVar4[2] = uVar14;
      puVar4[3] = uVar18;
      uVar5 = puVar20[5];
      uVar14 = puVar20[6];
      uVar18 = puVar20[7];
      uVar19 = puVar20[8];
      puVar4[4] = puVar20[4];
      puVar4[5] = uVar5;
      puVar4[6] = uVar14;
      puVar4[7] = uVar18;
      puVar4[8] = uVar19;
      uVar13 = (uint)*(byte *)(param_2 + 0xb);
      bVar1 = (local_110 & 0xff) != uVar13;
      local_108 = uVar10;
      if (local_e8[0] == uVar13 || bVar1) {
        uStack_a4 = uStack_104;
        uStack_a0 = local_100;
        uStack_9c = local_fc;
        local_98 = local_f8;
        uStack_94 = uStack_f4;
        uStack_90 = uStack_f0;
        uStack_8c = uStack_ec;
        local_a8 = uVar10;
      }
      else {
        if (((uVar10 != 4) && (DAT_018d9130 < 4)) &&
           ((DAT_018d9ff8 - 1 < 2 ||
            ((DAT_018d9ff8 != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9ff0), cVar3 != '\0')))))) {
          iVar6 = FUN_016949d8(DAT_018d9ff0);
          if (iVar6 != 0) {
            local_7c = (undefined4 *)(DAT_018d9ff0 + 0x1c);
            uStack_6c = *local_7c;
            iStack_68 = *(int *)(DAT_018d9ff0 + 0x20);
            if (iStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187705c);
            }
            local_74 = &local_58;
            uStack_64 = *(undefined4 *)(DAT_018d9ff0 + 0x24);
            uStack_60 = *(undefined4 *)(DAT_018d9ff0 + 0x28);
            local_48 = &local_108;
            local_50 = local_e8;
            local_78 = &uStack_6c;
            local_84 = &local_78;
            local_5c = 0;
            local_54 = &local_50;
            local_80 = 1;
            local_70 = &DAT_018abb78;
            local_58 = &DAT_003569e0;
            local_44 = FUN_008ec630;
            local_4c = &LAB_008f4e10;
            FUN_00b21598(&local_84);
          }
        }
        local_a8 = 7;
      }
      iVar6 = param_2[9];
      piVar15 = (int *)(iVar6 + 0x18);
      if (*piVar15 == 0) {
        bVar2 = *(byte *)(iVar6 + 0x20);
        cVar3 = bVar2 - 4;
        if (bVar2 < 4) {
          cVar3 = '\x04';
        }
        iVar7 = 0xc;
        if ((cVar3 == '\x05') || (cVar3 == '\x04' && bVar2 == 3)) goto LAB_00b202a8;
      }
      else {
        iVar7 = 4;
        if (*piVar15 == 2) {
LAB_00b202a8:
          (**(code **)**(undefined4 **)((int)piVar15 + iVar7))();
        }
      }
      uVar10 = local_a8;
      *piVar15 = local_138;
      *(undefined4 *)(iVar6 + 0x1c) = uStack_134;
      *(uint *)(iVar6 + 0x20) = local_130;
      *(undefined4 *)(iVar6 + 0x24) = local_12c;
      *(undefined4 *)(iVar6 + 0x28) = uStack_128;
      *(undefined4 *)(iVar6 + 0x2c) = uStack_124;
      *(undefined4 *)(iVar6 + 0x30) = local_120;
      *(undefined4 *)(iVar6 + 0x34) = uStack_11c;
      *(undefined4 *)(iVar6 + 0x38) = uStack_118;
      *(undefined4 *)(iVar6 + 0x3c) = uStack_114;
      *(uint *)(iVar6 + 0x40) = local_110;
      *(undefined4 *)(iVar6 + 0x44) = uStack_10c;
      puVar8 = (uint *)((uint)&local_a8 | 4);
      local_40 = *puVar8;
      uStack_3c = puVar8[1];
      uStack_38 = puVar8[2];
      local_34 = puVar8[3];
      uStack_30 = puVar8[4];
      uStack_2c = puVar8[5];
      uStack_28 = puVar8[6];
      if (local_e8[0] == uVar13 || bVar1) goto LAB_00b20358;
      if (local_108 == 0) {
        uVar13 = local_100 & 0xff;
        uVar11 = uVar13 - 4;
        if (uVar13 < 4) {
          uVar11 = 4;
        }
        if (((uVar11 & 0xff) != 5) && (((uVar11 & 0xff) != 4 || (uVar13 != 3)))) goto LAB_00b20358;
      }
      else {
        local_148 = puVar4;
        if (local_108 != 2) goto LAB_00b20358;
      }
      (*(code *)**(undefined4 **)*local_148)();
      goto LAB_00b20358;
    }
    if ((local_110 & 0xff) == (uint)*(byte *)(param_2 + 0xb)) {
      iVar6 = param_2[9];
      piVar15 = (int *)(iVar6 + 0x18);
      if (*piVar15 == 0) {
        bVar2 = *(byte *)(iVar6 + 0x20);
        cVar3 = bVar2 - 4;
        if (bVar2 < 4) {
          cVar3 = '\x04';
        }
        iVar7 = 0xc;
        if ((cVar3 == '\x05') || (cVar3 == '\x04' && bVar2 == 3)) goto LAB_00b2021c;
      }
      else {
        iVar7 = 4;
        if (*piVar15 == 2) {
LAB_00b2021c:
          (**(code **)**(undefined4 **)((int)piVar15 + iVar7))();
        }
      }
      uVar10 = 7;
      *piVar15 = local_138;
      *(undefined4 *)(iVar6 + 0x1c) = uStack_134;
      *(uint *)(iVar6 + 0x20) = local_130;
      *(undefined4 *)(iVar6 + 0x24) = local_12c;
      *(undefined4 *)(iVar6 + 0x28) = uStack_128;
      *(undefined4 *)(iVar6 + 0x2c) = uStack_124;
      *(undefined4 *)(iVar6 + 0x30) = local_120;
      *(undefined4 *)(iVar6 + 0x34) = uStack_11c;
      *(undefined4 *)(iVar6 + 0x38) = uStack_118;
      *(undefined4 *)(iVar6 + 0x3c) = uStack_114;
      *(uint *)(iVar6 + 0x40) = local_110;
      *(undefined4 *)(iVar6 + 0x44) = uStack_10c;
      goto LAB_00b20358;
    }
    uVar10 = 2;
    iVar6 = param_2[9];
    uVar13 = param_2[5];
    if ((int)uVar13 < 0) {
      uVar10 = uVar13 ^ 0x80000000;
    }
    if (uVar10 == 0) {
      local_108 = param_2[5];
      uStack_104 = param_2[6];
      local_100 = param_2[7];
      local_fc = param_2[8];
    }
    else if (uVar10 == 1) {
      FUN_00ce0c0c((uint)&local_108 | 4,param_2[7],param_2[8]);
      local_108 = 0x80000001;
    }
    else {
      FUN_00ce0c0c(&local_108,param_2[6],param_2[7]);
      local_fc = CONCAT31(local_fc._1_3_,*(undefined1 *)(param_2 + 8));
    }
    iVar7 = *(int *)(iVar6 + 0x4c);
    uVar10 = *(uint *)(iVar7 + 0x80);
    puVar8 = (uint *)(iVar7 + 0x80);
    DataMemoryBarrier(0xb);
    while ((uVar10 & 1) == 0) {
      if (uVar10 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
      uVar13 = *puVar8;
      if (*puVar8 == uVar10) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
          if (bVar1) {
            *puVar8 = uVar10 + 2;
            DataMemoryBarrier(0xb);
            FUN_00d06a4c(*(undefined4 *)(iVar6 + 0x4c),&local_108);
            goto LAB_00b1ffac;
          }
          uVar13 = *puVar8;
        } while (*puVar8 == uVar10);
      }
      uVar10 = uVar13;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    local_a8 = local_108;
    uStack_a4 = uStack_104;
    uStack_a0 = local_100;
    uStack_9c = local_fc;
    if (local_108 != 0x80000002) {
      FUN_00ac6f0c(&local_a8);
    }
LAB_00b1ffac:
    if (local_138 == 0) {
      uVar10 = local_130 & 0xff;
      uVar13 = uVar10 - 4;
      if (uVar10 < 4) {
        uVar13 = 4;
      }
      puVar12 = &local_12c;
      if (((uVar13 & 0xff) == 5) || (((uVar13 & 0xff) == 4 && (uVar10 == 3)))) goto LAB_00b1fff8;
    }
    else {
      puVar12 = puVar20;
      if (local_138 == 2) {
LAB_00b1fff8:
        (*(code *)**(undefined4 **)*puVar12)();
      }
    }
    uVar10 = (uint)*(byte *)(param_2 + 0xb);
    iVar6 = param_2[9];
  }
  uVar10 = 1;
LAB_00b20358:
  pcVar16 = (char *)param_2[9];
  if (*pcVar16 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar16);
    if (bVar1) {
      *pcVar16 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00b20388;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar16);
LAB_00b20388:
  FUN_0128236c(pcVar16);
  FUN_0163af68(pcVar16,1,pcVar16);
  FUN_00ac6f0c(param_2 + 5);
  *param_1 = uVar10;
  param_1[1] = local_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  param_1[4] = local_34;
  param_1[5] = uStack_30;
  param_1[6] = uStack_2c;
  param_1[7] = uStack_28;
  *(undefined1 *)(param_2 + 10) = 1;
  return;
}

