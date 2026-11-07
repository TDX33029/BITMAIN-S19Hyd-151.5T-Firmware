// FUN_01144044 @ 01144044 size=3936 calls_out=24 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01144044(char *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint uVar10;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar11;
  uint uVar12;
  uint *extraout_r3;
  uint *extraout_r3_00;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *unaff_r10;
  uint *puVar18;
  uint *unaff_r11;
  bool bVar19;
  uint *local_d4;
  char local_d0;
  char cStack_cf;
  ushort uStack_ce;
  uint *local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  uint *local_bc;
  char local_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  uint *puStack_b1;
  uint *puStack_ad;
  undefined1 uStack_a9;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  int local_98;
  undefined1 local_94;
  uint *local_90;
  uint *puStack_8c;
  uint *local_88;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = *(uint *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar15 <= uVar9) {
LAB_0114412c:
    local_b8 = '\x05';
LAB_01144130:
    cStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar5 = FUN_008f9984(param_2,&local_b8);
LAB_0114464c:
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = '\x06';
    return;
  }
  puVar14 = (uint *)(param_2 + 0xc);
  uVar10 = *puVar14;
LAB_0114406c:
  uVar11 = (uint)*(byte *)(uVar10 + uVar9);
  switch(uVar11) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_01144084_caseD_9;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
switchD_01144084_caseD_b:
    if (9 < uVar11 - 0x30) {
      local_b8 = '\n';
      cStack_b7 = '\0';
      uStack_b6 = 0;
      puStack_b5._0_1_ = 0;
      unaff_r10 = (uint *)FUN_008f9984(param_2,&local_b8);
      puVar16 = local_80;
      goto LAB_01145004;
    }
    FUN_0134d6c8(&local_80,param_2,1);
    uVar10 = (uint)local_80 ^ 3;
    if (!(uVar10 != 0 || local_7c != (uint *)0x0)) goto LAB_01144624;
    local_b8 = '\x02';
    if (local_80 == (uint *)&SUB_00000002) {
      puVar13 = (uint *)((uint)local_74 >> 0x1f);
    }
    else {
      puVar13 = (uint *)0x0;
      if (local_80 != (uint *)&DAT_00000001) goto LAB_011446ec;
    }
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar9 + 1;
    FUN_0157e384(&local_b8,puVar14,param_2);
    puVar14 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
      *(uint **)(param_1 + 4) = puVar14;
      *param_1 = '\x06';
      return;
    }
    puVar17 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar17);
    }
    if (puVar17 == (uint *)0x0) {
      unaff_r10 = (uint *)0x0;
      puVar13 = (uint *)&DAT_00000001;
    }
    else {
      puVar13 = (uint *)thunk_FUN_016d4a50(puVar17);
      if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar17);
      }
      unaff_r10 = puVar17;
    }
    FUN_016dd1aa(puVar13,puVar14,puVar17);
    local_b8 = '\x03';
    local_80 = extraout_r1_00;
    uVar10 = extraout_r2_00;
    goto LAB_01144908;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar9 + 1;
    puVar13 = (uint *)0x0;
    FUN_0134d6c8(&local_80,param_2,0);
    uVar10 = (uint)local_80 ^ 3;
    if (!(uVar10 != 0 || local_7c != (uint *)0x0)) goto LAB_01144624;
    if (local_80 == (uint *)0x0) {
LAB_011446ec:
      local_80 = (uint *)((uint)local_74 & 0x7fffffff);
      local_b8 = '\0';
      uVar10 = 0x7fefffff;
      if (local_80 < (uint *)0x7ff00000) {
        local_b8 = '\0';
        FUN_01145300(&local_b8);
        local_b8 = '\x02';
        local_80 = extraout_r1;
        uVar10 = extraout_r2;
      }
      puVar13 = (uint *)&SUB_00000002;
    }
    else {
      local_b8 = '\x02';
      if (local_80 != (uint *)&DAT_00000001) {
        puVar13 = (uint *)((uint)local_74 >> 0x1f);
      }
    }
    break;
  default:
    puVar13 = &switchD_01144158::switchdataD_0114415c;
    switch(uVar11) {
    case 0x5b:
      cVar4 = *(char *)(param_2 + 0x24);
      *(char *)(param_2 + 0x24) = cVar4 + -1;
      if (cVar4 != '\x01') {
        uVar9 = uVar9 + 1;
        puVar13 = (uint *)&DAT_00000008;
        *(uint *)(param_2 + 0x14) = uVar9;
        local_38 = (uint *)0x0;
        local_3c = (uint *)&DAT_00000008;
        local_40 = (uint *)0x0;
        if (uVar15 <= uVar9) goto LAB_01144720;
        bVar19 = true;
        goto LAB_0114425c;
      }
      break;
    default:
      goto switchD_01144084_caseD_b;
    case 0x66:
      uVar12 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
      uVar11 = uVar15;
      if (uVar15 < uVar12) {
        uVar11 = uVar12;
      }
      if (uVar15 <= uVar12) goto LAB_01144638;
      cVar4 = *(char *)(uVar10 + uVar12);
      uVar15 = uVar9 + 2;
      *(uint *)(param_2 + 0x14) = uVar15;
      if (cVar4 == 'a') {
        if (uVar15 == uVar11) goto LAB_01144638;
        cVar4 = *(char *)(uVar10 + uVar15);
        uVar15 = uVar9 + 3;
        *(uint *)(param_2 + 0x14) = uVar15;
        if (cVar4 == 'l') {
          if (uVar15 == uVar11) goto LAB_01144638;
          cVar4 = *(char *)(uVar10 + uVar15);
          uVar15 = uVar9 + 4;
          *(uint *)(param_2 + 0x14) = uVar15;
          if (cVar4 == 's') {
            if (uVar15 == uVar11) goto LAB_01144638;
            cVar4 = *(char *)(uVar10 + uVar15);
            local_80 = (uint *)(uVar9 + 5);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar4 == 'e') {
              local_b8 = '\x01';
              cStack_b7 = '\0';
              puVar17 = (uint *)0x73;
              goto LAB_01144b7c;
            }
          }
        }
      }
      goto LAB_01144fa0;
    case 0x6e:
      uVar12 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
      uVar11 = uVar15;
      if (uVar12 >= uVar15 && uVar12 != uVar15) {
        uVar11 = uVar12;
      }
      if (uVar12 < uVar15) {
        cVar4 = *(char *)(uVar10 + uVar12);
        uVar15 = uVar9 + 2;
        *(uint *)(param_2 + 0x14) = uVar15;
        if (cVar4 == 'u') {
          if (uVar15 == uVar11) goto LAB_01144638;
          cVar4 = *(char *)(uVar10 + uVar15);
          uVar15 = uVar9 + 3;
          *(uint *)(param_2 + 0x14) = uVar15;
          if (cVar4 == 'l') {
            if (uVar15 == uVar11) goto LAB_01144638;
            cVar4 = *(char *)(uVar10 + uVar15);
            local_80 = (uint *)(uVar9 + 4);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar4 == 'l') {
              local_b8 = '\0';
              puVar17 = (uint *)&DAT_0000006c;
              goto LAB_01144908;
            }
          }
        }
        goto LAB_01144fa0;
      }
      goto LAB_01144638;
    case 0x74:
      uVar12 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
      uVar11 = uVar15;
      if (uVar15 < uVar12) {
        uVar11 = uVar12;
      }
      if (uVar15 <= uVar12) {
LAB_01144638:
        local_b8 = '\x05';
LAB_0114463c:
        cStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        uVar5 = FUN_005b8c9c(param_2,&local_b8);
        goto LAB_0114464c;
      }
      cVar4 = *(char *)(uVar10 + uVar12);
      uVar15 = uVar9 + 2;
      *(uint *)(param_2 + 0x14) = uVar15;
      if (cVar4 != 'r') goto LAB_01144fa0;
      if (uVar15 == uVar11) goto LAB_01144638;
      cVar4 = *(char *)(uVar10 + uVar15);
      uVar15 = uVar9 + 3;
      *(uint *)(param_2 + 0x14) = uVar15;
      if (cVar4 == 'u') {
        if (uVar15 == uVar11) goto LAB_01144638;
        cVar4 = *(char *)(uVar10 + uVar15);
        local_80 = (uint *)(uVar9 + 4);
        *(uint **)(param_2 + 0x14) = local_80;
        if (cVar4 == 'e') {
          cStack_b7 = '\x01';
          local_b8 = '\x01';
          puVar17 = (uint *)0x75;
          goto LAB_01144b7c;
        }
      }
LAB_01144fa0:
      local_b8 = '\t';
      goto LAB_0114463c;
    case 0x7b:
      cVar4 = *(char *)(param_2 + 0x24) + -1;
      *(char *)(param_2 + 0x24) = cVar4;
      if (cVar4 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        local_94 = 1;
        local_98 = param_2;
        FUN_0134d8a0(&local_b8,&local_98);
        iVar3 = local_98;
        if (local_b8 == '\x01') {
          puVar13 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
LAB_01144548:
          local_d0 = '\x06';
          local_cc = puVar13;
          goto LAB_011449fc;
        }
        if (cStack_b7 != '\x01') {
LAB_011449e8:
          local_c4 = (uint *)0x0;
          local_cc = (uint *)0x0;
          local_d0 = '\x05';
          goto LAB_011449fc;
        }
        local_d4 = (uint *)(local_98 + 0xc);
        *(undefined4 *)(local_98 + 8) = 0;
        *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
        FUN_0157e384(&local_b8,local_d4,local_98);
        puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
          puVar13 = puVar17;
          goto LAB_01144548;
        }
        puVar16 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
        if (puVar16 == (uint *)&DAT_0000001e) {
          iVar6 = thunk_FUN_016dd50a(puVar17,&DAT_003c519d,0x1e);
          if (iVar6 == 0) {
LAB_01144bd4:
            local_cc = (uint *)FUN_00a715c4(iVar3);
            if (local_cc != (uint *)0x0) goto LAB_01144be8;
            uVar9 = *(uint *)(iVar3 + 0x14);
            if (*(uint *)(iVar3 + 0x10) <= uVar9) goto LAB_01144cc8;
            uVar15 = *local_d4;
            goto LAB_01144ca0;
          }
          puVar13 = (uint *)thunk_FUN_016d4a50(0x1e);
          if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x1e);
          }
          puVar18 = (uint *)&DAT_0000001e;
LAB_01144c00:
          FUN_016dd1aa(puVar13,puVar17,puVar16);
          local_d4 = puVar16;
        }
        else {
          if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,puVar16);
          }
          if (puVar16 == (uint *)0x0) {
            puVar18 = (uint *)0x0;
            puVar13 = (uint *)&DAT_00000001;
            goto LAB_01144c00;
          }
          puVar13 = (uint *)thunk_FUN_016d4a50(puVar16);
          if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar16);
          }
          FUN_016dd1aa(puVar13,puVar17,puVar16);
          if (puVar16 == (uint *)&DAT_80000000) goto LAB_01144bd4;
          if (puVar16 == (uint *)0x80000001) goto LAB_011449e8;
          puVar18 = puVar16;
          if (puVar16 == (uint *)0x80000002) goto LAB_01144548;
        }
        local_88 = (uint *)0x0;
        local_90 = (uint *)0x0;
        local_80 = puVar18;
        local_7c = puVar13;
        local_78 = puVar16;
        puVar17 = (uint *)FUN_00a715c4(iVar3);
        if (puVar17 == (uint *)0x0) {
          FUN_01144044(&local_d0,iVar3);
          if (local_d0 != '\x06') {
            FUN_01147750(&local_b8,&local_90,&local_80,&local_d0);
            FUN_01154484(&local_b8);
            puVar7 = (undefined4 *)((uint)&local_b8 | 4);
            puVar8 = (undefined4 *)((uint)&local_80 | 4);
            goto LAB_01144d20;
          }
        }
        else {
          local_d0 = '\x06';
          local_cc = puVar17;
        }
        if (puVar18 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar13);
        }
        goto LAB_01144c74;
      }
    }
    local_b8 = '\x18';
    goto LAB_01144130;
  }
  puVar17 = (uint *)0x0;
  puVar14 = local_78;
  unaff_r11 = local_74;
LAB_01144908:
  cStack_b7 = (char)uVar10;
  goto LAB_01144b7c;
  while( true ) {
    uVar9 = uVar9 + 1;
    *(uint *)(iVar3 + 0x14) = uVar9;
    if (*(uint *)(iVar3 + 0x10) == uVar9) break;
LAB_01144ca0:
    uVar10 = *(byte *)(uVar15 + uVar9) - 9;
    if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(uVar15 + uVar9) == 0x22) {
        *(undefined4 *)(iVar3 + 8) = 0;
        *(uint *)(iVar3 + 0x14) = uVar9 + 1;
        FUN_0157e384(&local_b8,local_d4,iVar3);
        local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2)
        goto LAB_01144be8;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)puStack_ad,puStack_b1._1_3_));
        puVar17 = local_7c;
        puVar13 = local_80;
        if (local_80 != (uint *)0x0) {
          FUN_01143f1c(&local_b8,local_80,local_7c);
          if (local_b8 == '\x06') {
            local_cc = (uint *)FUN_01151f08(CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_));
            local_d0 = '\x06';
          }
          else {
            uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
            local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
            local_c8 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
            local_c4 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
            local_d0 = local_b8;
            cStack_cf = cStack_b7;
            local_c0 = local_a8;
            local_bc = local_a4;
          }
          if (puVar17 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar13);
          }
          goto LAB_011449fc;
        }
        puVar13 = local_7c;
      }
      else {
        puVar13 = (uint *)FUN_01146e64(iVar3,&local_40);
      }
      local_cc = (uint *)FUN_00e959bc(puVar13,iVar3);
      goto LAB_01144be8;
    }
  }
LAB_01144cc8:
  local_b8 = '\x05';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  local_cc = (uint *)FUN_008f9984(iVar3,&local_b8);
LAB_01144be8:
  local_d0 = '\x06';
  goto LAB_011449fc;
LAB_01144d20:
  FUN_0134d8a0(&local_40,&local_98);
  iVar3 = local_98;
  if ((char)local_40 == '\x01') goto LAB_01145054;
  if (local_40._1_1_ != '\x01') {
LAB_01145014:
    local_d0 = '\x05';
    puStack_ad = local_88;
    puStack_b1 = puStack_8c;
    puStack_b5 = local_90;
    cStack_cf = local_b8;
    uStack_ce = (ushort)(CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)) >> 8);
    local_cc = local_90;
    local_c8 = puStack_8c;
    local_c4 = local_88;
    goto LAB_011449fc;
  }
  *(undefined4 *)(local_98 + 8) = 0;
  *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
  FUN_0157e384(&local_40,local_98 + 0xc,local_98);
  puVar17 = local_38;
  puVar13 = local_3c;
  if (local_40 == (uint *)&SUB_00000002) goto LAB_01145124;
  uVar5 = 0;
  if ((int)local_38 < 0) {
LAB_011451f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,local_d4);
  }
  if (local_38 == (uint *)0x0) {
    local_d4 = (uint *)&DAT_00000001;
    FUN_016dd1aa(1,local_3c,0);
    puVar16 = (uint *)0x0;
  }
  else {
    local_d4 = (uint *)thunk_FUN_016d4a50(local_38);
    if (local_d4 == (uint *)0x0) {
      uVar5 = 1;
      local_d4 = puVar17;
      goto LAB_011451f0;
    }
    FUN_016dd1aa(local_d4,puVar13,puVar17);
    if (puVar17 == (uint *)0x80000001) {
      puVar13 = local_d4;
      goto LAB_01145124;
    }
    if (puVar17 == (uint *)&DAT_80000000) goto LAB_01145014;
    puVar16 = puVar17;
  }
  puVar13 = (uint *)FUN_00a715c4(iVar3);
  if (puVar13 != (uint *)0x0) {
    local_3c = puVar13;
LAB_01145098:
    puVar13 = local_3c;
    if (puVar16 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_d4);
    }
    goto LAB_01145124;
  }
  FUN_01144044(&local_40,iVar3);
  if ((char)local_40 == '\x06') {
    goto LAB_01145098;
  }
  *puVar7 = local_40;
  puVar7[1] = local_3c;
  puVar7[2] = local_38;
  puVar7[3] = uStack_34;
  puVar7[4] = uStack_30;
  puVar7[5] = uStack_2c;
  local_80 = (uint *)CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)));
  local_7c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
  local_78 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
  local_74 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
  puStack_70 = local_a8;
  puStack_6c = local_a4;
  puStack_68 = local_a0;
  if (puVar16 == (uint *)&DAT_80000000) goto LAB_01145014;
  puVar13 = local_d4;
  if (puVar16 == (uint *)0x80000001) goto LAB_01145124;
  local_5c = puVar17;
  local_60 = local_d4;
  local_58 = *puVar8;
  uStack_54 = puVar8[1];
  uStack_50 = puVar8[2];
  uStack_4c = puVar8[3];
  uStack_48 = puVar8[4];
  uStack_44 = puVar8[5];
  local_64 = puVar16;
  FUN_01147750(&local_b8,&local_90,&local_64);
  switch(local_b8) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x06':
    break;
  case '\x04':
    FUN_01150b1c(puVar7);
  case '\x03':
    if (CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_) != 0) {
      thunk_FUN_016d3fb4(CONCAT13((char)puStack_ad,puStack_b1._1_3_));
    }
    break;
  default:
    FUN_0114868c(puVar7);
  }
  goto LAB_01144d20;
LAB_01145054:
  puVar13 = local_3c;
LAB_01145124:
  local_d0 = '\x06';
  local_cc = puVar13;
LAB_01144c74:
  FUN_0114868c(&local_90);
LAB_011449fc:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
LAB_01144a18:
    switch(*(char *)(*puVar14 + uVar9)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_01144a30_caseD_9;
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_01144a30_caseD_b;
    case ',':
      local_80 = (uint *)&DAT_00000015;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_01144ae8;
    default:
      if (*(char *)(*puVar14 + uVar9) == '}') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        local_b8 = local_d0;
        cStack_b7 = cStack_cf;
        uStack_b6 = (undefined1)uStack_ce;
        puStack_b5._0_1_ = (undefined1)(uStack_ce >> 8);
        puStack_b5._1_3_ = (uint3)local_cc;
        puStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
        puStack_b1._1_3_ = SUB43(local_c8,0);
        puStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
        puStack_ad._1_3_ = SUB43(local_c4,0);
        uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
        local_a8 = local_c0;
        local_a4 = local_bc;
        if (local_d0 == '\x06') goto LAB_01144b6c;
        puVar18 = (uint *)(uint)uStack_ce;
        puVar14 = local_c0;
        unaff_r11 = local_bc;
        local_b8 = local_d0;
        unaff_r10 = local_cc;
        puVar13 = local_c8;
        puVar17 = local_c4;
        puVar16 = local_80;
        goto joined_r0x01144bc8;
      }
switchD_01144a30_caseD_b:
      local_80 = (uint *)&DAT_00000016;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_01144ae8;
    }
  }
LAB_01144ad4:
  local_80 = (uint *)0x3;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_80);
LAB_01144ae8:
  unaff_r10 = local_cc;
  local_b8 = local_d0;
  cStack_b7 = cStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  puStack_b5._0_1_ = (undefined1)(uStack_ce >> 8);
  puStack_b5._1_3_ = (uint3)local_cc;
  puStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  puStack_b1._1_3_ = SUB43(local_c8,0);
  puStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  puStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = local_c0;
  local_a4 = local_bc;
  local_a0 = puVar14;
  if (local_d0 == '\x06') {
    FUN_005c3974(puVar14);
    goto LAB_01144b18;
  }
  goto LAB_01144b34;
switchD_01144a30_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (*(uint *)(param_2 + 0x10) == uVar9) goto LAB_01144ad4;
  goto LAB_01144a18;
LAB_0114425c:
  do {
    puVar17 = local_38;
    while( true ) {
      uVar10 = (uint)*(byte *)(*puVar14 + uVar9);
      if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar15 == uVar9) goto LAB_01144720;
    }
    if (uVar10 == 0x5d) {
      cVar4 = '\x04';
      local_78 = local_3c;
      local_74 = local_38;
      local_7c = local_40;
      goto LAB_01144760;
    }
    if (!bVar19) {
      if (uVar10 != 0x2c) {
        local_b8 = '\a';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01144738;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar15 <= uVar9) {
LAB_01144f84:
        local_b8 = '\x05';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01144738;
      }
      while( true ) {
        uVar10 = (uint)*(byte *)(*puVar14 + uVar9);
        uVar11 = uVar10 - 9;
        if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) break;
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
        if (uVar15 == uVar9) goto LAB_01144f84;
      }
      if (uVar10 == 0x5d) {
        local_b8 = '\x15';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01144738;
      }
    }
    FUN_01144044(&local_b8,param_2);
    if (local_b8 == '\x06') {
      puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      goto LAB_01144738;
    }
    local_7c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    local_78 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_74 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    uVar2 = *(undefined2 *)((uint)&local_b8 | 1);
    *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_80 | 1) = uVar2;
    puStack_70 = local_a8;
    puStack_6c = local_a4;
    local_80 = (uint *)CONCAT31(local_80._1_3_,local_b8);
    if (puVar17 == local_40) {
      FUN_0157eb1c(&local_40);
      puVar13 = local_3c;
    }
    puVar16 = puVar13 + (int)puVar17 * 6;
    *puVar16 = (uint)local_80;
    puVar16[1] = (uint)local_7c;
    puVar16[2] = (uint)local_78;
    puVar16[3] = (uint)local_74;
    puVar16[4] = (uint)puStack_70;
    puVar16[5] = (uint)puStack_6c;
    local_38 = (uint *)((int)puVar17 + 1);
    bVar19 = false;
    uVar15 = *(uint *)(param_2 + 0x10);
    uVar9 = *(uint *)(param_2 + 0x14);
  } while (uVar9 < uVar15);
LAB_01144720:
  local_b8 = '\x02';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
LAB_01144738:
  FUN_01150b1c(&local_40);
  local_78 = (uint *)0x0;
  local_74 = extraout_r3;
  if (local_40 != (uint *)0x0) {
    local_78 = (uint *)thunk_FUN_016d3fb4(puVar13);
    local_74 = extraout_r3_00;
  }
  uVar15 = *(uint *)(param_2 + 0x10);
  cVar4 = '\x06';
  uVar9 = *(uint *)(param_2 + 0x14);
  local_7c = puVar17;
LAB_01144760:
  puVar13 = local_80;
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_80 = (uint *)CONCAT31(local_80._1_3_,cVar4);
  if (uVar9 < uVar15) {
LAB_01144788:
    cVar1 = *(char *)(*puVar14 + uVar9);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_011447a0_caseD_9;
    case ',':
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar15 <= uVar9) goto LAB_01145154;
      goto LAB_011450d0;
    default:
      if (cVar1 == ']') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        cStack_b7 = (char)((uint)puVar13 >> 8);
        uStack_b6 = (undefined1)((uint)puVar13 >> 0x10);
        puStack_b5._0_1_ = (undefined1)((uint)puVar13 >> 0x18);
        puStack_b5._1_3_ = (uint3)local_7c;
        puStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
        puStack_b1._1_3_ = SUB43(local_78,0);
        puStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
        puStack_ad._1_3_ = SUB43(local_74,0);
        uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
        local_a8 = puStack_70;
        local_a4 = puStack_6c;
        local_b8 = cVar4;
        if (cVar4 == '\x06') {
LAB_01144b6c:
          unaff_r10 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
          puVar16 = local_80;
        }
        else {
          puVar18 = (uint *)((uint)puVar13 >> 0x10);
          puVar14 = puStack_70;
          unaff_r11 = puStack_6c;
          unaff_r10 = local_7c;
          puVar13 = local_78;
          puVar17 = local_74;
          puVar16 = local_80;
joined_r0x01144bc8:
          local_80 = puVar18;
          local_a8 = puVar14;
          local_a4 = unaff_r11;
          if (local_b8 != '\x06') {
LAB_01144b7c:
            *(short *)(param_1 + 2) = (short)local_80;
            param_1[1] = cStack_b7;
            *param_1 = local_b8;
            *(uint **)(param_1 + 4) = unaff_r10;
            *(uint **)(param_1 + 8) = puVar13;
            *(uint **)(param_1 + 0xc) = puVar17;
            *(uint **)(param_1 + 0x10) = puVar14;
            *(uint **)(param_1 + 0x14) = unaff_r11;
            return;
          }
        }
        goto LAB_01145004;
      }
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      local_40 = (uint *)&DAT_00000016;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
    }
    goto LAB_01144858;
  }
LAB_01144844:
  local_40 = (uint *)&SUB_00000002;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
  goto LAB_01144858;
switchD_011447a0_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar15 == uVar9) goto LAB_01144844;
  goto LAB_01144788;
switchD_01144084_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar15 == uVar9) goto LAB_0114412c;
  goto LAB_0114406c;
  while( true ) {
    uVar9 = uVar9 + 1;
    *(uint *)(param_2 + 0x14) = uVar9;
    if (uVar15 == uVar9) break;
LAB_011450d0:
    uVar10 = (uint)*(byte *)(*puVar14 + uVar9);
    uVar11 = uVar10 - 9;
    if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) {
      if (uVar10 == 0x5d) {
        local_40 = (uint *)&DAT_00000015;
        puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
        goto LAB_01144858;
      }
      break;
    }
  }
LAB_01145154:
  local_40 = (uint *)&DAT_00000016;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
LAB_01144858:
  unaff_r10 = local_7c;
  local_b8 = (char)local_80;
  cStack_b7 = (char)((uint)local_80 >> 8);
  uStack_b6 = (undefined1)((uint)local_80 >> 0x10);
  puStack_b5._0_1_ = (undefined1)((uint)local_80 >> 0x18);
  puStack_b5._1_3_ = (uint3)local_7c;
  puStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  puStack_b1._1_3_ = SUB43(local_78,0);
  puStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
  puStack_ad._1_3_ = SUB43(local_74,0);
  uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
  local_a8 = puStack_70;
  local_a4 = puStack_6c;
  local_a0 = puVar14;
  if (local_b8 == '\x06') {
    FUN_005c3974(puVar14);
LAB_01144b18:
    thunk_FUN_016d3fb4(puVar14);
    puVar16 = local_80;
  }
  else {
LAB_01144b34:
    unaff_r10 = local_a0;
    FUN_01145300(&local_b8);
    puVar16 = local_80;
  }
LAB_01145004:
  local_80 = puVar16;
  local_78 = (uint *)FUN_00e959bc(unaff_r10,param_2);
LAB_01144624:
  *(uint **)(param_1 + 4) = local_78;
  *param_1 = '\x06';
  return;
}

