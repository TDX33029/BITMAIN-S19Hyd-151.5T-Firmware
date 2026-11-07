// FUN_00beaf28 @ 00beaf28 size=2288 calls_out=18 calls_in=1
// strings: 

void FUN_00beaf28(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 *local_160;
  undefined4 *local_158;
  int local_148;
  undefined4 uStack_144;
  uint local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int local_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 **local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined **local_84;
  undefined *local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined *local_68;
  byte **local_64;
  byte *local_60;
  undefined1 *local_5c;
  int *local_58;
  code *local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  puVar4 = (undefined4 *)((uint)&local_118 | 4);
  puVar19 = (undefined4 *)((uint)&local_148 | 4);
  local_158 = &local_10c;
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
LAB_00beafd8:
    param_2[0xc] = uVar5;
    *(undefined1 *)(param_2 + 0x18) = 0;
LAB_00beaff0:
    param_2[0xd] = uVar5;
    *(undefined1 *)(param_2 + 0xf) = 0;
LAB_00beb004:
    param_2[0xe] = uVar5;
LAB_00beb008:
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
      goto LAB_00beafd8;
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
      goto LAB_00beaff0;
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
      goto LAB_00beb004;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886278);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886278);
    case 3:
      uVar5 = param_2[0xe];
      goto LAB_00beb008;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe)) {
    case 0:
      iVar6 = param_2[0xc];
      param_2[0xd] = iVar6;
      goto LAB_00beb2f8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018775b4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018775b4);
    case 3:
      iVar6 = param_2[0xd];
      goto LAB_00beb2f8;
    }
  }
  local_160 = param_2 + 0x19;
  bVar2 = FUN_0163c8bc(param_2 + 0x10,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0xf) = 4;
    *(undefined1 *)local_160 = 3;
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
  uVar9 = param_2[5];
  iVar6 = param_2[0xc];
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (-1 < (int)uVar9) {
    uVar9 = 2;
  }
  *(undefined1 *)(param_2 + 0x19) = 1;
  *(undefined1 *)(param_2 + 0x18) = 1;
  param_2[9] = iVar6;
  *(char *)(param_2 + 0xb) = (char)uVar9;
  while (cVar3 = FUN_00d07630(iVar6 + 0x50,uVar9), cVar3 == '\x03') {
    iVar10 = param_2[9];
    iVar6 = *(int *)(iVar10 + 0x18);
    *(undefined4 *)(iVar10 + 0x18) = 8;
    if (iVar6 == 8) {
      *(undefined1 *)(param_2 + 0xe) = 0;
      iVar6 = param_2[9] + 0x48;
      param_2[0xc] = iVar6;
      param_2[0xd] = iVar6;
LAB_00beb2f8:
      FUN_00d40168(&local_118,iVar6,*param_3);
      uVar8 = 1;
      iVar6 = 1;
      if (local_118 == 9) {
        uVar8 = 3;
      }
      *(undefined1 *)(param_2 + 0xe) = uVar8;
      if (local_118 == 9) {
        *param_1 = 8;
        *(undefined1 *)(param_2 + 10) = 4;
        return;
      }
      puVar11 = (undefined4 *)((uint)&local_118 | 4);
      local_e8 = *puVar11;
      uStack_e4 = puVar11[1];
      uStack_e0 = puVar11[2];
      uStack_dc = puVar11[3];
      uStack_d8 = puVar11[4];
      local_d4 = puVar11[5];
      uStack_d0 = puVar11[6];
      uStack_cc = puVar11[7];
      uStack_c8 = puVar11[8];
      uStack_c4 = puVar11[9];
      uStack_c0 = puVar11[10];
      if (local_118 == 8) goto LAB_00beb890;
      *puVar19 = local_e8;
      puVar19[1] = uStack_e4;
      puVar19[2] = uStack_e0;
      puVar19[3] = uStack_dc;
      puVar19[4] = uStack_d8;
      puVar19[5] = local_d4;
      puVar19[6] = uStack_d0;
      puVar19[7] = uStack_cc;
      puVar19[8] = uStack_c8;
      puVar19[9] = uStack_c4;
      puVar19[10] = uStack_c0;
      iVar6 = local_118;
    }
    else {
      uVar5 = *(undefined4 *)(iVar10 + 0x20);
      uVar13 = *(undefined4 *)(iVar10 + 0x24);
      uVar17 = *(undefined4 *)(iVar10 + 0x28);
      uVar18 = *(undefined4 *)(iVar10 + 0x2c);
      *puVar19 = *(undefined4 *)(iVar10 + 0x1c);
      puVar19[1] = uVar5;
      puVar19[2] = uVar13;
      puVar19[3] = uVar17;
      puVar19[4] = uVar18;
      uVar5 = *(undefined4 *)(iVar10 + 0x34);
      uVar13 = *(undefined4 *)(iVar10 + 0x38);
      uVar17 = *(undefined4 *)(iVar10 + 0x3c);
      uVar18 = *(undefined4 *)(iVar10 + 0x40);
      uVar16 = *(undefined4 *)(iVar10 + 0x44);
      puVar19[5] = *(undefined4 *)(iVar10 + 0x30);
      puVar19[6] = uVar5;
      puVar19[7] = uVar13;
      puVar19[8] = uVar17;
      puVar19[9] = uVar18;
      puVar19[10] = uVar16;
    }
    local_148 = 7;
    if (iVar6 != 7) {
      uVar5 = puVar19[1];
      uVar13 = puVar19[2];
      uVar17 = puVar19[3];
      *puVar4 = *puVar19;
      puVar4[1] = uVar5;
      puVar4[2] = uVar13;
      puVar4[3] = uVar17;
      uVar5 = puVar19[5];
      uVar13 = puVar19[6];
      uVar17 = puVar19[7];
      uVar18 = puVar19[8];
      puVar4[4] = puVar19[4];
      puVar4[5] = uVar5;
      puVar4[6] = uVar13;
      puVar4[7] = uVar17;
      puVar4[8] = uVar18;
      uVar9 = (uint)*(byte *)(param_2 + 0xb);
      bVar1 = (local_120 & 0xff) != uVar9;
      local_118 = iVar6;
      if (local_f8[0] == uVar9 || bVar1) {
        uStack_b4 = uStack_114;
        uStack_b0 = local_110;
        uStack_ac = local_10c;
        local_a8 = local_108;
        uStack_a4 = uStack_104;
        uStack_a0 = uStack_100;
        uStack_9c = uStack_fc;
        local_b8 = iVar6;
      }
      else {
        if (((iVar6 != 4) && (DAT_018d9130 < 4)) &&
           ((DAT_018d9ff8 - 1 < 2 ||
            ((DAT_018d9ff8 != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9ff0), cVar3 != '\0')))))) {
          iVar6 = FUN_016949d8(DAT_018d9ff0);
          if (iVar6 != 0) {
            local_8c = (undefined4 *)(DAT_018d9ff0 + 0x1c);
            uStack_7c = *local_8c;
            iStack_78 = *(int *)(DAT_018d9ff0 + 0x20);
            if (iStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187705c);
            }
            local_84 = &local_68;
            uStack_74 = *(undefined4 *)(DAT_018d9ff0 + 0x24);
            uStack_70 = *(undefined4 *)(DAT_018d9ff0 + 0x28);
            local_58 = &local_118;
            local_60 = local_f8;
            local_88 = &uStack_7c;
            local_94 = &local_88;
            local_6c = 0;
            local_64 = &local_60;
            local_90 = 1;
            local_80 = &DAT_018abb78;
            local_68 = &DAT_003569e0;
            local_54 = FUN_008ec630;
            local_5c = &LAB_008f4e10;
            FUN_00b21598(&local_94);
          }
        }
        local_b8 = 7;
      }
      iVar10 = param_2[9];
      piVar14 = (int *)(iVar10 + 0x18);
      if (*piVar14 == 0) {
        bVar2 = *(byte *)(iVar10 + 0x20);
        cVar3 = bVar2 - 4;
        if (bVar2 < 4) {
          cVar3 = '\x04';
        }
        iVar6 = 0xc;
        if ((cVar3 == '\x05') || (cVar3 == '\x04' && bVar2 == 3)) goto LAB_00beb7e0;
      }
      else {
        iVar6 = 4;
        if (*piVar14 == 2) {
LAB_00beb7e0:
          (**(code **)**(undefined4 **)((int)piVar14 + iVar6))();
        }
      }
      iVar6 = local_b8;
      *piVar14 = local_148;
      *(undefined4 *)(iVar10 + 0x1c) = uStack_144;
      *(uint *)(iVar10 + 0x20) = local_140;
      *(undefined4 *)(iVar10 + 0x24) = local_13c;
      *(undefined4 *)(iVar10 + 0x28) = uStack_138;
      *(undefined4 *)(iVar10 + 0x2c) = uStack_134;
      *(undefined4 *)(iVar10 + 0x30) = local_130;
      *(undefined4 *)(iVar10 + 0x34) = uStack_12c;
      *(undefined4 *)(iVar10 + 0x38) = uStack_128;
      *(undefined4 *)(iVar10 + 0x3c) = uStack_124;
      *(uint *)(iVar10 + 0x40) = local_120;
      *(undefined4 *)(iVar10 + 0x44) = uStack_11c;
      piVar14 = (int *)((uint)&local_b8 | 4);
      local_40 = *piVar14;
      iStack_3c = piVar14[1];
      iStack_38 = piVar14[2];
      local_34 = piVar14[3];
      iStack_30 = piVar14[4];
      iStack_2c = piVar14[5];
      iStack_28 = piVar14[6];
      if (local_f8[0] == uVar9 || bVar1) goto LAB_00beb890;
      if (local_118 == 0) {
        local_110 = local_110 & 0xff;
        uVar9 = local_110 - 4;
        if (local_110 < 4) {
          uVar9 = 4;
        }
        if (((uVar9 & 0xff) != 5) && (((uVar9 & 0xff) != 4 || (local_110 != 3)))) goto LAB_00beb890;
      }
      else {
        local_158 = puVar4;
        if (local_118 != 2) goto LAB_00beb890;
      }
      (*(code *)**(undefined4 **)*local_158)();
      goto LAB_00beb890;
    }
    if ((local_120 & 0xff) == (uint)*(byte *)(param_2 + 0xb)) {
      iVar10 = param_2[9];
      piVar14 = (int *)(iVar10 + 0x18);
      if (*piVar14 == 0) {
        bVar2 = *(byte *)(iVar10 + 0x20);
        cVar3 = bVar2 - 4;
        if (bVar2 < 4) {
          cVar3 = '\x04';
        }
        iVar6 = 0xc;
        if ((cVar3 == '\x05') || (cVar3 == '\x04' && bVar2 == 3)) goto LAB_00beb754;
      }
      else {
        iVar6 = 4;
        if (*piVar14 == 2) {
LAB_00beb754:
          (**(code **)**(undefined4 **)((int)piVar14 + iVar6))();
        }
      }
      iVar6 = 7;
      *piVar14 = local_148;
      *(undefined4 *)(iVar10 + 0x1c) = uStack_144;
      *(uint *)(iVar10 + 0x20) = local_140;
      *(undefined4 *)(iVar10 + 0x24) = local_13c;
      *(undefined4 *)(iVar10 + 0x28) = uStack_138;
      *(undefined4 *)(iVar10 + 0x2c) = uStack_134;
      *(undefined4 *)(iVar10 + 0x30) = local_130;
      *(undefined4 *)(iVar10 + 0x34) = uStack_12c;
      *(undefined4 *)(iVar10 + 0x38) = uStack_128;
      *(undefined4 *)(iVar10 + 0x3c) = uStack_124;
      *(uint *)(iVar10 + 0x40) = local_120;
      *(undefined4 *)(iVar10 + 0x44) = uStack_11c;
      goto LAB_00beb890;
    }
    uVar9 = 2;
    uVar12 = param_2[5];
    iVar6 = param_2[9];
    if ((int)uVar12 < 0) {
      uVar9 = uVar12 ^ 0x80000000;
    }
    if (uVar9 == 0) {
      local_50 = param_2[5];
      uStack_4c = param_2[6];
      uStack_48 = param_2[7];
      local_44 = param_2[8];
    }
    else if (uVar9 == 1) {
      FUN_00ce0c0c((uint)&local_50 | 4,param_2[7],param_2[8]);
      local_50 = 0x80000001;
    }
    else {
      FUN_00ce0c0c(&local_50,param_2[6],param_2[7]);
      local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_2 + 8));
    }
    iVar10 = *(int *)(iVar6 + 0x4c);
    uVar9 = *(uint *)(iVar10 + 0x80);
    puVar7 = (uint *)(iVar10 + 0x80);
    DataMemoryBarrier(0xb);
    while ((uVar9 & 1) == 0) {
      if (uVar9 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
      uVar12 = *puVar7;
      if (*puVar7 == uVar9) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
          if (bVar1) {
            *puVar7 = uVar9 + 2;
            DataMemoryBarrier(0xb);
            FUN_00d06a4c(*(undefined4 *)(iVar6 + 0x4c),&local_50);
            goto LAB_00beb4e4;
          }
          uVar12 = *puVar7;
        } while (*puVar7 == uVar9);
      }
      uVar9 = uVar12;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    if (local_50 != 0x80000002) {
      FUN_00ac6f0c(&local_50);
    }
LAB_00beb4e4:
    if (local_148 == 0) {
      uVar9 = local_140 & 0xff;
      uVar12 = uVar9 - 4;
      if (uVar9 < 4) {
        uVar12 = 4;
      }
      puVar11 = &local_13c;
      if (((uVar12 & 0xff) == 5) || (((uVar12 & 0xff) == 4 && (uVar9 == 3)))) goto LAB_00beb530;
    }
    else {
      puVar11 = puVar19;
      if (local_148 == 2) {
LAB_00beb530:
        (*(code *)**(undefined4 **)*puVar11)();
      }
    }
    uVar9 = (uint)*(byte *)(param_2 + 0xb);
    iVar6 = param_2[9];
  }
  iVar6 = 1;
LAB_00beb890:
  pcVar15 = (char *)param_2[9];
  if (*pcVar15 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar15);
    if (bVar1) {
      *pcVar15 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00beb8c0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar15);
LAB_00beb8c0:
  FUN_0128236c(pcVar15);
  FUN_0163af68(pcVar15,1,pcVar15);
  FUN_00ac6f0c(param_2 + 5);
  *param_1 = iVar6;
  param_1[1] = local_40;
  param_1[2] = iStack_3c;
  param_1[3] = iStack_38;
  param_1[4] = local_34;
  param_1[5] = iStack_30;
  param_1[6] = iStack_2c;
  param_1[7] = iStack_28;
  *(undefined1 *)(param_2 + 10) = 1;
  return;
}

