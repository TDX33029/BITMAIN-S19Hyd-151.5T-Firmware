// FUN_00c65aa8 @ 00c65aa8 size=2264 calls_out=17 calls_in=2
// strings: tuning_started | tuning_started | tuning_started

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c65aa8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  char ******ppppppcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char ******ppppppcVar18;
  undefined4 uVar19;
  char ******ppppppcVar20;
  undefined4 uVar21;
  int unaff_r8;
  int unaff_r9;
  char *pcVar22;
  int *unaff_r11;
  bool bVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  char *******local_f0;
  char *******local_e4;
  uint local_e0;
  char *******local_d0;
  undefined1 *local_c8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char ******local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  char ******local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  char *******local_70;
  char *******local_6c;
  undefined1 *local_68;
  char ******local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  undefined4 local_48;
  char *******local_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 != 5) {
      uVar14 = FUN_00f36124(param_2,&uStack_25,&DAT_01873e68);
      *param_1 = uVar14;
      param_1[2] = &DAT_3b9aca00;
LAB_00c66148:
      if ((bVar1 & 6) == 4) {
        return;
      }
      FUN_00c01f94(param_2);
      return;
    }
    local_90 = *(int *)(param_2 + 4);
    local_8c = *(undefined4 *)(param_2 + 8);
    iVar12 = *(int *)(param_2 + 0xc);
    local_b0 = CONCAT31(local_b0._1_3_,6);
    local_78 = 0;
    if (local_90 != 0) {
      local_78 = iVar12;
    }
    local_98 = (char ******)(uint)(local_90 != 0);
    uVar7 = (uint)&local_48 | 1;
    puVar8 = (undefined4 *)((uint)&local_70 | 4);
    puVar9 = (undefined4 *)((uint)&local_48 | 4);
    uVar11 = (uint)&local_b0 | 1;
    local_e4 = (char *******)0x0;
    local_e0 = 8;
    local_84 = 0;
    local_94 = 0;
    local_c8 = &DAT_3b9aca00;
    pcVar22 = &DAT_00567b50;
    bVar2 = false;
    local_88 = local_98;
    local_80 = local_90;
    local_7c = local_8c;
LAB_00c65e84:
    FUN_00c3b8fc(local_54,&local_98);
    if (local_54[0] != 0) {
      puVar13 = (undefined4 *)(local_54[0] + local_4c * 0x18);
      iVar10 = local_54[0] + local_4c * 0xc;
      unaff_r8 = *(int *)(iVar10 + 0x10c);
      unaff_r11 = *(int **)(iVar10 + 0x110);
      unaff_r9 = *(int *)(iVar10 + 0x114);
      uVar14 = puVar13[1];
      uVar16 = puVar13[2];
      uVar17 = puVar13[3];
      uVar19 = puVar13[4];
      uVar21 = puVar13[5];
      *puVar9 = *puVar13;
      puVar9[1] = uVar14;
      puVar9[2] = uVar16;
      puVar9[3] = uVar17;
      puVar9[4] = uVar19;
      puVar9[5] = uVar21;
      local_70 = local_48;
      local_6c = local_44;
      local_68 = local_40;
      uStack_60 = uStack_38;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
    }
    if (!(local_54[0] == 0 || unaff_r8 == -0x80000000)) {
      if ((char)local_b0 != '\x06') {
        FUN_00d4fc54(&local_b0);
      }
      local_b0 = *puVar8;
      uStack_ac = puVar8[1];
      uStack_a8 = puVar8[2];
      uStack_a4 = puVar8[3];
      uStack_a0 = puVar8[4];
      uStack_9c = puVar8[5];
      if (unaff_r9 == 0xf) {
        iVar10 = thunk_FUN_016dd50a(unaff_r11,&DAT_00357135,0xf);
        if (iVar10 != 0) goto LAB_00c65cd4;
        iVar10 = 2;
      }
      else if (unaff_r9 == 0xe) {
        iVar10 = thunk_FUN_016dd50a(unaff_r11,"tuning_started",0xe);
        if (iVar10 != 0) goto LAB_00c65cd4;
        iVar10 = 1;
      }
      else if ((unaff_r9 == 4) && (*unaff_r11 == 0x72657469)) {
        iVar10 = 0;
      }
      else {
LAB_00c65cd4:
        iVar10 = 3;
      }
      if (unaff_r8 != 0) {
        thunk_FUN_016d3fb4(unaff_r11);
      }
      cVar3 = (char)local_b0;
      if (iVar10 == 3) {
        bVar23 = (char)local_b0 == '\x06';
        local_b0 = CONCAT31(local_b0._1_3_,6);
        if (bVar23) {
          local_d0 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
          goto LAB_00c66038;
        }
        local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
        FUN_016dd1aa(uVar7,uVar11,0x17);
        FUN_00c01f94(&local_48);
        goto LAB_00c65e84;
      }
      if (iVar10 == 0) {
        if (bVar2) {
          local_6c = (char *******)&DAT_00000004;
LAB_00c6634c:
          local_48 = (char *******)&local_70;
          local_44 = (char *******)&DAT_0157d360;
          local_70 = (char *******)pcVar22;
          local_d0 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00c66038;
        }
        local_b0 = CONCAT31(local_b0._1_3_,6);
        if (cVar3 == '\x06') {
          uVar14 = FUN_00c4c3ec(&DAT_00565810,0x10);
          uVar24 = CONCAT44(uVar14,1);
        }
        else {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar7,uVar11,0x17);
          uVar24 = FUN_00c64c8c(&local_48);
        }
        local_d0 = (char *******)(uVar24 >> 0x20);
        if ((uVar24 & 1) != 0) goto LAB_00c66038;
        bVar2 = true;
        goto LAB_00c65e84;
      }
      if (iVar10 == 1) {
        if (local_c8 != &DAT_3b9aca00) {
          local_6c = (char *******)&DAT_0000000e;
          pcVar22 = "tuning_started";
          goto LAB_00c6634c;
        }
        local_b0 = CONCAT31(local_b0._1_3_,6);
        if (cVar3 == '\x06') {
          local_d0 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        }
        else {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar7,uVar11,0x17);
          FUN_00c4c440(&local_70,&local_48);
          local_c8 = local_68;
          if (local_68 != &DAT_3b9aca00) goto code_r0x00c65dac;
          local_d0 = local_70;
        }
        goto LAB_00c66038;
      }
      if (local_e0 != 8) {
        local_6c = (char *******)&DAT_0000000f;
        pcVar22 = &DAT_00357135;
        goto LAB_00c6634c;
      }
      local_b0 = CONCAT31(local_b0._1_3_,6);
      if (cVar3 == '\x06') {
        local_6c = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      }
      else {
        local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
        FUN_016dd1aa(uVar7,uVar11,0x17);
        FUN_00bb28c8(&local_70,&local_48);
        if ((char)local_70 == '\0') {
          local_e0 = (uint)local_70 >> 8 & 0xff;
          goto LAB_00c65e84;
        }
      }
      local_d0 = local_6c;
      goto LAB_00c66038;
    }
    if (!bVar2) {
      local_44 = (char *******)&DAT_0157d360;
      local_48 = (char *******)&local_70;
      local_6c = (char *******)&DAT_00000004;
      local_70 = (char *******)&DAT_00567b50;
      local_d0 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_48);
      goto LAB_00c66038;
    }
    if (local_c8 == &DAT_3b9aca00) {
      FUN_00c4c398(&local_48,"tuning_started",0xe);
      local_c8 = local_40;
      if (local_40 == &DAT_3b9aca00) {
        local_d0 = local_48;
        goto LAB_00c66038;
      }
      local_f0 = local_48;
      local_e4 = local_44;
    }
    if (local_e0 == 8) {
      FUN_00bb29c4(&local_48);
      if ((char)local_48 == '\x01') {
        local_d0 = local_44;
LAB_00c66038:
        param_1[2] = &DAT_3b9aca00;
        *param_1 = local_d0;
        while( true ) {
          FUN_00c3b8fc(&local_48,&local_98);
          puVar6 = local_40;
          pppppppcVar4 = local_48;
          if (local_48 == (char *******)0x0) break;
          local_70 = &local_98;
          if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
            thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
          }
          FUN_00c436d0(pppppppcVar4 + (int)puVar6 * 6);
        }
LAB_00c6612c:
        if ((char)local_b0 != '\x06') {
          FUN_00c01f94(&local_b0);
        }
        goto LAB_00c66148;
      }
      local_e0._0_1_ = (undefined1)((uint)local_48 >> 8);
    }
    *(undefined1 *)(param_1 + 5) = (undefined1)local_e0;
    param_1[4] = local_d0;
    *param_1 = local_f0;
    param_1[1] = local_e4;
    param_1[2] = local_c8;
    if (local_78 != 0) {
      uVar14 = FUN_00f2c2f0(iVar12,&DAT_01887430,&DAT_018ab990);
      param_1[2] = &DAT_3b9aca00;
      *param_1 = uVar14;
    }
    while( true ) {
      FUN_00c3b8fc(&local_48,&local_98);
      puVar6 = local_40;
      pppppppcVar4 = local_48;
      if (local_48 == (char *******)0x0) break;
      local_70 = &local_98;
      if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
        thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
      }
      FUN_00c436d0(pppppppcVar4 + (int)puVar6 * 6);
    }
    goto LAB_00c6612c;
  }
  iVar12 = *(int *)(param_2 + 0xc);
  iVar10 = *(int *)(param_2 + 4);
  ppppppcVar15 = *(char *******)(param_2 + 8);
  ppppppcVar20 = ppppppcVar15 + iVar12 * 6;
  ppppppcVar18 = ppppppcVar15;
  local_70 = (char *******)ppppppcVar15;
  local_6c = (char *******)ppppppcVar15;
  local_68 = (undefined1 *)iVar10;
  local_64 = ppppppcVar20;
  if (iVar12 == 0) {
LAB_00c65bd0:
    local_48 = (char *******)FUN_00f2c2f0(0,&DAT_01877800,&DAT_018ab990);
LAB_00c65bf0:
    param_1[2] = &DAT_3b9aca00;
  }
  else {
    ppppppcVar18 = ppppppcVar15 + 6;
    local_6c = (char *******)ppppppcVar18;
    if (*(char *)ppppppcVar15 == '\x06') goto LAB_00c65bd0;
    uVar11 = (uint)&local_b0 | 1;
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)ppppppcVar15);
    FUN_016dd1aa(uVar11,(char *)((int)ppppppcVar15 + 1),0x17);
    uVar25 = FUN_00c64c8c(&local_b0);
    uVar14 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar7 = (int)uVar25 + 1;
    if (uVar7 == 2) {
      *param_1 = uVar14;
      param_1[2] = &DAT_3b9aca00;
      goto LAB_00c65bf8;
    }
    if ((uVar7 & 1) == 0) goto LAB_00c65bd0;
    if (iVar12 == 1) {
LAB_00c65fe4:
      local_48 = (char *******)FUN_00f2c2f0(1,&DAT_01877800,&DAT_018ab990);
      goto LAB_00c65bf0;
    }
    ppppppcVar18 = ppppppcVar15 + 0xc;
    local_6c = (char *******)ppppppcVar18;
    if (*(char *)(ppppppcVar15 + 6) == '\x06') goto LAB_00c65fe4;
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)(ppppppcVar15 + 6));
    FUN_016dd1aa(uVar11,(char *)((int)ppppppcVar15 + 0x19),0x17);
    FUN_00c4c440(&local_48,&local_b0);
    pppppppcVar5 = local_44;
    pppppppcVar4 = local_48;
    if (local_40 == &DAT_3b9aca00) goto LAB_00c65bf0;
    if (iVar12 != 2) {
      ppppppcVar18 = ppppppcVar15 + 0x12;
      local_6c = (char *******)ppppppcVar18;
      if (*(char *)(ppppppcVar15 + 0xc) != '\x06') {
        local_b0 = CONCAT31(local_b0._1_3_,*(char *)(ppppppcVar15 + 0xc));
        FUN_016dd1aa(uVar11,(char *)((int)ppppppcVar15 + 0x31),0x17);
        FUN_00bb28c8(&local_48,&local_b0);
        if ((char)local_48 == '\0') {
          param_1[1] = pppppppcVar5;
          *(undefined1 *)(param_1 + 5) = local_48._1_1_;
          param_1[4] = uVar14;
          *param_1 = pppppppcVar4;
          param_1[2] = local_40;
          if (iVar12 == 3) goto LAB_00c65bf8;
          local_48 = (char *******)FUN_00f2c2f0(iVar12,&DAT_0188738c,&DAT_018ab990);
        }
        else {
          local_48 = local_44;
        }
        goto LAB_00c65bf0;
      }
    }
    local_48 = (char *******)FUN_00f2c2f0(2,&DAT_01877800,&DAT_018ab990);
    param_1[2] = &DAT_3b9aca00;
  }
  *param_1 = local_48;
LAB_00c65bf8:
  FUN_00ce0380(ppppppcVar18,((uint)((int)ppppppcVar20 - (int)ppppppcVar18) >> 3) * -0x55555555);
  if (iVar10 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(ppppppcVar15);
  return;
code_r0x00c65dac:
  local_f0 = local_70;
  local_e4 = local_6c;
  goto LAB_00c65e84;
}

