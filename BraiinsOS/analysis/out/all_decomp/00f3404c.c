// FUN_00f3404c @ 00f3404c size=1900 calls_out=15 calls_in=1
// strings: share_ratio_bp | private | share_ratio_bp | private | share_ratio_bp | private

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f3404c(ushort *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  ushort uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  ushort uVar20;
  uint unaff_r8;
  int unaff_r9;
  char *pcVar21;
  uint unaff_r10;
  int unaff_r11;
  bool bVar22;
  uint local_100;
  uint local_fc;
  char *local_f4;
  uint local_f0;
  uint local_ec;
  byte local_dc;
  uint local_d8;
  uint local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  ushort local_76;
  uint local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 uStack_6a;
  int iStack_68;
  char *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  char *local_48;
  char *local_44;
  int local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  uVar20 = (ushort)unaff_r8;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    param_1[0] = 0;
    param_1[1] = 2;
    FUN_00f33f88(param_2);
    return;
  }
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_98 = *(int *)(param_2 + 4);
      local_94 = *(undefined4 *)(param_2 + 8);
      iVar9 = *(int *)(param_2 + 0xc);
      local_b8 = CONCAT31(local_b8._1_3_,6);
      local_80 = 0;
      if (local_98 != 0) {
        local_80 = iVar9;
      }
      local_a0 = (uint)(local_98 != 0);
      uVar16 = 2;
      uVar5 = (uint)&local_48 | 1;
      puVar6 = (uint *)((uint)&local_70 | 4);
      puVar7 = (undefined4 *)((uint)&local_48 | 4);
      local_ec = 3;
      local_8c = 0;
      local_f0 = 0;
      local_9c = 0;
      local_f4 = "share_ratio_bp";
      local_90 = local_a0;
      local_88 = local_98;
      local_84 = local_94;
LAB_00f34124:
      do {
        FUN_00f2cd78(local_54,&local_a0);
        if (local_54[0] != 0) {
          puVar10 = (undefined4 *)(local_54[0] + local_4c * 0x18);
          iVar8 = local_54[0] + local_4c * 0xc;
          unaff_r9 = *(int *)(iVar8 + 0x10c);
          unaff_r10 = *(uint *)(iVar8 + 0x110);
          unaff_r11 = *(int *)(iVar8 + 0x114);
          uVar11 = puVar10[1];
          uVar12 = puVar10[2];
          uVar14 = puVar10[3];
          uVar17 = puVar10[4];
          uVar19 = puVar10[5];
          *puVar7 = *puVar10;
          puVar7[1] = uVar11;
          puVar7[2] = uVar12;
          puVar7[3] = uVar14;
          puVar7[4] = uVar17;
          puVar7[5] = uVar19;
          local_70._0_2_ = (ushort)local_48;
          local_70._2_2_ = (ushort)((uint)local_48 >> 0x10);
          local_6c = SUB42(local_44,0);
          uStack_6a = (undefined2)((uint)local_44 >> 0x10);
          iStack_68 = local_40;
          local_64 = local_3c;
          uStack_60 = uStack_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
        }
        if (local_54[0] == 0 || unaff_r9 == -0x80000000) {
LAB_00f3447c:
          if (local_ec == 3) {
            local_ec = 2;
          }
          unaff_r10 = (local_d8 & 0xffff) + local_ec * 0x10000;
          uVar20 = 0;
          if (uVar16 != 2) {
            uVar20 = uVar16;
          }
          bVar22 = local_80 != 0;
          local_76 = uVar20;
          local_74 = unaff_r10;
          if (bVar22) {
            unaff_r10 = FUN_00f2c2f0(iVar9,&DAT_01887430,&DAT_018ab990);
            FUN_00f33df4(&local_76);
          }
          while( true ) {
            FUN_00f2cd78(&local_48,&local_a0);
            iVar9 = local_40;
            pcVar18 = local_48;
            if (local_48 == (char *)0x0) break;
            local_70 = &local_a0;
            if (*(int *)(local_48 + local_40 * 0xc + 0x10c) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(local_48 + local_40 * 0xc + 0x110));
            }
            FUN_00f2cf28(pcVar18 + iVar9 * 0x18);
          }
          if ((char)local_b8 == '\x06') goto LAB_00f3451c;
          goto LAB_00f34514;
        }
        FUN_00f30340(&local_b8);
        local_b8 = *puVar6;
        uStack_b4 = puVar6[1];
        uStack_b0 = puVar6[2];
        uStack_ac = puVar6[3];
        uStack_a8 = puVar6[4];
        uStack_a4 = puVar6[5];
        if (unaff_r11 == 7) {
          iVar8 = thunk_FUN_016dd50a(unaff_r10,"private",7);
          uVar20 = 0;
          bVar4 = 0;
          if (iVar8 != 0) goto LAB_00f34348;
        }
        else if ((unaff_r11 == 0xe) &&
                (iVar8 = thunk_FUN_016dd50a(unaff_r10,"share_ratio_bp",0xe), iVar8 == 0)) {
          uVar20 = 0;
          bVar4 = 1;
        }
        else {
LAB_00f34348:
          local_fc = FUN_00f2c294(unaff_r10,unaff_r11,&DAT_0187e860,2);
          uVar20 = 1;
          bVar4 = local_dc;
        }
        local_dc = bVar4;
        if (unaff_r9 != 0) {
          thunk_FUN_016d3fb4(unaff_r10);
        }
        if (uVar20 != 0) {
          unaff_r10 = local_fc;
          goto LAB_00f34630;
        }
        if (local_dc == 2) goto LAB_00f3447c;
        uVar3 = (char)local_b8;
        if ((local_dc & 1) != 0) {
          uVar20 = (ushort)&local_b8;
          if (uVar16 != 2) {
            local_6c = 0xe;
            goto LAB_00f34724;
          }
          uVar13 = local_b8 & 0xff;
          local_b8 = CONCAT31(local_b8._1_3_,6);
          if (uVar13 == 6) {
            unaff_r10 = FUN_00f2c790();
LAB_00f3462c:
            uVar20 = (ushort)&local_b8;
            goto LAB_00f34630;
          }
          local_48 = (char *)CONCAT31(local_48._1_3_,uVar3);
          FUN_016dd1aa(uVar5,(uint)&local_b8 | 1,0x17);
          if (uVar13 == 0) {
            FUN_00f33f88(&local_48);
            uVar16 = 0;
          }
          else {
            FUN_00f362e0(&local_70,&local_48);
            unaff_r10 = CONCAT22(uStack_6a,local_6c);
            if ((ushort)local_70 == 0) {
              uVar16 = 1;
            }
            if ((ushort)local_70 != 0) goto LAB_00f34630;
            local_c0 = local_c0 & 0xffff0000 | (uint)local_70._2_2_;
          }
          unaff_r10 = local_c0;
          local_d8 = local_c0;
          goto LAB_00f34124;
        }
        if (local_ec != 3) {
          local_6c = 7;
          local_f4 = "private";
LAB_00f34724:
          uStack_6a = 0;
          local_70._0_2_ = (ushort)local_f4;
          local_70._2_2_ = (ushort)((uint)local_f4 >> 0x10);
          local_48 = (char *)&local_70;
          local_44 = (char *)&DAT_0157d360;
          unaff_r10 = FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00f3462c;
        }
        uVar13 = local_b8 & 0xff;
        local_b8 = CONCAT31(local_b8._1_3_,6);
        if (uVar13 == 6) {
          local_100 = FUN_00f2c790();
          goto LAB_00f346d0;
        }
        local_48 = (char *)CONCAT31(local_48._1_3_,uVar3);
        FUN_016dd1aa(uVar5,(uint)&local_b8 | 1,0x17);
        if (uVar13 != 0) goto code_r0x00f34304;
        local_ec = 2;
        FUN_00f33f88(&local_48);
      } while( true );
    }
    unaff_r10 = FUN_00f36124(param_2,&uStack_25,&DAT_0187e938);
    bVar22 = true;
    goto LAB_00f3451c;
  }
  iVar8 = *(int *)(param_2 + 0xc);
  iVar9 = *(int *)(param_2 + 4);
  pcVar21 = *(char **)(param_2 + 8);
  pcVar18 = pcVar21 + iVar8 * 0x18;
  local_44 = pcVar21;
  local_48 = pcVar21;
  local_40 = iVar9;
  local_3c = pcVar18;
  if (iVar8 == 0) {
LAB_00f34408:
    uVar11 = 0;
    pcVar15 = local_44;
LAB_00f3440c:
    unaff_r10 = FUN_00f2c2f0(uVar11,&DAT_0187e800,&DAT_018ab990);
LAB_00f34424:
    uVar20 = (ushort)unaff_r8;
    bVar22 = true;
  }
  else {
    pcVar15 = pcVar21 + 0x18;
    cVar2 = *pcVar21;
    local_44 = pcVar15;
    if (cVar2 == '\x06') goto LAB_00f34408;
    unaff_r8 = (uint)&local_b8 | 1;
    local_b8 = CONCAT31(local_b8._1_3_,cVar2);
    FUN_016dd1aa(unaff_r8,pcVar21 + 1,0x17);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        uVar5 = (local_b8 >> 8 & 0xff) << 0x10;
      }
      else {
        unaff_r10 = FUN_00f36124(&local_b8,&uStack_25,&DAT_0187e908);
        uVar5 = 0;
      }
      FUN_00f3615c(&local_b8);
      if (cVar2 == '\x01') goto LAB_00f345ac;
      goto LAB_00f34424;
    }
    uVar5 = 0x20000;
    FUN_00f33f88(&local_b8);
LAB_00f345ac:
    if (iVar8 == 1) {
LAB_00f345cc:
      uVar11 = 1;
      goto LAB_00f3440c;
    }
    cVar2 = pcVar21[0x18];
    pcVar15 = pcVar21 + 0x30;
    local_44 = pcVar15;
    if (cVar2 == '\x06') goto LAB_00f345cc;
    local_b8 = CONCAT31(local_b8._1_3_,cVar2);
    FUN_016dd1aa(unaff_r8,pcVar21 + 0x19,0x17);
    if (cVar2 == '\0') {
      FUN_00f33f88(&local_b8);
      uVar20 = 0;
      uVar13 = uVar5;
    }
    else {
      FUN_00f362e0(&local_70,&local_b8);
      uVar13 = (uint)local_70._2_2_;
      unaff_r8 = 1;
      uVar20 = 1;
      unaff_r10 = CONCAT22(uStack_6a,local_6c);
      if ((ushort)local_70 != 0) goto LAB_00f34424;
    }
    bVar22 = false;
    unaff_r10 = uVar13 & 0xffff | uVar5;
    local_70._2_2_ = (ushort)uVar13;
    local_6c = (undefined2)(uVar5 >> 0x10);
    local_70._0_2_ = uVar20;
    if (iVar8 != 2) {
      unaff_r10 = FUN_00f2c2f0(iVar8,&DAT_0188738c,&DAT_018ab990);
      FUN_00f33df4(&local_70);
      bVar22 = true;
    }
  }
  iVar8 = ((uint)((int)pcVar18 - (int)pcVar15) >> 3) * -0x55555555 + 1;
  while( true ) {
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
    FUN_00f3615c(pcVar15);
    pcVar15 = pcVar15 + 0x18;
  }
  if (iVar9 != 0) {
    thunk_FUN_016d3fb4(pcVar21);
  }
LAB_00f3451c:
  if ((bVar1 & 6) != 4) {
    FUN_00f3615c(param_2);
  }
  if (!bVar22) {
    param_1[1] = uVar20;
  }
  *param_1 = (ushort)bVar22;
  *(uint *)(param_1 + 2) = unaff_r10;
  return;
code_r0x00f34304:
  if (uVar13 == 1) {
    local_ec = (uint)local_48 >> 8 & 0xff;
  }
  else {
    local_100 = FUN_00f36124(&local_48,&uStack_25,&DAT_0187e908);
    local_ec = local_f0;
  }
  FUN_00f3615c(&local_48);
  local_f0 = local_ec;
  if (uVar13 != 1) goto LAB_00f346d0;
  goto LAB_00f34124;
LAB_00f346d0:
  uVar20 = (ushort)&local_b8;
  unaff_r10 = local_100;
LAB_00f34630:
  while( true ) {
    FUN_00f2cd78(&local_48,&local_a0);
    iVar9 = local_40;
    pcVar18 = local_48;
    if (local_48 == (char *)0x0) break;
    local_70 = &local_a0;
    if (*(int *)(local_48 + local_40 * 0xc + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(local_48 + local_40 * 0xc + 0x110));
    }
    FUN_00f2cf28(pcVar18 + iVar9 * 0x18);
  }
  bVar22 = true;
  if ((char)local_b8 != '\x06') {
LAB_00f34514:
    FUN_00f33f88(&local_b8);
  }
  goto LAB_00f3451c;
}

