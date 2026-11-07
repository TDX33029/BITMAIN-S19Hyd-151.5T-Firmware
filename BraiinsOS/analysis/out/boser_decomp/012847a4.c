// FUN_012847a4 @ 012847a4 size=2564 calls_out=17 calls_in=3
// strings: remaining data after end of TZif v1 data block | remaining data after end of TZif v1 data block | invalid time zone name char index | invalid DST indicator | invalid couple of standard/wall and UT/local indicators | invalid footer

void FUN_012847a4(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int extraout_r1;
  uint *puVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  undefined8 uVar32;
  int local_164;
  uint local_138;
  uint *local_12c;
  int local_128;
  undefined *local_120;
  uint local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  char *local_104;
  uint local_100;
  uint local_fc;
  uint *local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  byte *local_e0;
  undefined4 local_dc;
  char *local_d8;
  int local_d4;
  uint local_d0;
  uint local_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  char local_b4;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  char *pcStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint *puStack_78;
  uint local_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  byte *pbStack_60;
  undefined1 local_5c;
  char local_5b;
  undefined2 local_5a;
  int local_58;
  char *pcStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  undefined1 local_2c;
  
  local_10c = 0;
  local_114 = param_2;
  local_110 = param_3;
  FUN_01285254(&local_108,&local_114,1);
  if (local_b4 == '\x03') {
    param_1[2] = local_108;
    param_1[3] = local_104;
    param_1[4] = local_100;
    param_1[5] = local_fc;
    *param_1 = 1;
    return;
  }
  if (local_b4 == '\0') {
    if (local_110 != 0) {
      *param_1 = 1;
      param_1[2] = "remaining data after end of TZif v1 data block";
      param_1[3] = 0x2e;
      param_1[4] = 0x3b9aca04;
      return;
    }
    iVar13 = 0;
    local_138 = local_b8;
    local_118 = local_d0;
    cVar2 = '\0';
    pcVar11 = local_d8;
    uVar27 = local_c4;
    uVar7 = uStack_c0;
    uVar16 = uStack_bc;
    iVar12 = local_d4;
  }
  else {
    FUN_01285254(&local_108,&local_114,0);
    if (local_b4 == '\x03') {
      param_1[2] = local_108;
      param_1[3] = local_104;
      param_1[4] = local_100;
      param_1[5] = local_fc;
      *param_1 = 1;
      return;
    }
    local_164 = local_110;
    local_138 = local_b8;
    local_118 = local_d0;
    iVar13 = local_114;
    pcVar11 = local_d8;
    uVar27 = local_c4;
    uVar7 = uStack_c0;
    uVar16 = uStack_bc;
    iVar12 = local_d4;
    cVar2 = local_b4;
  }
  iVar5 = local_dc;
  pbVar10 = local_e0;
  iVar1 = local_e4;
  local_128 = local_e8;
  uVar4 = local_ec;
  iVar23 = local_f0;
  uVar20 = local_f4;
  local_12c = local_f8;
  uVar8 = local_fc;
  uVar29 = local_100;
  pcVar21 = local_104;
  iVar28 = local_108;
  uVar30 = uVar7 * 0x10;
  uVar19 = 0;
  if ((0xfffffff < uVar7) || (0x7ffffff8 < uVar30)) {
LAB_012849d0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,uVar30);
  }
  if (uVar30 == 0) {
    iVar6 = 8;
    uVar7 = 0;
  }
  else {
    uVar19 = 8;
    iVar6 = FUN_01298504(uVar30,8);
    if (iVar6 == 0) goto LAB_012849d0;
  }
  local_a4 = 0;
  local_ac = uVar7;
  local_a8 = iVar6;
  if (local_118 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01c25be8);
  }
  uVar7 = FUN_01bf1250(pcVar21,local_118);
  if (uVar8 < uVar7) {
    uVar7 = uVar8;
  }
  if (uVar7 != 0) {
    iVar26 = 0;
    uVar30 = 0;
    do {
      bVar17 = *(byte *)(uVar29 + uVar30);
      FUN_012856f4(&local_108,iVar28,local_118,cVar2);
      pcVar21 = local_104;
      iVar3 = local_108;
      if (local_100 != 0x3b9aca10) {
        param_1[4] = local_100;
        param_1[2] = local_108;
        param_1[3] = local_104;
        param_1[5] = local_fc;
        *param_1 = 1;
        goto LAB_012850ac;
      }
      if (uVar30 == local_ac) {
        FUN_015f5b78(&local_ac);
        iVar6 = local_a8;
      }
      local_a4 = uVar30 + 1;
      piVar14 = (int *)(iVar6 + iVar26);
      *piVar14 = iVar3;
      iVar26 = iVar26 + 0x10;
      piVar14[1] = (int)pcVar21;
      *(uint *)(iVar6 + uVar30 * 0x10 + 8) = (uint)bVar17;
      iVar28 = iVar28 + local_118;
      uVar30 = local_a4;
    } while (local_a4 < uVar7);
  }
  uVar19 = 0;
  uVar7 = local_118;
  if ((0xfffffff < uVar16) || (uVar7 = uVar16 * 0x10, 0x7ffffffc < uVar7)) {
LAB_01284b24:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,uVar7);
  }
  if (uVar7 == 0) {
    iVar28 = 4;
    local_a0 = 0;
  }
  else {
    uVar19 = 4;
    iVar28 = FUN_01298504(uVar7,4);
    if (iVar28 == 0) goto LAB_01284b24;
    local_a0 = uVar16;
  }
  local_98 = 0;
  uVar30 = (uVar20 / 6) * 6;
  local_9c = iVar28;
  iVar6 = uVar20 * -0x55555555;
  if (5 < uVar30) {
    piVar14 = (int *)((uint)&local_108 | 4);
    local_120 = &DAT_01c25c18;
    do {
      uVar29 = local_98;
      uVar19 = 0;
      uVar7 = *local_12c;
      if ((char)local_12c[1] != '\0') {
        if ((char)local_12c[1] == '\x01') {
          uVar19 = 1;
          goto LAB_01284c04;
        }
        uVar19 = 0x15;
        pcVar11 = "invalid DST indicator";
LAB_01284d00:
        *param_1 = 1;
        param_1[2] = pcVar11;
        param_1[3] = uVar19;
        param_1[4] = 0x3b9aca04;
        goto LAB_01285098;
      }
LAB_01284c04:
      uVar8 = (uint)*(byte *)((int)local_12c + 5);
      if (local_138 <= uVar8) {
LAB_01284cec:
        uVar19 = 0x21;
        pcVar11 = "invalid time zone name char index";
        goto LAB_01284d00;
      }
      if (uVar4 < uVar8) {
        uVar27 = uVar4;
LAB_01285190:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar8,uVar27,uVar4,local_120);
      }
      if (uVar4 == uVar8) goto LAB_01284cec;
      uVar20 = 0;
      local_12c = (uint *)((int)local_12c + 6);
      iVar6 = iVar23 + uVar8;
      while (*(char *)(iVar6 + uVar20) != '\0') {
        uVar20 = uVar20 + 1;
        if (uVar4 - uVar8 == uVar20) goto LAB_01284cec;
      }
      if ((CARRY4(uVar20,uVar8)) || (uVar4 < uVar20 + uVar8)) {
        local_120 = &DAT_01c25c28;
        uVar27 = uVar20 + uVar8;
        goto LAB_01285190;
      }
      if (uVar20 == 0) {
        iVar6 = 0;
      }
      FUN_01288988(&local_108,
                   uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18,uVar19,iVar6,uVar20);
      if (local_108 != 0) {
        puVar15 = (uint *)((uint)&local_58 | 4);
        *puVar15 = local_100;
        puVar15[1] = local_fc;
        puVar15[2] = (uint)local_f8;
        puVar15[3] = local_f4;
        uVar27 = puVar15[1];
        uVar7 = puVar15[2];
        uVar16 = puVar15[3];
        param_1[2] = *puVar15;
        param_1[3] = uVar27;
        param_1[4] = uVar7;
        param_1[5] = uVar16;
        *param_1 = 1;
        goto LAB_01285098;
      }
      local_58 = *piVar14;
      pcStack_54 = (char *)piVar14[1];
      uStack_50 = piVar14[2];
      uStack_4c = piVar14[3];
      if (uVar29 == local_a0) {
        FUN_018fa978(&local_a0);
        iVar28 = local_9c;
      }
      piVar9 = (int *)(iVar28 + uVar29 * 0x10);
      *piVar9 = local_58;
      piVar9[1] = (int)pcStack_54;
      piVar9[2] = uStack_50;
      piVar9[3] = uStack_4c;
      local_98 = uVar29 + 1;
      uVar7 = uStack_50;
      iVar6 = local_58;
    } while (uVar29 != (uVar30 - 6) / 6);
  }
  uVar19 = 0;
  if ((0xfffffff < uVar27) || (uVar7 = uVar27 * 0x10, 0x7ffffff8 < uVar7)) {
LAB_01284d1c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,uVar7);
  }
  if (uVar7 == 0) {
    iVar28 = 8;
    uVar27 = 0;
  }
  else {
    uVar19 = 8;
    iVar28 = FUN_01298504(uVar7,8,iVar6);
    if (iVar28 == 0) goto LAB_01284d1c;
  }
  local_8c = 0;
  uVar7 = local_118 + 4;
  local_94 = uVar27;
  local_90 = iVar28;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01c25bf8);
  }
  FUN_01bf0fd4(iVar1,uVar7);
  uVar27 = iVar1 - extraout_r1;
  if (uVar7 <= uVar27) {
    iVar23 = 0;
    uVar30 = 0;
    do {
      if (0xfffffffb < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_118,uVar7,&DAT_01c25c08);
      }
      FUN_012856f4(&local_108,local_128,local_118,cVar2);
      pcVar21 = local_104;
      iVar1 = local_108;
      if (local_100 != 0x3b9aca10) {
        param_1[4] = local_100;
        param_1[2] = local_108;
        param_1[3] = local_104;
        param_1[5] = local_fc;
        *param_1 = 1;
        goto LAB_01285080;
      }
      uVar29 = *(uint *)(local_128 + local_118);
      if (uVar30 == local_94) {
        FUN_015f5b78(&local_94);
        iVar28 = local_90;
      }
      uVar27 = uVar27 - uVar7;
      local_128 = local_128 + uVar7;
      piVar14 = (int *)(iVar28 + iVar23);
      *piVar14 = iVar1;
      iVar23 = iVar23 + 0x10;
      piVar14[1] = (int)pcVar21;
      iVar1 = uVar30 * 0x10;
      uVar30 = uVar30 + 1;
      *(uint *)(iVar28 + iVar1 + 8) =
           uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
      local_8c = uVar30;
    } while (uVar7 <= uVar27);
  }
  if (uVar16 == 0) {
LAB_01284ed8:
    if (iVar13 == 0) {
LAB_012850c8:
      local_5b = '\x03';
LAB_012850d0:
      FUN_01288ab0(param_1,&local_ac,&local_a0,&local_94,&local_88);
      return;
    }
    FUN_012fbd94(&local_108,iVar13,local_164);
    if (local_108 != 0) {
      param_1[2] = local_104;
      param_1[3] = local_100;
      param_1[4] = 0x3b9aca0f;
      *param_1 = 1;
      goto LAB_01285080;
    }
    if (((local_100 != 0) && (*local_104 == '\n')) && (local_104[local_100 - 1] == '\n')) {
      uVar32 = FUN_0128ea60();
      iVar13 = (int)((ulonglong)uVar32 >> 0x20);
      pcVar11 = (char *)uVar32;
      if (iVar13 == 0) {
        iVar13 = FUN_0128568c(pcVar11,0);
        if (iVar13 == 0) goto LAB_012850c8;
      }
      else if ((*pcVar11 != ':') && (iVar12 = FUN_0128568c(pcVar11), iVar12 == 0)) {
        FUN_0128b87c(&local_108,pcVar11,iVar13,cVar2 == '\x02');
        if (local_dc._1_1_ == '\x03') {
          local_58 = local_108;
          pcStack_54 = local_104;
          uStack_50 = local_100;
          uStack_4c = local_fc;
          param_1[2] = local_108;
          param_1[3] = local_104;
          param_1[4] = local_100;
          param_1[5] = local_fc;
          *param_1 = 1;
          goto LAB_01285080;
        }
        local_58 = local_108;
        pcStack_54 = local_104;
        uStack_50 = local_100;
        uStack_4c = local_fc;
        puStack_48 = local_f8;
        local_44 = local_f4;
        iStack_40 = local_f0;
        uStack_3c = local_ec;
        iStack_38 = local_e8;
        iStack_34 = local_e4;
        pbStack_30 = local_e0;
        local_2c = (undefined1)local_dc;
        local_88 = local_108;
        pcStack_84 = local_104;
        uStack_80 = local_100;
        uStack_7c = local_fc;
        puStack_78 = local_f8;
        local_74 = local_f4;
        iStack_70 = local_f0;
        uStack_6c = local_ec;
        iStack_68 = local_e8;
        iStack_64 = local_e4;
        pbStack_60 = local_e0;
        local_5c = (undefined1)local_dc;
        local_5a = local_dc._2_2_;
        local_5b = local_dc._1_1_;
        goto LAB_012850d0;
      }
    }
    uVar19 = 0xe;
    pcVar11 = "invalid footer";
  }
  else {
    pbVar24 = pbVar10 + iVar5;
    pcVar21 = pcVar11;
    do {
      uVar16 = uVar16 - 1;
      bVar17 = 1;
      pcVar22 = (char *)0x0;
      if (pbVar10 == (byte *)0x0) {
        pbVar10 = (byte *)0x0;
      }
      else {
        bVar31 = pbVar10 != pbVar24;
        pbVar25 = pbVar10;
        if (bVar31) {
          pbVar25 = pbVar10 + 1;
          bVar17 = *pbVar10;
        }
        pbVar10 = (byte *)0x0;
        if (bVar31) {
          bVar17 = bVar17 == 0;
          pbVar10 = pbVar25;
        }
      }
      if (pcVar21 == (char *)0x0) {
        bVar31 = false;
      }
      else {
        bVar31 = false;
        if (pcVar21 != pcVar11 + iVar12) {
          pcVar22 = pcVar21 + 1;
          bVar31 = *pcVar21 == '\x01';
        }
      }
      bVar18 = 2;
      if ((bVar17 & bVar31) != 0) {
        bVar18 = 1;
      }
      if (uVar16 == 0) {
        bVar18 = bVar17 & bVar31;
      }
      pcVar21 = pcVar22;
    } while (bVar18 == 2);
    if ((bVar18 & 1) == 0) goto LAB_01284ed8;
    uVar19 = 0x37;
    pcVar11 = "invalid couple of standard/wall and UT/local indicators";
  }
  param_1[2] = pcVar11;
  *param_1 = 1;
  param_1[3] = uVar19;
  param_1[4] = 0x3b9aca04;
LAB_01285080:
  FUN_0134aee0(local_94,local_90,8,0x10);
  iVar28 = local_9c;
LAB_01285098:
  FUN_0134aee0(local_a0,iVar28,4,0x10);
LAB_012850ac:
  FUN_0134aee0(local_ac,local_a8,8,0x10);
  return;
}

