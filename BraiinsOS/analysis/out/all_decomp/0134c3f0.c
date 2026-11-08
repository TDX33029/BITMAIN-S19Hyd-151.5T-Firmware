// FUN_0134c3f0 @ 0134c3f0 size=3976 calls_out=24 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0134c3f0(uint *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint uVar11;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint uVar12;
  uint *extraout_r3;
  uint uVar13;
  uint *extraout_r3_00;
  uint *extraout_r3_01;
  uint *extraout_r3_02;
  uint *extraout_r3_03;
  uint *extraout_r3_04;
  uint *extraout_r3_05;
  uint *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *unaff_r8;
  uint *unaff_r11;
  bool bVar20;
  uint *local_e4;
  uint *local_d8;
  char local_d0;
  char cStack_cf;
  ushort uStack_ce;
  uint *local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *puStack_c0;
  uint *puStack_bc;
  char local_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  uint *puStack_b1;
  uint *puStack_ad;
  undefined1 uStack_a9;
  uint *puStack_a8;
  uint *puStack_a4;
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
  uint *puStack_60;
  uint *puStack_5c;
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
  
  uVar17 = *(uint *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar17 <= uVar10) {
LAB_0134c4d8:
    local_b8 = '\x05';
LAB_0134c4dc:
    cStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar10 = FUN_008f9984(param_2,&local_b8);
LAB_0134ca08:
    param_1[1] = uVar10;
    *(char *)param_1 = '\x06';
    return;
  }
  puVar16 = (uint *)(param_2 + 0xc);
  uVar11 = *puVar16;
LAB_0134c418:
  uVar12 = (uint)*(byte *)(uVar11 + uVar10);
  puVar9 = param_1;
  switch(uVar12) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_0134c430_caseD_9;
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
switchD_0134c430_caseD_b:
    if (9 < uVar12 - 0x30) {
      local_b8 = '\n';
      cStack_b7 = '\0';
      uStack_b6 = 0;
      puStack_b5._0_1_ = 0;
      puVar9 = (uint *)FUN_008f9984(param_2,&local_b8);
      puVar16 = local_80;
      goto LAB_0134d394;
    }
    FUN_0134d6c8(&local_80,param_2,1);
    uVar11 = (uint)local_80 ^ 3;
    if (uVar11 == 0 && local_7c == (uint *)0x0) {
LAB_0134c9dc:
      param_1[1] = (uint)local_78;
      *(char *)param_1 = '\x06';
      return;
    }
    local_b8 = '\x02';
    if (local_80 == (uint *)&SUB_00000002) {
      puVar14 = (uint *)((uint)local_74 >> 0x1f);
    }
    else {
      puVar14 = (uint *)0x0;
      if (local_80 != (uint *)&DAT_00000001) {
        local_80 = (uint *)((uint)local_74 & 0x7fffffff);
        local_b8 = '\0';
        uVar11 = 0x7fefffff;
        if (local_80 < (uint *)0x7ff00000) {
          local_b8 = '\0';
          FUN_01347b28(&local_b8);
          local_b8 = '\x02';
          local_80 = extraout_r1;
          uVar11 = extraout_r2;
        }
        puVar14 = (uint *)&SUB_00000002;
      }
    }
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar10 + 1;
    FUN_0157e384(&local_b8,puVar16,param_2);
    if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
      param_1[1] = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      *(char *)param_1 = '\x06';
      return;
    }
    puVar18 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar18);
    }
    if (puVar18 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
      puVar14 = (uint *)&DAT_00000001;
    }
    else {
      puVar14 = (uint *)thunk_FUN_016d4a50(puVar18);
      if (puVar14 == (uint *)0x0) {
LAB_0134d588:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar18);
      }
      puVar9 = puVar18;
    }
    FUN_016dd1aa(puVar14,CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_),puVar18);
    local_b8 = '\x03';
    local_80 = extraout_r1_01;
    uVar11 = extraout_r2_01;
    goto LAB_0134cd10;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar10 + 1;
    puVar14 = (uint *)0x0;
    FUN_0134d6c8(&local_80,param_2,0);
    uVar11 = (uint)local_80 ^ 3;
    if (uVar11 == 0 && local_7c == (uint *)0x0) goto LAB_0134c9dc;
    if (local_80 == (uint *)0x0) {
      local_80 = (uint *)((uint)local_74 & 0x7fffffff);
      local_b8 = '\0';
      uVar11 = 0x7fefffff;
      if (local_80 < (uint *)0x7ff00000) {
        local_b8 = '\0';
        FUN_01347b28(&local_b8);
        local_b8 = '\x02';
        local_80 = extraout_r1_00;
        uVar11 = extraout_r2_00;
      }
      puVar14 = (uint *)&SUB_00000002;
    }
    else {
      local_b8 = '\x02';
      if (local_80 != (uint *)&DAT_00000001) {
        puVar14 = (uint *)((uint)local_74 >> 0x1f);
      }
    }
    break;
  default:
    puVar14 = &switchD_0134c504::switchdataD_0134c508;
    switch(uVar12) {
    case 0x5b:
      cVar4 = *(char *)(param_2 + 0x24);
      *(char *)(param_2 + 0x24) = cVar4 + -1;
      if (cVar4 == '\x01') {
        local_b8 = '\x18';
        cStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        uVar10 = FUN_008f9984(param_2,&local_b8);
        *(char *)param_1 = '\x06';
        param_1[1] = uVar10;
        return;
      }
      uVar10 = uVar10 + 1;
      puVar9 = (uint *)&DAT_00000008;
      *(uint *)(param_2 + 0x14) = uVar10;
      local_38 = (uint *)0x0;
      local_3c = (uint *)&DAT_00000008;
      local_40 = (uint *)0x0;
      if (uVar17 <= uVar10) goto LAB_0134cadc;
      bVar20 = true;
      goto LAB_0134c608;
    default:
      goto switchD_0134c430_caseD_b;
    case 0x66:
      uVar13 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar17;
      if (uVar17 < uVar13) {
        uVar12 = uVar13;
      }
      if (uVar17 <= uVar13) goto LAB_0134c9f4;
      cVar4 = *(char *)(uVar11 + uVar13);
      uVar17 = uVar10 + 2;
      *(uint *)(param_2 + 0x14) = uVar17;
      if (cVar4 == 'a') {
        if (uVar17 == uVar12) goto LAB_0134c9f4;
        cVar4 = *(char *)(uVar11 + uVar17);
        uVar17 = uVar10 + 3;
        *(uint *)(param_2 + 0x14) = uVar17;
        if (cVar4 == 'l') {
          if (uVar17 == uVar12) goto LAB_0134c9f4;
          cVar4 = *(char *)(uVar11 + uVar17);
          uVar17 = uVar10 + 4;
          *(uint *)(param_2 + 0x14) = uVar17;
          if (cVar4 == 's') {
            if (uVar17 == uVar12) goto LAB_0134c9f4;
            cVar4 = *(char *)(uVar11 + uVar17);
            local_80 = (uint *)(uVar10 + 5);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar4 == 'e') {
              local_b8 = '\x01';
              cStack_b7 = '\0';
              puVar18 = (uint *)0x73;
              goto LAB_0134cf80;
            }
          }
        }
      }
      break;
    case 0x6e:
      uVar13 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar17;
      if (uVar13 >= uVar17 && uVar13 != uVar17) {
        uVar12 = uVar13;
      }
      if (uVar13 < uVar17) {
        cVar4 = *(char *)(uVar11 + uVar13);
        uVar17 = uVar10 + 2;
        *(uint *)(param_2 + 0x14) = uVar17;
        if (cVar4 == 'u') {
          if (uVar17 == uVar12) goto LAB_0134c9f4;
          cVar4 = *(char *)(uVar11 + uVar17);
          uVar17 = uVar10 + 3;
          *(uint *)(param_2 + 0x14) = uVar17;
          if (cVar4 == 'l') {
            if (uVar17 == uVar12) goto LAB_0134c9f4;
            cVar4 = *(char *)(uVar11 + uVar17);
            local_80 = (uint *)(uVar10 + 4);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar4 == 'l') {
              local_b8 = '\0';
              puVar18 = (uint *)&DAT_0000006c;
              goto LAB_0134cd10;
            }
          }
        }
        break;
      }
LAB_0134c9f4:
      local_b8 = '\x05';
LAB_0134c9f8:
      cStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      uVar10 = FUN_005b8c9c(param_2,&local_b8);
      goto LAB_0134ca08;
    case 0x74:
      uVar13 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar17;
      if (uVar17 < uVar13) {
        uVar12 = uVar13;
      }
      if (uVar17 <= uVar13) goto LAB_0134c9f4;
      cVar4 = *(char *)(uVar11 + uVar13);
      uVar17 = uVar10 + 2;
      *(uint *)(param_2 + 0x14) = uVar17;
      if (cVar4 != 'r') break;
      if (uVar17 == uVar12) goto LAB_0134c9f4;
      cVar4 = *(char *)(uVar11 + uVar17);
      uVar17 = uVar10 + 3;
      *(uint *)(param_2 + 0x14) = uVar17;
      if (cVar4 == 'u') {
        if (uVar17 == uVar12) goto LAB_0134c9f4;
        cVar4 = *(char *)(uVar11 + uVar17);
        local_80 = (uint *)(uVar10 + 4);
        *(uint **)(param_2 + 0x14) = local_80;
        if (cVar4 == 'e') {
          cStack_b7 = '\x01';
          local_b8 = '\x01';
          puVar18 = (uint *)0x75;
          goto LAB_0134cf80;
        }
      }
      break;
    case 0x7b:
      cVar4 = *(char *)(param_2 + 0x24) + -1;
      *(char *)(param_2 + 0x24) = cVar4;
      if (cVar4 == '\0') {
        local_b8 = '\x18';
        goto LAB_0134c4dc;
      }
      *(uint *)(param_2 + 0x14) = uVar10 + 1;
      local_94 = 1;
      local_98 = param_2;
      FUN_0134d8a0(&local_b8,&local_98);
      iVar3 = local_98;
      if (local_b8 == '\x01') {
        puVar9 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
LAB_0134c900:
        local_d0 = '\x06';
        local_cc = puVar9;
        goto LAB_0134ce08;
      }
      if (cStack_b7 != '\x01') {
LAB_0134cdf4:
        local_c4 = (uint *)0x0;
        local_cc = (uint *)0x0;
        local_d0 = '\x05';
        goto LAB_0134ce08;
      }
      local_d8 = (uint *)(local_98 + 0xc);
      *(undefined4 *)(local_98 + 8) = 0;
      *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
      FUN_0157e384(&local_b8,local_d8,local_98);
      puVar14 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
        puVar9 = puVar14;
        goto LAB_0134c900;
      }
      puVar18 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
      if (puVar18 == (uint *)&DAT_0000001e) {
        iVar5 = thunk_FUN_016dd50a(puVar14,&DAT_003c519d,0x1e);
        if (iVar5 == 0) {
LAB_0134cfcc:
          local_cc = (uint *)FUN_00a715c4(iVar3);
          if (local_cc != (uint *)0x0) goto LAB_0134cfe0;
          uVar10 = *(uint *)(iVar3 + 0x14);
          if (*(uint *)(iVar3 + 0x10) <= uVar10) goto LAB_0134d0c0;
          uVar17 = *local_d8;
          goto LAB_0134d098;
        }
        puVar9 = (uint *)thunk_FUN_016d4a50(0x1e);
        if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x1e);
        }
        puVar19 = (uint *)&DAT_0000001e;
LAB_0134cff8:
        FUN_016dd1aa(puVar9,puVar14,puVar18);
        local_d8 = puVar18;
      }
      else {
        if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,puVar18);
        }
        if (puVar18 == (uint *)0x0) {
          puVar19 = (uint *)0x0;
          puVar9 = (uint *)&DAT_00000001;
          goto LAB_0134cff8;
        }
        puVar9 = (uint *)thunk_FUN_016d4a50(puVar18);
        if (puVar9 == (uint *)0x0) goto LAB_0134d588;
        FUN_016dd1aa(puVar9,puVar14,puVar18);
        if (puVar18 == (uint *)&DAT_80000000) goto LAB_0134cfcc;
        if (puVar18 == (uint *)0x80000001) goto LAB_0134cdf4;
        puVar19 = puVar18;
        if (puVar18 == (uint *)0x80000002) goto LAB_0134c900;
      }
      local_88 = (uint *)0x0;
      local_90 = (uint *)0x0;
      local_80 = puVar19;
      local_7c = puVar9;
      local_78 = puVar18;
      puVar14 = (uint *)FUN_00a715c4(iVar3);
      if (puVar14 == (uint *)0x0) {
        FUN_0134c3f0(&local_d0,iVar3);
        if (local_d0 != '\x06') {
          FUN_0135ab80(&local_b8,&local_90,&local_80,&local_d0);
          FUN_013581d0(&local_b8);
          puVar6 = (undefined4 *)((uint)&local_80 | 4);
          puVar7 = (undefined4 *)((uint)&local_b8 | 4);
          goto LAB_0134d118;
        }
      }
      else {
        local_d0 = '\x06';
        local_cc = puVar14;
      }
      if (puVar19 != (uint *)0x0) {
        thunk_FUN_016d3fb4(puVar9);
      }
      goto LAB_0134d06c;
    }
    local_b8 = '\t';
    goto LAB_0134c9f8;
  }
  puVar18 = (uint *)0x0;
  unaff_r8 = local_78;
  unaff_r11 = local_74;
LAB_0134cd10:
  cStack_b7 = (char)uVar11;
  goto LAB_0134cf80;
  while( true ) {
    uVar10 = uVar10 + 1;
    *(uint *)(iVar3 + 0x14) = uVar10;
    if (*(uint *)(iVar3 + 0x10) == uVar10) break;
LAB_0134d098:
    uVar11 = *(byte *)(uVar17 + uVar10) - 9;
    if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(uVar17 + uVar10) == 0x22) {
        *(undefined4 *)(iVar3 + 8) = 0;
        *(uint *)(iVar3 + 0x14) = uVar10 + 1;
        FUN_0157e384(&local_b8,local_d8,iVar3);
        local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2)
        goto LAB_0134cfe0;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)puStack_ad,puStack_b1._1_3_));
        puVar14 = local_7c;
        puVar9 = local_80;
        if (local_80 != (uint *)0x0) {
          FUN_0134c2c8(&local_b8,local_80,local_7c);
          if (local_b8 == '\x06') {
            local_cc = (uint *)FUN_0135c4f4(CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_));
            local_d0 = '\x06';
          }
          else {
            uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
            local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
            local_c8 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
            local_c4 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
            local_d0 = local_b8;
            cStack_cf = cStack_b7;
            puStack_c0 = puStack_a8;
            puStack_bc = puStack_a4;
          }
          if (puVar14 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar9);
          }
          goto LAB_0134ce08;
        }
        puVar9 = local_7c;
      }
      else {
        puVar9 = (uint *)FUN_0134db70(iVar3,&local_40);
      }
      local_cc = (uint *)FUN_00e959bc(puVar9,iVar3);
      goto LAB_0134cfe0;
    }
  }
LAB_0134d0c0:
  local_b8 = '\x05';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  local_cc = (uint *)FUN_008f9984(iVar3,&local_b8);
LAB_0134cfe0:
  local_d0 = '\x06';
  goto LAB_0134ce08;
LAB_0134d118:
  FUN_0134d8a0(&local_40,&local_98);
  iVar3 = local_98;
  if ((char)local_40 == '\x01') goto LAB_0134d3f4;
  if (local_40._1_1_ != '\x01') {
LAB_0134d3b8:
    local_d0 = '\x05';
    puStack_ad = local_88;
    puStack_b1 = puStack_8c;
    puStack_b5 = local_90;
    cStack_cf = local_b8;
    uStack_ce = (ushort)(CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)) >> 8);
    local_cc = local_90;
    local_c8 = puStack_8c;
    local_c4 = local_88;
    goto LAB_0134ce08;
  }
  *(undefined4 *)(local_98 + 8) = 0;
  *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
  FUN_0157e384(&local_40,local_98 + 0xc,local_98);
  puVar14 = local_38;
  puVar9 = local_3c;
  local_cc = local_3c;
  if (local_40 == (uint *)&SUB_00000002) goto LAB_0134d4e8;
  uVar8 = 0;
  if ((int)local_38 < 0) {
LAB_0134d5a8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,local_d8);
  }
  if (local_38 == (uint *)0x0) {
    local_d8 = (uint *)&DAT_00000001;
    FUN_016dd1aa(1,local_3c,0);
    local_e4 = (uint *)0x0;
  }
  else {
    local_d8 = (uint *)thunk_FUN_016d4a50(local_38);
    if (local_d8 == (uint *)0x0) {
      uVar8 = 1;
      local_d8 = puVar14;
      goto LAB_0134d5a8;
    }
    FUN_016dd1aa(local_d8,puVar9,puVar14);
    if (puVar14 == (uint *)0x80000001) {
      local_cc = local_d8;
      goto LAB_0134d4e8;
    }
    if (puVar14 == (uint *)&DAT_80000000) goto LAB_0134d3b8;
    local_e4 = puVar14;
  }
  puVar9 = (uint *)FUN_00a715c4(iVar3);
  if (puVar9 != (uint *)0x0) {
    local_3c = puVar9;
LAB_0134d46c:
    local_cc = local_3c;
    if (local_e4 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_d8);
    }
    goto LAB_0134d4e8;
  }
  FUN_0134c3f0(&local_40,iVar3);
  if ((char)local_40 == '\x06') {
    goto LAB_0134d46c;
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
  puStack_70 = puStack_a8;
  puStack_6c = puStack_a4;
  puStack_68 = local_a0;
  if (local_e4 == (uint *)&DAT_80000000) goto LAB_0134d3b8;
  local_cc = local_d8;
  if (local_e4 == (uint *)0x80000001) goto LAB_0134d4e8;
  local_64 = local_e4;
  puStack_60 = local_d8;
  puStack_5c = puVar14;
  local_58 = *puVar6;
  uStack_54 = puVar6[1];
  uStack_50 = puVar6[2];
  uStack_4c = puVar6[3];
  uStack_48 = puVar6[4];
  uStack_44 = puVar6[5];
  FUN_0135ab80(&local_b8,&local_90,&local_64);
  FUN_013581d0(&local_b8);
  goto LAB_0134d118;
LAB_0134d3f4:
  local_cc = local_3c;
LAB_0134d4e8:
  local_d0 = '\x06';
LAB_0134d06c:
  FUN_0135b9bc(&local_90);
LAB_0134ce08:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar10 < *(uint *)(param_2 + 0x10)) {
LAB_0134ce24:
    switch(*(char *)(*puVar16 + uVar10)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_0134ce3c_caseD_9;
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
      goto switchD_0134ce3c_caseD_b;
    case ',':
      local_80 = (uint *)&DAT_00000015;
      puVar16 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_0134cef4;
    default:
      if (*(char *)(*puVar16 + uVar10) == '}') {
        *(uint *)(param_2 + 0x14) = uVar10 + 1;
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
        puStack_a8 = puStack_c0;
        puStack_a4 = puStack_bc;
        if (local_d0 == '\x06') goto LAB_0134cf70;
        puVar19 = (uint *)(uint)uStack_ce;
        unaff_r8 = puStack_c0;
        unaff_r11 = puStack_bc;
        local_b8 = local_d0;
        puVar9 = local_cc;
        puVar14 = local_c8;
        puVar18 = local_c4;
        puVar16 = local_80;
        goto joined_r0x0134cfc0;
      }
switchD_0134ce3c_caseD_b:
      local_80 = (uint *)&DAT_00000016;
      puVar16 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_0134cef4;
    }
  }
LAB_0134cee0:
  local_80 = (uint *)0x3;
  puVar16 = (uint *)FUN_008f9984(param_2,&local_80);
LAB_0134cef4:
  puVar9 = local_cc;
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
  puStack_a8 = puStack_c0;
  puStack_a4 = puStack_bc;
  local_a0 = puVar16;
  if (local_d0 == '\x06') {
    FUN_005c3974(puVar16);
    goto LAB_0134cf20;
  }
  goto LAB_0134cf3c;
switchD_0134ce3c_caseD_9:
  uVar10 = uVar10 + 1;
  *(uint *)(param_2 + 0x14) = uVar10;
  if (*(uint *)(param_2 + 0x10) == uVar10) goto LAB_0134cee0;
  goto LAB_0134ce24;
LAB_0134c608:
  do {
    puVar14 = local_38;
    while( true ) {
      uVar11 = (uint)*(byte *)(*puVar16 + uVar10);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (uVar17 == uVar10) goto LAB_0134cadc;
    }
    if (uVar11 == 0x5d) {
      cVar4 = '\x04';
      local_74 = local_38;
      local_78 = local_3c;
      local_7c = local_40;
      goto LAB_0134cb38;
    }
    if (!bVar20) {
      if (uVar11 != 0x2c) {
        local_b8 = '\a';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar18 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_74 = extraout_r3_04;
        goto LAB_0134caf4;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (uVar17 <= uVar10) {
LAB_0134d320:
        local_b8 = '\x05';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
        puVar18 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_74 = extraout_r3_03;
        goto LAB_0134caf4;
      }
      while( true ) {
        uVar11 = (uint)*(byte *)(*puVar16 + uVar10);
        uVar12 = uVar11 - 9;
        if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) break;
        uVar10 = uVar10 + 1;
        *(uint *)(param_2 + 0x14) = uVar10;
        if (uVar17 == uVar10) goto LAB_0134d320;
      }
      if (uVar11 == 0x5d) {
        local_b8 = '\x15';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar18 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_74 = extraout_r3_05;
        goto LAB_0134caf4;
      }
    }
    FUN_0134c3f0(&local_b8,param_2);
    if (local_b8 == '\x06') {
      puVar18 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      local_74 = extraout_r3;
      goto LAB_0134caf4;
    }
    uVar2 = *(undefined2 *)((uint)&local_b8 | 1);
    local_7c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    local_78 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_74 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_80 | 1) = uVar2;
    local_80 = (uint *)CONCAT31(local_80._1_3_,local_b8);
    puStack_70 = puStack_a8;
    puStack_6c = puStack_a4;
    if (puVar14 == local_40) {
      FUN_0157eb1c(&local_40);
      puVar9 = local_3c;
    }
    puVar18 = puVar9 + (int)puVar14 * 6;
    *puVar18 = (uint)local_80;
    puVar18[1] = (uint)local_7c;
    puVar18[2] = (uint)local_78;
    puVar18[3] = (uint)local_74;
    puVar18[4] = (uint)puStack_70;
    puVar18[5] = (uint)puStack_6c;
    uVar17 = *(uint *)(param_2 + 0x10);
    uVar10 = *(uint *)(param_2 + 0x14);
    bVar20 = false;
    local_38 = (uint *)((int)puVar14 + 1);
  } while (uVar10 < uVar17);
LAB_0134cadc:
  puVar14 = local_38;
  local_b8 = '\x02';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  puVar18 = (uint *)FUN_008f9984(param_2,&local_b8);
  local_74 = extraout_r3_00;
LAB_0134caf4:
  pcVar15 = (char *)((int)puVar14 + 1);
  puVar14 = puVar9;
  while (pcVar15 = pcVar15 + -1, pcVar15 != (char *)0x0) {
    FUN_0135c3f0(puVar14);
    puVar14 = puVar14 + 6;
    local_74 = extraout_r3_01;
  }
  if (local_40 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar9);
    local_74 = extraout_r3_02;
  }
  uVar17 = *(uint *)(param_2 + 0x10);
  cVar4 = '\x06';
  uVar10 = *(uint *)(param_2 + 0x14);
  local_78 = (uint *)0x0;
  local_7c = puVar18;
LAB_0134cb38:
  puVar9 = local_80;
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_80 = (uint *)CONCAT31(local_80._1_3_,cVar4);
  if (uVar10 < uVar17) {
LAB_0134cb60:
    cVar1 = *(char *)(*puVar16 + uVar10);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_0134cb78_caseD_9;
    case ',':
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (uVar17 <= uVar10) goto LAB_0134d518;
      goto LAB_0134d4a0;
    default:
      if (cVar1 == ']') {
        *(uint *)(param_2 + 0x14) = uVar10 + 1;
        cStack_b7 = (char)((uint)puVar9 >> 8);
        uStack_b6 = (undefined1)((uint)puVar9 >> 0x10);
        puStack_b5._0_1_ = (undefined1)((uint)puVar9 >> 0x18);
        puStack_b5._1_3_ = (uint3)local_7c;
        puStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
        puStack_b1._1_3_ = SUB43(local_78,0);
        puStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
        puStack_ad._1_3_ = SUB43(local_74,0);
        uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
        puStack_a8 = puStack_70;
        puStack_a4 = puStack_6c;
        local_b8 = cVar4;
        if (cVar4 == '\x06') {
LAB_0134cf70:
          puVar9 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
          puVar16 = local_80;
        }
        else {
          puVar19 = (uint *)((uint)puVar9 >> 0x10);
          unaff_r8 = puStack_70;
          unaff_r11 = puStack_6c;
          puVar9 = local_7c;
          puVar14 = local_78;
          puVar18 = local_74;
          puVar16 = local_80;
joined_r0x0134cfc0:
          local_80 = puVar19;
          puStack_a8 = unaff_r8;
          puStack_a4 = unaff_r11;
          if (local_b8 != '\x06') {
LAB_0134cf80:
            *(char *)param_1 = local_b8;
            *(short *)((int)param_1 + 2) = (short)local_80;
            *(char *)((int)param_1 + 1) = cStack_b7;
            param_1[1] = (uint)puVar9;
            param_1[2] = (uint)puVar14;
            param_1[3] = (uint)puVar18;
            param_1[4] = (uint)unaff_r8;
            param_1[5] = (uint)unaff_r11;
            return;
          }
        }
        goto LAB_0134d394;
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
      puVar16 = (uint *)FUN_008f9984(param_2,&local_40);
    }
    goto LAB_0134cc30;
  }
LAB_0134cc1c:
  local_40 = (uint *)&SUB_00000002;
  puVar16 = (uint *)FUN_008f9984(param_2,&local_40);
  goto LAB_0134cc30;
switchD_0134cb78_caseD_9:
  uVar10 = uVar10 + 1;
  *(uint *)(param_2 + 0x14) = uVar10;
  if (uVar17 == uVar10) goto LAB_0134cc1c;
  goto LAB_0134cb60;
switchD_0134c430_caseD_9:
  uVar10 = uVar10 + 1;
  *(uint *)(param_2 + 0x14) = uVar10;
  if (uVar17 == uVar10) goto LAB_0134c4d8;
  goto LAB_0134c418;
  while( true ) {
    uVar10 = uVar10 + 1;
    *(uint *)(param_2 + 0x14) = uVar10;
    if (uVar17 == uVar10) break;
LAB_0134d4a0:
    uVar11 = (uint)*(byte *)(*puVar16 + uVar10);
    uVar12 = uVar11 - 9;
    if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
      if (uVar11 == 0x5d) {
        local_40 = (uint *)&DAT_00000015;
        puVar16 = (uint *)FUN_008f9984(param_2,&local_40);
        goto LAB_0134cc30;
      }
      break;
    }
  }
LAB_0134d518:
  local_40 = (uint *)&DAT_00000016;
  puVar16 = (uint *)FUN_008f9984(param_2,&local_40);
LAB_0134cc30:
  puVar9 = local_7c;
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
  puStack_a8 = puStack_70;
  puStack_a4 = puStack_6c;
  local_a0 = puVar16;
  if (local_b8 == '\x06') {
    FUN_005c3974(puVar16);
LAB_0134cf20:
    thunk_FUN_016d3fb4(puVar16);
    puVar16 = local_80;
  }
  else {
LAB_0134cf3c:
    puVar9 = local_a0;
    FUN_01347b28(&local_b8);
    puVar16 = local_80;
  }
LAB_0134d394:
  local_80 = puVar16;
  uVar10 = FUN_00e959bc(puVar9,param_2);
  param_1[1] = uVar10;
  *(char *)param_1 = '\x06';
  return;
}

