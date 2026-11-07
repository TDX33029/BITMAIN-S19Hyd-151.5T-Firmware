// FUN_00f56884 @ 00f56884 size=5108 calls_out=34 calls_in=0
// strings: Action | SupportArchive | Action | internally tagged enum Action | internally tagged enum Action | internally tagged enum Action

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f56884(undefined4 *param_1,undefined **param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **extraout_r1;
  int extraout_r2;
  undefined *puVar24;
  undefined *puVar25;
  undefined4 *puVar26;
  char *pcVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined **ppuVar31;
  bool bVar32;
  uint local_19c;
  undefined **local_198;
  undefined **local_194;
  undefined **local_190;
  uint local_18c;
  undefined1 local_184;
  int local_128;
  int iStack_124;
  undefined *puStack_120;
  undefined **ppuStack_11c;
  undefined **ppuStack_118;
  undefined4 uStack_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined **local_108;
  undefined **local_104;
  int local_100;
  int local_fc;
  undefined *local_f8;
  undefined **ppuStack_f4;
  undefined **local_f0;
  undefined4 local_ec;
  char *local_e8;
  uint local_e4;
  undefined1 local_e0;
  undefined2 local_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined4 local_d0;
  undefined4 local_cc;
  char *local_c8;
  uint local_c4;
  undefined1 local_c0;
  char *local_b8;
  uint local_b4;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined *local_a4;
  undefined **ppuStack_a0;
  undefined **local_98;
  undefined **local_94;
  char *local_90;
  uint local_8c;
  undefined *local_88;
  undefined **ppuStack_84;
  undefined **local_80;
  undefined1 local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined **local_5c;
  undefined *local_58;
  undefined **local_54;
  undefined **local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined **local_34;
  undefined **local_30;
  uint uStack_2c;
  
  puVar22 = param_2[5];
  if (puVar22 < param_2[4]) {
    do {
      uVar28 = (byte)param_2[3][(int)puVar22] - 9;
      if ((0x17 < uVar28) || ((1 << (uVar28 & 0xff) & 0x800013U) == 0)) {
        if ((byte)param_2[3][(int)puVar22] != 0x7b) {
          ppuVar20 = (undefined **)FUN_00f4db6c(param_2,&local_48,&DAT_0187f248);
          goto LAB_00f57630;
        }
        cVar1 = *(char *)(param_2 + 7);
        *(char *)(param_2 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_48 = (undefined **)0x18;
          goto LAB_00f568e8;
        }
        param_2[5] = puVar22 + 1;
        iVar6 = thunk_FUN_016de0ee(puVar22 + 1,puVar22,0x2c0);
        puVar26 = (undefined4 *)(iVar6 + extraout_r2);
        local_10c = 1;
        local_110 = param_2;
        if (*(char *)(puVar26 + 4) == '\0') {
          FUN_015f62e4(&local_48);
          *(undefined1 *)(puVar26 + 4) = 1;
          *puVar26 = local_48;
          puVar26[1] = local_44;
          puVar26[2] = (undefined **)local_40;
          puVar26[3] = local_40._4_4_;
        }
        local_f8 = (undefined *)*puVar26;
        ppuStack_f4 = (undefined **)puVar26[1];
        local_ec = puVar26[3];
        *puVar26 = local_f8 + 1;
        puVar26[1] = (undefined1 *)((int)ppuStack_f4 + (uint)((undefined *)0xfffffffe < local_f8));
        local_f0 = (undefined **)puVar26[2];
        local_104 = (undefined **)0x0;
        local_100 = 0;
        local_fc = 0;
        local_108 = (undefined **)&DAT_005674cc;
        puVar26 = (undefined4 *)((uint)&local_b8 | 4);
        puVar7 = (undefined2 *)((uint)&local_98 | 1);
        puVar8 = (uint *)((uint)&local_48 | 7);
        puVar9 = (undefined4 *)((uint)&local_98 | 3);
        puVar10 = (undefined4 *)((uint)&local_98 | 4);
        puVar11 = (undefined2 *)((uint)&local_48 | 1);
        piVar12 = (int *)((uint)&local_d8 | 7);
        goto LAB_00f56a34;
      }
      puVar22 = puVar22 + 1;
      param_2[5] = puVar22;
    } while (param_2[4] != puVar22);
  }
  local_48 = (undefined **)0x5;
LAB_00f568e8:
  uVar5 = FUN_01143ab8(param_2,&local_48);
  goto LAB_00f57638;
LAB_00f56a34:
  FUN_00f4d74c(&local_48,&local_110);
  ppuVar20 = local_110;
  if ((char)local_48 == '\x01') goto LAB_00f57578;
  if (local_48._1_1_ != '\x01') {
    local_128 = local_100;
    iStack_124 = local_fc;
    puStack_120 = local_f8;
    ppuStack_11c = ppuStack_f4;
    ppuStack_118 = local_f0;
    uStack_114 = local_ec;
    ppuVar13 = local_104;
    ppuVar31 = local_108;
    goto LAB_00f5759c;
  }
  ppuVar31 = local_110 + 3;
  local_110[2] = (undefined *)0x0;
  local_110[5] = local_110[5] + 1;
  FUN_0157e5fc(&local_68,ppuVar31,local_110);
  if (local_68 == (undefined **)&SUB_00000002) {
    local_a8._1_3_ = SUB43(local_64,0);
    local_a4._0_1_ = (undefined1)((uint)local_64 >> 0x18);
    ppuVar13 = local_64;
    goto LAB_00f5753c;
  }
  FUN_016be0a8(&local_48,local_64,local_60);
  ppuVar19 = local_98;
  if ((char)local_48 == '\x01') {
    FUN_016bdd70(puVar10,local_44,(undefined **)local_40);
    local_58 = (undefined *)*puVar10;
    local_54 = (undefined **)puVar10[1];
    local_50 = (undefined **)puVar10[2];
    uStack_4c = puVar10[3];
    local_48 = &local_58;
    local_44 = (undefined **)&LAB_016be8f8;
    ppuVar13 = (undefined **)FUN_00f56780(&DAT_0058c416,&local_48);
    local_a8._1_3_ = SUB43(ppuVar13,0);
    local_a4._0_1_ = (undefined1)((uint)ppuVar13 >> 0x18);
    goto LAB_00f5753c;
  }
  uVar2 = *(undefined1 *)(puVar11 + 1);
  local_78 = local_40._4_4_;
  *puVar7 = *puVar11;
  *(undefined1 *)(puVar7 + 1) = uVar2;
  local_94 = local_44;
  local_8c = local_40._4_4_;
  local_88 = (undefined *)CONCAT31(local_88._1_3_,local_38._0_1_);
  uVar5 = *puVar9;
  uVar2 = *(undefined1 *)(puVar9 + 1);
  local_90 = (char *)(undefined **)local_40;
  local_a4 = (undefined *)CONCAT31(local_a4._1_3_,uVar2);
  local_c8 = (char *)(undefined **)local_40;
  local_c4 = local_40._4_4_;
  local_74 = CONCAT31(local_74._1_3_,local_38._0_1_);
  local_c0 = local_38._0_1_;
  local_b8 = local_c8;
  local_b4 = local_c4;
  local_b0 = local_c0;
  local_a8 = uVar5;
  ppuVar13 = (undefined **)FUN_00f4d8b4(ppuVar20);
  if (ppuVar13 != (undefined **)0x0) goto LAB_00f57538;
  puVar22 = ppuVar20[4];
  puVar23 = ppuVar20[5];
  if (puVar22 <= puVar23) {
LAB_00f57524:
    local_48 = (undefined **)&DAT_00000005;
    ppuVar13 = (undefined **)FUN_01143ab8(ppuVar20,&local_48);
    goto LAB_00f57538;
  }
  puVar24 = *ppuVar31;
  while( true ) {
    uVar28 = (uint)(byte)puVar24[(int)puVar23];
    if ((0x17 < uVar28 - 9) || ((1 << (uVar28 - 9 & 0xff) & 0x800013U) == 0)) break;
    puVar23 = puVar23 + 1;
    ppuVar20[5] = puVar23;
    if (puVar22 == puVar23) goto LAB_00f57524;
  }
  switch(uVar28) {
  case 0x5b:
    cVar1 = *(char *)(ppuVar20 + 7);
    *(char *)(ppuVar20 + 7) = cVar1 + -1;
    if ((char)(cVar1 + -1) == '\0') {
      local_48 = (undefined **)&DAT_00000018;
      ppuVar13 = (undefined **)FUN_01143ab8(ppuVar20,&local_48);
      break;
    }
    ppuVar20[5] = puVar23 + 1;
    local_64 = (undefined **)CONCAT31(local_64._1_3_,1);
    local_68 = ppuVar20;
    FUN_00f4df24(&local_48,&local_68);
    if ((char)local_48 == '\x01') {
LAB_00f56c78:
      local_98 = local_44;
LAB_00f56f4c:
      local_90 = (char *)0x80000015;
    }
    else {
      if (local_48._1_1_ != '\x01') {
        local_54 = (undefined **)&DAT_00000004;
        local_58 = &DAT_005680b8;
        local_44 = (undefined **)&DAT_0157d360;
        local_48 = &local_58;
        local_98 = (undefined **)FUN_00f56780(&DAT_0057a25d,&local_48);
        goto LAB_00f56f4c;
      }
      FUN_00f4d9f8(&local_48,local_68);
      if ((char)local_48 == '\x01') goto LAB_00f56c78;
      uVar4 = local_48._1_1_;
      FUN_00f553d4(&local_58,local_68,(uint)local_64 & 0xff);
      if (local_58 == (undefined *)0x80000015) {
        local_98 = local_54;
        goto LAB_00f56f4c;
      }
      local_98 = (undefined **)CONCAT31(local_98._1_3_,uVar4);
      *puVar8 = (uint)local_58;
      puVar8[1] = (uint)local_54;
      puVar8[2] = (uint)local_50;
      puVar8[3] = uStack_4c;
      FUN_016dd1aa(puVar7,&local_48,0x17);
    }
    *(char *)(ppuVar20 + 7) = *(char *)(ppuVar20 + 7) + '\x01';
    ppuVar13 = (undefined **)FUN_00f4cc54(ppuVar20);
    ppuVar31 = local_98;
    local_48 = local_98;
    local_44 = local_94;
    local_40 = CONCAT44(local_8c,local_90);
    local_38 = local_88;
    local_34 = ppuStack_84;
    local_30 = ppuVar13;
    if (local_90 != (char *)0x80000015) {
      if (ppuVar13 != (undefined **)0x0) {
        pcVar27 = (char *)0x80000015;
        FUN_00f4ce00(&local_40);
        goto LAB_00f57100;
      }
      goto LAB_00f570e4;
    }
    pcVar27 = (char *)0x80000015;
    if (ppuVar13 == (undefined **)0x0) goto LAB_00f570dc;
    FUN_00f3d3b0(ppuVar13);
    ppuVar13 = ppuVar31;
    goto LAB_00f57100;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_00f56bb4_caseD_5c:
    if (uVar28 - 0x30 < 10) {
      FUN_00f4c958(&local_58,ppuVar20,1);
      if (local_58 == (undefined *)0x3 && local_54 == (undefined **)0x0) goto LAB_00f5779c;
      local_8c = 0x1d;
      local_94 = (undefined **)&DAT_00000004;
      local_90 = "internally tagged enum Action";
      local_98 = (undefined **)&DAT_005680b8;
      if (local_58 == (undefined *)0x0) {
        local_40 = CONCAT44(uStack_4c,local_50);
        local_48 = (undefined **)CONCAT31(local_48._1_3_,3);
        ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
      }
      else if (local_58 == (undefined *)0x1) {
        local_40 = CONCAT44(local_40._4_4_,local_50);
        local_48 = (undefined **)CONCAT31(local_48._1_3_,1);
        ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,local_50);
        local_48 = (undefined **)CONCAT31(local_48._1_3_,2);
        ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
      }
    }
    else {
      local_48 = (undefined **)&DAT_0000000a;
      ppuVar13 = (undefined **)FUN_01143ab8(ppuVar20,&local_48);
    }
    goto LAB_00f57c58;
  case 0x66:
    puVar25 = puVar23 + 1;
    ppuVar20[5] = puVar25;
    puVar24 = puVar22;
    if (puVar22 < puVar25) {
      puVar24 = puVar25;
    }
    if (puVar25 < puVar22) {
      puVar22 = ppuVar20[3];
      cVar1 = puVar22[(int)puVar25];
      puVar25 = puVar23 + 2;
      ppuVar20[5] = puVar25;
      if (cVar1 == 'a') {
        if (puVar25 == puVar24) goto LAB_00f57810;
        cVar1 = puVar22[(int)puVar25];
        puVar25 = puVar23 + 3;
        ppuVar20[5] = puVar25;
        if (cVar1 == 'l') {
          if (puVar25 == puVar24) goto LAB_00f57810;
          cVar1 = puVar22[(int)puVar25];
          puVar25 = puVar23 + 4;
          ppuVar20[5] = puVar25;
          if (cVar1 == 's') {
            if (puVar25 == puVar24) goto LAB_00f57810;
            cVar1 = puVar22[(int)puVar25];
            ppuVar20[5] = puVar23 + 5;
            if (cVar1 == 'e') {
              local_8c = 0x1d;
              local_94 = (undefined **)&DAT_00000004;
              local_90 = "internally tagged enum Action";
              local_98 = (undefined **)&DAT_005680b8;
              local_48 = (undefined **)((uint)local_48._2_2_ << 0x10);
              ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
              goto LAB_00f57c58;
            }
          }
        }
      }
      local_48 = (undefined **)&DAT_00000009;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    else {
LAB_00f57810:
      local_48 = (undefined **)&DAT_00000005;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    break;
  case 0x6e:
    puVar25 = puVar23 + 1;
    ppuVar20[5] = puVar25;
    puVar24 = puVar22;
    if (puVar22 < puVar25) {
      puVar24 = puVar25;
    }
    if (puVar25 < puVar22) {
      puVar22 = ppuVar20[3];
      cVar1 = puVar22[(int)puVar25];
      puVar25 = puVar23 + 2;
      ppuVar20[5] = puVar25;
      if (cVar1 == 'u') {
        if (puVar25 == puVar24) goto LAB_00f57878;
        cVar1 = puVar22[(int)puVar25];
        puVar25 = puVar23 + 3;
        ppuVar20[5] = puVar25;
        if (cVar1 == 'l') {
          if (puVar25 == puVar24) goto LAB_00f57878;
          cVar1 = puVar22[(int)puVar25];
          ppuVar20[5] = puVar23 + 4;
          if (cVar1 == 'l') {
            local_8c = 0x1d;
            local_94 = (undefined **)&DAT_00000004;
            local_90 = "internally tagged enum Action";
            local_98 = (undefined **)&DAT_005680b8;
            local_48 = (undefined **)CONCAT31(local_48._1_3_,7);
            ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
            goto LAB_00f57c58;
          }
        }
      }
      local_48 = (undefined **)&DAT_00000009;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    else {
LAB_00f57878:
      local_48 = (undefined **)&DAT_00000005;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    break;
  case 0x74:
    puVar25 = puVar23 + 1;
    ppuVar20[5] = puVar25;
    puVar24 = puVar22;
    if (puVar22 < puVar25) {
      puVar24 = puVar25;
    }
    if (puVar25 < puVar22) {
      puVar22 = ppuVar20[3];
      cVar1 = puVar22[(int)puVar25];
      puVar25 = puVar23 + 2;
      ppuVar20[5] = puVar25;
      if (cVar1 == 'r') {
        if (puVar25 == puVar24) goto LAB_00f578e0;
        cVar1 = puVar22[(int)puVar25];
        puVar25 = puVar23 + 3;
        ppuVar20[5] = puVar25;
        if (cVar1 == 'u') {
          if (puVar25 == puVar24) goto LAB_00f578e0;
          cVar1 = puVar22[(int)puVar25];
          ppuVar20[5] = puVar23 + 4;
          if (cVar1 == 'e') {
            local_8c = 0x1d;
            local_94 = (undefined **)&DAT_00000004;
            local_90 = "internally tagged enum Action";
            local_98 = (undefined **)&DAT_005680b8;
            local_48 = (undefined **)CONCAT22(local_48._2_2_,0x100);
            ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
            goto LAB_00f57c58;
          }
        }
      }
      local_48 = (undefined **)&DAT_00000009;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    else {
LAB_00f578e0:
      local_48 = (undefined **)&DAT_00000005;
      ppuVar13 = (undefined **)FUN_00f4c908(ppuVar20,&local_48);
    }
    break;
  case 0x7b:
    cVar1 = *(char *)(ppuVar20 + 7);
    *(char *)(ppuVar20 + 7) = cVar1 + -1;
    if ((char)(cVar1 + -1) != '\0') {
      uVar30 = 0;
      ppuVar20[5] = puVar23 + 1;
      uVar28 = 2;
      local_7c = 1;
      local_80 = ppuVar20;
      local_70 = 0;
      local_18c = 8;
      local_74 = 8;
      local_78 = 0;
LAB_00f56cc4:
      do {
        FUN_00f4d74c(&local_48,&local_80);
        ppuVar13 = local_80;
        if ((char)local_48 == '\x01') goto LAB_00f56fcc;
        if (local_48._1_1_ != '\x01') {
          if (uVar28 == 2) {
            local_54 = (undefined **)&DAT_00000004;
            local_58 = &DAT_005680b8;
            local_44 = (undefined **)&DAT_0157d360;
            local_48 = &local_58;
            local_98 = (undefined **)FUN_00f56780(&DAT_0057a25d,&local_48);
            local_90 = (char *)0x80000015;
            FUN_00f552f0(&local_78);
          }
          else {
            local_98 = (undefined **)CONCAT31(local_98._1_3_,(char)uVar28);
            *puVar8 = local_78;
            puVar8[1] = local_74;
            puVar8[2] = local_70;
            FUN_016dd1aa(puVar7,&local_48,0x17);
          }
          goto LAB_00f5706c;
        }
        local_80[2] = (undefined *)0x0;
        local_80[5] = local_80[5] + 1;
        FUN_0157e5fc(&local_48,local_80 + 3,local_80);
        ppuVar31 = local_44;
        if (local_48 == (undefined **)&SUB_00000002) goto LAB_00f56fcc;
        ppuVar14 = (undefined **)local_40;
        if (((uint)local_48 & 1) == 0) {
          ppuVar31 = extraout_r1;
          ppuVar14 = local_48;
          if ((undefined **)local_40 == (undefined **)&DAT_00000004) {
            ppuVar14 = (undefined **)*local_44;
            ppuVar31 = (undefined **)0x65707974;
          }
          if (!((undefined **)local_40 != (undefined **)&DAT_00000004 || ppuVar14 != ppuVar31)) {
LAB_00f56da0:
            if (uVar28 == 2) {
              ppuVar31 = (undefined **)FUN_00f4d8b4(ppuVar13);
              if (ppuVar31 == (undefined **)0x0) {
                FUN_00f4d9f8(&local_48,ppuVar13);
                if ((char)local_48 != '\x01') {
                  uVar28 = (uint)local_48 >> 8 & 0xff;
                  goto LAB_00f56cc4;
                }
              }
              else {
                local_44 = ppuVar31;
              }
              local_98 = local_44;
            }
            else {
              local_54 = (undefined **)&DAT_00000004;
              local_58 = &DAT_005680b8;
              local_44 = (undefined **)&DAT_0157d360;
              local_48 = &local_58;
              local_98 = (undefined **)FUN_00f56780(&DAT_00582dbd,&local_48);
            }
            local_90 = (char *)0x80000015;
            goto LAB_00f57028;
          }
          local_68 = (undefined **)&DAT_8000000d;
          local_60 = (undefined **)local_40;
          local_190 = local_44;
        }
        else {
          if ((undefined **)local_40 == (undefined **)&DAT_00000004) {
            if (*local_44 == (undefined *)0x65707974) goto LAB_00f56da0;
LAB_00f56d4c:
            local_194 = (undefined **)thunk_FUN_016d4a50((undefined **)local_40);
            if (local_194 == (undefined **)0x0) {
              uVar21 = 1;
              local_194 = ppuVar14;
LAB_00f57d00:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar21,local_194);
            }
            local_190 = ppuVar14;
          }
          else {
            uVar21 = 0;
            if ((int)(undefined **)local_40 < 0) goto LAB_00f57d00;
            if ((undefined **)local_40 != (undefined **)0x0) goto LAB_00f56d4c;
            local_194 = (undefined **)&DAT_00000001;
            local_190 = (undefined **)0x0;
          }
          FUN_016dd1aa(local_194,ppuVar31,ppuVar14);
          local_68 = (undefined **)&DAT_8000000c;
          local_198 = ppuVar14;
          local_60 = local_194;
        }
        local_64 = local_190;
        local_5c = local_198;
        ppuVar31 = (undefined **)FUN_00f4d8b4(ppuVar13);
        if (ppuVar31 != (undefined **)0x0) {
          local_54 = ppuVar31;
LAB_00f5744c:
          local_90 = (char *)0x80000015;
          local_98 = local_54;
          FUN_00f4ce00(&local_68);
          goto LAB_00f57028;
        }
        FUN_00f55df8(&local_58,ppuVar13);
        if (local_58 == (undefined *)0x80000015) {
          goto LAB_00f5744c;
        }
        local_38 = local_58;
        local_34 = local_54;
        local_30 = local_50;
        uStack_2c = uStack_4c;
        local_48 = local_68;
        local_44 = local_64;
        local_40 = CONCAT44(local_5c,local_60);
        if (uVar30 == local_78) {
          FUN_0111ff78(&local_78);
          local_18c = local_74;
        }
        puVar15 = (undefined4 *)(local_18c + uVar30 * 0x20);
        uVar30 = uVar30 + 1;
        *puVar15 = local_48;
        puVar15[1] = local_44;
        puVar15[2] = (undefined **)local_40;
        puVar15[3] = local_40._4_4_;
        puVar15[4] = local_38;
        puVar15[5] = local_34;
        puVar15[6] = local_30;
        puVar15[7] = uStack_2c;
        local_70 = uVar30;
      } while( true );
    }
    local_48 = (undefined **)&DAT_00000018;
    ppuVar13 = (undefined **)FUN_01143ab8(ppuVar20,&local_48);
    break;
  default:
    if (uVar28 == 0x22) {
      ppuVar20[2] = (undefined *)0x0;
      ppuVar20[5] = puVar23 + 1;
      FUN_0157e5fc(&local_58,ppuVar31,ppuVar20);
      ppuVar13 = local_54;
      if (local_58 != (undefined *)0x2) {
        if (((uint)local_58 & 1) == 0) {
          local_8c = 0x1d;
          local_94 = (undefined **)&DAT_00000004;
          local_90 = "internally tagged enum Action";
          local_40 = CONCAT44(local_40._4_4_,local_50);
          local_98 = (undefined **)&DAT_005680b8;
          local_44 = local_54;
          local_48 = (undefined **)CONCAT31(local_48._1_3_,5);
          ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
        }
        else {
          local_8c = 0x1d;
          local_94 = (undefined **)&DAT_00000004;
          local_90 = "internally tagged enum Action";
          local_40 = CONCAT44(local_40._4_4_,local_50);
          local_98 = (undefined **)&DAT_005680b8;
          local_44 = local_54;
          local_48 = (undefined **)CONCAT31(local_48._1_3_,5);
          ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
        }
        goto LAB_00f57c58;
      }
    }
    else {
      if (uVar28 != 0x2d) goto switchD_00f56bb4_caseD_5c;
      ppuVar20[5] = puVar23 + 1;
      FUN_00f4c958(&local_58,ppuVar20,0);
      if (local_58 != (undefined *)0x3 || local_54 != (undefined **)0x0) {
        local_8c = 0x1d;
        local_94 = (undefined **)&DAT_00000004;
        local_90 = "internally tagged enum Action";
        local_98 = (undefined **)&DAT_005680b8;
        if (local_58 == (undefined *)0x0) {
          local_40 = CONCAT44(uStack_4c,local_50);
          local_48 = (undefined **)CONCAT31(local_48._1_3_,3);
          ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
        }
        else if (local_58 == (undefined *)0x1) {
          local_40 = CONCAT44(local_40._4_4_,local_50);
          local_48 = (undefined **)CONCAT31(local_48._1_3_,1);
          ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,local_50);
          local_48 = (undefined **)CONCAT31(local_48._1_3_,2);
          ppuVar13 = (undefined **)FUN_0157cc00(&local_48,&local_98,&DAT_0187f470);
        }
        goto LAB_00f57c58;
      }
LAB_00f5779c:
      ppuVar13 = local_50;
    }
    goto LAB_00f5753c;
  }
LAB_00f57538:
  goto LAB_00f5753c;
LAB_00f56fcc:
  local_90 = (char *)0x80000015;
  local_98 = local_44;
LAB_00f57028:
  uVar28 = local_18c;
  for (uVar29 = 0; uVar30 != uVar29; uVar29 = uVar29 + 1) {
    FUN_00f5401c(uVar28);
    FUN_00f5401c(uVar28 + 0x10);
    uVar28 = uVar28 + 0x20;
  }
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(local_18c);
  }
LAB_00f5706c:
  *(char *)(ppuVar20 + 7) = *(char *)(ppuVar20 + 7) + '\x01';
  ppuVar13 = (undefined **)FUN_00f4cfec(ppuVar20);
  ppuVar31 = local_98;
  local_48 = local_98;
  local_44 = local_94;
  local_40 = CONCAT44(local_8c,local_90);
  local_38 = local_88;
  local_34 = ppuStack_84;
  local_30 = ppuVar13;
  if (local_90 == (char *)0x80000015) {
    if (ppuVar13 == (undefined **)0x0) {
LAB_00f570dc:
      pcVar27 = (char *)0x80000015;
      ppuVar13 = local_98;
      local_48 = local_98;
      local_44 = local_94;
      local_38 = local_88;
      local_34 = ppuStack_84;
    }
    else {
      FUN_00f3d3b0(ppuVar13);
      pcVar27 = (char *)0x80000015;
      ppuVar13 = ppuVar31;
    }
  }
  else if (ppuVar13 == (undefined **)0x0) {
LAB_00f570e4:
    local_a8 = local_40._4_4_;
    local_a4 = local_88;
    ppuStack_a0 = ppuStack_84;
    pcVar27 = local_90;
    ppuVar13 = local_98;
    local_48 = local_98;
    local_44 = local_94;
    local_38 = local_88;
    local_34 = ppuStack_84;
  }
  else {
    FUN_00f4ce00(&local_40);
    pcVar27 = (char *)0x80000015;
  }
LAB_00f57100:
  if (pcVar27 != (char *)0x80000015) {
    *puVar26 = local_a8;
    puVar26[1] = local_a4;
    puVar26[2] = ppuStack_a0;
    local_b8 = pcVar27;
    if (((uint)ppuVar13 & 1) == 0) {
      local_44 = (undefined **)&DAT_00000006;
      local_40 = 0xe0035c455;
      local_48 = (undefined **)0x35c44f;
      ppuVar13 = (undefined **)FUN_00f55604(&local_b8,&local_48);
      bVar32 = ppuVar13 == (undefined **)0x0;
      if (bVar32) {
        local_184 = 0;
      }
    }
    else {
      local_44 = (undefined **)&DAT_00000006;
      local_40 = 0x400566d90;
      local_48 = (undefined **)0x35c44f;
      ppuVar13 = (undefined **)FUN_00f55604(&local_b8,&local_48);
      bVar32 = ppuVar13 == (undefined **)0x0;
      if (bVar32) {
        local_184 = 1;
      }
    }
    if (bVar32) {
      local_e8 = local_c8;
      *piVar12 = (int)local_c8;
      uStack_d6 = (undefined2)uVar5;
      uStack_d4 = (undefined2)((uint)uVar5 >> 0x10);
      local_e0 = local_c0;
      *(undefined1 *)(piVar12 + 2) = local_c0;
      piVar12[1] = local_c4;
      local_d8 = (undefined2)((uint)ppuVar19 >> 8);
      local_e4 = local_c4;
      uStack_d2 = uVar2;
      uVar28 = FUN_00f5b6c8(local_f8,ppuStack_f4,local_f0,local_ec);
      if (local_100 == 0) {
        FUN_00f52df8(&local_108,&local_f8);
      }
      ppuVar13 = local_104;
      ppuVar20 = local_108;
      iVar6 = 0;
      bVar32 = false;
      uVar30 = uVar28;
      do {
        uVar30 = (uint)ppuVar13 & uVar30;
        uVar16 = *(uint *)((int)ppuVar20 + uVar30);
        uVar29 = uVar16 ^ (uVar28 >> 0x19) * 0x1010101;
        uVar29 = ~uVar29 & 0x80808080 & uVar29 + 0xfefefeff;
        while (uVar29 != 0) {
          uVar17 = uVar30 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                           (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                   (uint)ppuVar13;
          iVar18 = thunk_FUN_016dd50a(&local_d8,
                                      (undefined1 *)((int)ppuVar20 + uVar17 * -0x11 + -0x11),0x10);
          uVar29 = uVar29 - 1 & uVar29;
          if (iVar18 == 0) goto LAB_00f57428;
        }
        uVar29 = uVar16 & 0x80808080;
        uVar17 = local_19c;
        if (bVar32) {
LAB_00f5734c:
          if ((uVar29 & uVar16 << 1) != 0) goto LAB_00f573b4;
          bVar32 = true;
          local_19c = uVar17;
        }
        else {
          if (uVar29 != 0) {
            uVar17 = uVar30 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar29 >> 8 & 0xff) << 0x10
                                             | (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3)
                     & (uint)ppuVar13;
            goto LAB_00f5734c;
          }
          bVar32 = false;
        }
        iVar6 = iVar6 + 4;
        uVar30 = iVar6 + uVar30;
      } while( true );
    }
    goto LAB_00f5753c;
  }
LAB_00f57c58:
  ppuVar13 = (undefined **)FUN_011257e4(ppuVar13,ppuVar20);
  goto LAB_00f57538;
LAB_00f573b4:
  uVar30 = (uint)*(char *)((int)ppuVar20 + uVar17);
  if (-1 < (int)uVar30) {
    uVar30 = (uint)*ppuVar20 & 0x80808080;
    uVar17 = LZCOUNT(((uint)*ppuVar20 & 0x80) << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                     (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18);
    uVar30 = (uint)*(byte *)((int)ppuVar20 + (uVar17 >> 3));
    uVar17 = uVar17 >> 3;
  }
  bVar3 = (byte)(uVar28 >> 0x19);
  *(byte *)((int)ppuVar20 + uVar17) = bVar3;
  *(byte *)((int)ppuVar20 + ((uint)ppuVar13 & uVar17 - 4) + 4) = bVar3;
  *(uint *)((int)ppuVar20 + uVar17 * -0x11 + -0xd) =
       CONCAT13(uStack_d1,CONCAT12(uStack_d2,uStack_d4));
  *(uint *)((int)ppuVar20 + uVar17 * -0x11 + -0x11) = CONCAT22(uStack_d6,local_d8);
  *(undefined4 *)((int)ppuVar20 + uVar17 * -0x11 + -9) = local_d0;
  *(undefined4 *)((int)ppuVar20 + uVar17 * -0x11 + -5) = local_cc;
  local_100 = local_100 - (uVar30 & 1);
  local_fc = local_fc + 1;
LAB_00f57428:
  *(undefined1 *)((int)ppuVar20 + uVar17 * -0x11 + -1) = local_184;
  goto LAB_00f56a34;
LAB_00f57578:
  ppuVar13 = local_44;
LAB_00f5753c:
  ppuVar31 = (undefined **)0x0;
  if (local_104 != (undefined **)0x0) {
    uVar28 = (int)local_104 * 0x11 & 0xfffffffc;
    if ((undefined1 *)(uVar28 + (int)local_104) != (undefined1 *)0xffffffe7) {
      thunk_FUN_016d3fb4((undefined1 *)((int)local_108 + (-0x14 - uVar28)));
    }
  }
LAB_00f5759c:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_40 = CONCAT44(local_40._4_4_,local_128);
  local_38 = puStack_120;
  local_34 = ppuStack_11c;
  local_30 = ppuStack_118;
  local_48 = ppuVar31;
  local_44 = ppuVar13;
  ppuVar19 = (undefined **)FUN_00f4cfec();
  if (ppuVar31 == (undefined **)0x0) {
    ppuVar20 = ppuVar13;
    if (ppuVar19 != (undefined **)0x0) {
      FUN_005c3974();
      thunk_FUN_016d3fb4(ppuVar19);
    }
  }
  else {
    if (ppuVar19 == (undefined **)0x0) {
      param_1[2] = local_128;
      param_1[3] = iStack_124;
      param_1[4] = puStack_120;
      param_1[5] = ppuStack_11c;
      param_1[6] = ppuStack_118;
      param_1[7] = uStack_114;
      *param_1 = ppuVar31;
      param_1[1] = ppuVar13;
      return;
    }
    ppuVar20 = ppuVar19;
    if ((ppuVar13 != (undefined **)0x0) &&
       (uVar28 = (int)ppuVar13 * 0x11 & 0xfffffffc,
       (undefined1 *)(uVar28 + (int)ppuVar13) != (undefined1 *)0xffffffe7)) {
      thunk_FUN_016d3fb4((undefined1 *)((int)ppuVar31 + (-0x14 - uVar28)));
    }
  }
LAB_00f57630:
  uVar5 = FUN_011257e4(ppuVar20,param_2);
LAB_00f57638:
  *param_1 = 0;
  param_1[1] = uVar5;
  return;
}

