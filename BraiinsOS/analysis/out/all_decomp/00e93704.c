// FUN_00e93704 @ 00e93704 size=1636 calls_out=18 calls_in=1
// strings: ed25519_signature | ed25519_signature | ed25519_signature | ed25519_signature

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e93704(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 uVar15;
  undefined1 uVar14;
  undefined1 uVar16;
  char *pcVar17;
  ushort uVar18;
  int unaff_r11;
  char **ppcVar19;
  char *local_138;
  undefined4 uStack_134;
  char *pcStack_130;
  undefined4 uStack_12c;
  char *local_128;
  undefined4 uStack_124;
  char *pcStack_120;
  undefined4 uStack_11c;
  char *pcStack_118;
  undefined4 local_114;
  char *pcStack_110;
  undefined4 uStack_10c;
  char *pcStack_108;
  undefined4 uStack_104;
  undefined1 local_100;
  char *local_f8;
  undefined1 local_f4;
  char *local_f0;
  undefined4 local_ec;
  char *pcStack_e8;
  undefined4 uStack_e4;
  char *local_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  undefined4 local_cc;
  char *pcStack_c8;
  undefined4 uStack_c4;
  char *pcStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  char *local_b0;
  undefined4 local_ac;
  char *pcStack_a8;
  undefined4 uStack_a4;
  char *local_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  char *pcStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  byte local_70;
  char cStack_6f;
  undefined1 uStack_6e;
  char *pcStack_6d;
  undefined1 uStack_69;
  char *local_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 uStack_5c;
  char *local_58;
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 local_4c;
  char *pcStack_48;
  undefined4 local_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  char *local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  pcVar17 = param_2 + 0xc;
  while( true ) {
    uVar18 = (ushort)unaff_r11;
    if (param_2[0x2c] == '\0') {
      pbVar5 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar5;
        uVar8 = *(undefined4 *)(param_2 + 0x20);
        uVar10 = *(undefined4 *)(param_2 + 0x24);
        local_70 = 5;
        goto LAB_00e9381c;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar1 = *pbVar5;
      uVar12 = (uint)bVar1;
      *(byte **)(param_2 + 0x18) = pbVar5 + 1;
      iVar11 = *(int *)(param_2 + 0x24) + 1;
      if (uVar12 == 10) {
        *(int *)(param_2 + 0x28) = iVar11 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar11 = 0;
      }
      param_2[0x2d] = bVar1;
      param_2[0x2c] = '\x01';
      *(int *)(param_2 + 0x24) = iVar11;
    }
    else {
      uVar12 = (uint)(byte)param_2[0x2d];
    }
    if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) break;
    param_2[0x2c] = '\0';
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      unaff_r11 = *(int *)(param_2 + 0x14);
      if (unaff_r11 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(pcVar17);
      }
      *(char *)(*(int *)(param_2 + 0x10) + unaff_r11) = (char)uVar12;
      *(int *)(param_2 + 0x14) = unaff_r11 + 1;
    }
  }
  if (uVar12 != 0x5b) {
    if (uVar12 != 0x7b) {
      iVar11 = FUN_005b85f0(param_2,&local_70,&DAT_018568f8);
      goto LAB_00e93cec;
    }
    cVar2 = param_2[0x30];
    param_2[0x30] = cVar2 + -1;
    if ((char)(cVar2 + -1) == '\0') goto LAB_00e93d44;
    FUN_00ef8de4(pcVar17);
    ppcVar19 = &local_f8;
    uVar15 = 0;
    uVar14 = 0;
    uVar16 = 0;
    local_f4 = 1;
    local_f8 = param_2;
    do {
      FUN_005e5af4(&local_70,ppcVar19);
      pcVar17 = local_f8;
      if (local_70 == 1) goto LAB_00e93aa8;
      if (cStack_6f != '\x01') {
        puVar7 = &DAT_0057a25d;
        goto LAB_00e93c14;
      }
      cVar2 = local_f8[0x2d];
      piVar9 = (int *)(local_f8 + 0xc);
      cVar3 = local_f8[0x2c];
      local_f8[0x2c] = '\0';
      if ((cVar3 == '\x01') && (*piVar9 != -0x80000000)) {
        iVar11 = *(int *)(local_f8 + 0x14);
        if (iVar11 == *piVar9) {
          FUN_006029c0(piVar9);
        }
        *(char *)(*(int *)(pcVar17 + 0x10) + iVar11) = cVar2;
        *(int *)(pcVar17 + 0x14) = iVar11 + 1;
      }
      pcVar17[8] = '\0';
      pcVar17[9] = '\0';
      pcVar17[10] = '\0';
      pcVar17[0xb] = '\0';
      FUN_00ef8e3c(&local_70,piVar9,pcVar17);
      iVar6 = CONCAT13(uStack_69,pcStack_6d._1_3_);
      if (CONCAT13(pcStack_6d._0_1_,CONCAT12(uStack_6e,CONCAT11(cStack_6f,local_70))) == 2)
      goto LAB_00e93c40;
      if ((local_68 == (char *)0x11) &&
         (iVar11 = thunk_FUN_016dd50a(iVar6,"ed25519_signature",0x11), iVar11 == 0)) {
        iVar6 = FUN_005b8a40(pcVar17);
        if (iVar6 != 0) goto LAB_00e93c40;
        FUN_00e93e74(&local_70,pcVar17);
        if ((local_70 & 1) != 0) goto LAB_00e93aa8;
        iVar11 = CONCAT13(uStack_69,pcStack_6d._1_3_);
        uVar16 = pcStack_6d._0_1_;
        uVar18 = CONCAT11(uStack_6e,cStack_6f);
        ppcVar19 = (char **)(uint)uVar18;
        local_f0 = local_68;
        local_ec = uStack_64;
        pcStack_e8 = local_60;
        uStack_e4 = uStack_5c;
        local_e0 = local_58;
        uStack_dc = uStack_54;
        pcStack_d8 = pcStack_50;
        uStack_d4 = local_4c;
        pcStack_d0 = pcStack_48;
        local_cc = local_44;
        pcStack_c8 = pcStack_40;
        uStack_c4 = uStack_3c;
        pcStack_c0 = local_38;
        uStack_bc = uStack_34;
        local_b8 = local_30;
        local_b0 = local_f0;
        local_ac = local_ec;
        pcStack_a8 = pcStack_e8;
        uStack_a4 = uStack_e4;
        local_a0 = local_e0;
        uStack_9c = uStack_dc;
        pcStack_98 = pcStack_d8;
        uStack_94 = uStack_d4;
        pcStack_90 = pcStack_d0;
        local_8c = local_cc;
        pcStack_88 = pcStack_c8;
        uStack_84 = uStack_c4;
        pcStack_80 = pcStack_c0;
        uStack_7c = uStack_bc;
        local_78 = local_b8;
        goto LAB_00e93b6c;
      }
      iVar6 = FUN_005b5438(pcVar17);
    } while (iVar6 == 0);
LAB_00e93c3c:
    uVar16 = uVar14;
    goto LAB_00e93c40;
  }
  cVar2 = param_2[0x30];
  param_2[0x30] = cVar2 + -1;
  if ((char)(cVar2 + -1) == '\0') {
LAB_00e93d44:
    uVar8 = *(undefined4 *)(param_2 + 0x20);
    uVar10 = *(undefined4 *)(param_2 + 0x24);
    local_70 = 0x18;
LAB_00e9381c:
    cStack_6f = 0;
    uStack_6e = 0;
    pcStack_6d = (char *)((uint)pcStack_6d & 0xffffff00);
    uVar8 = FUN_0157c50c(&local_70,uVar8,uVar10);
    *(undefined4 *)(param_1 + 4) = uVar8;
    *param_1 = 1;
    return;
  }
  FUN_00ef8de4(pcVar17);
  local_ec = CONCAT31(local_ec._1_3_,1);
  local_f0 = param_2;
  FUN_005e5eec(&local_70,&local_f0);
  if (local_70 == 1) {
LAB_00e939d8:
    iVar6 = CONCAT13(uStack_69,pcStack_6d._1_3_);
LAB_00e939dc:
    bVar4 = true;
    local_f8._1_3_ = (undefined3)iVar6;
    local_f4 = (undefined1)((uint)iVar6 >> 0x18);
  }
  else {
    if (cStack_6f != '\x01') {
      iVar6 = FUN_00f2c2f0(0,&DAT_01856850,&DAT_018ab990);
      goto LAB_00e939dc;
    }
    FUN_00e93e74(&local_70,local_f0);
    if ((local_70 & 1) != 0) goto LAB_00e939d8;
    uVar18 = CONCAT11(uStack_6e,cStack_6f);
    local_b0 = local_68;
    local_ac = uStack_64;
    pcStack_a8 = local_60;
    uStack_a4 = uStack_5c;
    local_a0 = local_58;
    uStack_9c = uStack_54;
    pcStack_98 = pcStack_50;
    uStack_94 = local_4c;
    pcStack_90 = pcStack_48;
    local_8c = local_44;
    pcStack_88 = pcStack_40;
    uStack_84 = uStack_3c;
    pcStack_80 = local_38;
    uStack_7c = uStack_34;
    bVar4 = false;
    local_f4 = uStack_69;
    local_f8 = pcStack_6d;
    pcVar17 = local_f8;
    local_78 = local_30;
    local_f8._1_3_ = (undefined3)((uint)pcStack_6d >> 8);
    iVar6 = CONCAT13(uStack_69,local_f8._1_3_);
    local_f8 = pcVar17;
  }
  uVar16 = SUB41(pcVar17,0);
  param_2[0x30] = param_2[0x30] + '\x01';
  iVar11 = FUN_005b8f24(param_2);
  if (!bVar4) {
    if (iVar11 == 0) {
      local_138 = local_b0;
      uStack_134 = local_ac;
      pcStack_130 = pcStack_a8;
      uStack_12c = uStack_a4;
      local_128 = local_a0;
      uStack_124 = uStack_9c;
      pcStack_120 = pcStack_98;
      uStack_11c = uStack_94;
      pcStack_118 = pcStack_90;
      local_114 = local_8c;
      pcStack_110 = pcStack_88;
      uStack_10c = uStack_84;
      pcStack_108 = pcStack_80;
      uStack_104 = uStack_7c;
      local_100 = local_78;
      goto LAB_00e93c8c;
    }
    goto LAB_00e93cec;
  }
  if (iVar11 != 0) {
    FUN_005c3974();
    goto LAB_00e93ce0;
  }
LAB_00e93ce8:
  iVar11 = iVar6;
LAB_00e93cec:
  uVar8 = FUN_011da120(iVar11,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = uVar8;
  return;
LAB_00e93b6c:
  FUN_005e5af4(&local_70,&local_f8);
  pcVar17 = local_f8;
  uVar14 = uVar16;
  if (local_70 != 0) goto LAB_00e93aa8;
  if (cStack_6f == '\x01') {
    pcVar13 = local_f8 + 0xc;
    FUN_00ef8de4(pcVar13);
    pcVar17[8] = '\0';
    pcVar17[9] = '\0';
    pcVar17[10] = '\0';
    pcVar17[0xb] = '\0';
    FUN_00ef8e3c(&local_70,pcVar13,pcVar17);
    iVar6 = CONCAT13(uStack_69,pcStack_6d._1_3_);
    if (CONCAT13(pcStack_6d._0_1_,CONCAT12(uStack_6e,CONCAT11(cStack_6f,local_70))) != 2) {
      if ((local_68 != (char *)0x11) ||
         (iVar6 = thunk_FUN_016dd50a(iVar6,"ed25519_signature",0x11), iVar6 != 0))
      goto LAB_00e93b54;
      puVar7 = &DAT_00582dbd;
      uVar15 = uVar16;
LAB_00e93c14:
      local_ac = 0x11;
      uStack_69 = 1;
      local_70 = (byte)&local_b0;
      cStack_6f = (char)((uint)&local_b0 >> 8);
      uStack_6e = (undefined1)((uint)&local_b0 >> 0x10);
      pcStack_6d._0_1_ = (undefined1)((uint)&local_b0 >> 0x18);
      pcStack_6d = (char *)CONCAT31(0x57d360,pcStack_6d._0_1_);
      local_b0 = "ed25519_signature";
      iVar6 = FUN_00f56780(puVar7,&local_70);
      uVar14 = uVar15;
      goto LAB_00e93c3c;
    }
    goto LAB_00e93c40;
  }
  local_70 = (byte)local_f0;
  cStack_6f = (char)((uint)local_f0 >> 8);
  uStack_6e = (undefined1)((uint)local_f0 >> 0x10);
  pcStack_6d._0_1_ = (undefined1)((uint)local_f0 >> 0x18);
  pcStack_6d._1_3_ = (undefined3)local_ec;
  uStack_69 = (undefined1)((uint)local_ec >> 0x18);
  local_68 = pcStack_e8;
  uStack_64 = uStack_e4;
  local_60 = local_e0;
  uStack_5c = uStack_dc;
  local_58 = pcStack_d8;
  uStack_54 = uStack_d4;
  pcStack_50 = pcStack_d0;
  local_4c = local_cc;
  pcStack_48 = pcStack_c8;
  local_44 = uStack_c4;
  pcStack_40 = pcStack_c0;
  uStack_3c = uStack_bc;
  bVar4 = false;
  local_38 = (char *)CONCAT31(local_38._1_3_,local_b8);
  iVar6 = iVar11;
  goto LAB_00e93c44;
LAB_00e93aa8:
  uVar16 = uVar14;
  iVar6 = CONCAT13(uStack_69,pcStack_6d._1_3_);
LAB_00e93c40:
  uVar18 = (ushort)ppcVar19;
  bVar4 = true;
LAB_00e93c44:
  param_2[0x30] = param_2[0x30] + '\x01';
  iVar11 = FUN_005b8cec(param_2);
  if (!bVar4) {
    if (iVar11 == 0) {
      local_138 = (char *)CONCAT13(pcStack_6d._0_1_,CONCAT12(uStack_6e,CONCAT11(cStack_6f,local_70))
                                  );
      uStack_134 = CONCAT13(uStack_69,pcStack_6d._1_3_);
      pcStack_130 = local_68;
      uStack_12c = uStack_64;
      local_128 = local_60;
      uStack_124 = uStack_5c;
      pcStack_120 = local_58;
      uStack_11c = uStack_54;
      pcStack_118 = pcStack_50;
      local_114 = local_4c;
      pcStack_110 = pcStack_48;
      uStack_10c = local_44;
      pcStack_108 = pcStack_40;
      uStack_104 = uStack_3c;
      local_100 = local_38._0_1_;
LAB_00e93c8c:
      *(char **)(param_1 + 8) = local_138;
      *(undefined4 *)(param_1 + 0xc) = uStack_134;
      *(char **)(param_1 + 0x10) = pcStack_130;
      *(undefined4 *)(param_1 + 0x14) = uStack_12c;
      *(char **)(param_1 + 0x18) = local_128;
      *(undefined4 *)(param_1 + 0x1c) = uStack_124;
      *(char **)(param_1 + 0x20) = pcStack_120;
      *(undefined4 *)(param_1 + 0x24) = uStack_11c;
      *(char **)(param_1 + 0x28) = pcStack_118;
      *(undefined4 *)(param_1 + 0x2c) = local_114;
      *(char **)(param_1 + 0x30) = pcStack_110;
      *(undefined4 *)(param_1 + 0x34) = uStack_10c;
      *(char **)(param_1 + 0x38) = pcStack_108;
      *(undefined4 *)(param_1 + 0x3c) = uStack_104;
      param_1[0x40] = local_100;
      param_1[3] = uVar16;
      *(ushort *)(param_1 + 1) = uVar18;
      *param_1 = 0;
      *(int *)(param_1 + 4) = iVar6;
      return;
    }
    goto LAB_00e93cec;
  }
  if (iVar11 != 0) {
    FUN_005c3974();
LAB_00e93ce0:
    thunk_FUN_016d3fb4(iVar11);
  }
  goto LAB_00e93ce8;
LAB_00e93b54:
  iVar6 = FUN_005b5438(pcVar17);
  bVar4 = true;
  if (iVar6 != 0) goto LAB_00e93c44;
  goto LAB_00e93b6c;
}

