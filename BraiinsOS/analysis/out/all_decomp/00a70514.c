// FUN_00a70514 @ 00a70514 size=3448 calls_out=25 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a70514(byte *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  byte bVar10;
  uint uVar11;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar12;
  uint *extraout_r3;
  uint *extraout_r3_00;
  uint *extraout_r3_01;
  uint uVar13;
  uint *extraout_r3_02;
  uint *extraout_r3_03;
  uint *extraout_r3_04;
  uint *extraout_r3_05;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *unaff_r10;
  uint *unaff_r11;
  bool bVar19;
  uint *local_d4;
  byte local_d0;
  byte bStack_cf;
  ushort uStack_ce;
  uint *local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *puStack_c0;
  uint *puStack_bc;
  byte local_b8;
  byte bStack_b7;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  uVar16 = *(uint *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar16 <= uVar9) {
LAB_00a705fc:
    local_b8 = 5;
LAB_00a70600:
    bStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar6 = FUN_008f9984(param_2,&local_b8);
LAB_00a70ca4:
    *(undefined4 *)(param_1 + 4) = uVar6;
    *param_1 = 6;
    return;
  }
  puVar18 = (uint *)(param_2 + 0xc);
  uVar11 = *puVar18;
LAB_00a7053c:
  uVar12 = (uint)*(byte *)(uVar11 + uVar9);
  switch(uVar12) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00a70554_caseD_9;
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
switchD_00a70554_caseD_b:
    if (9 < uVar12 - 0x30) {
      local_b8 = 10;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5._0_1_ = 0;
      puVar18 = (uint *)FUN_008f9984(param_2,&local_b8);
      uVar9 = local_40;
      goto LAB_00a713b0;
    }
    FUN_00a6daa0(&local_40,param_2,1);
    uVar11 = local_40 ^ 3;
    if (uVar11 == 0 && local_3c == (uint *)0x0) goto LAB_00a70b30;
    local_b8 = 2;
    unaff_r10 = local_38;
    unaff_r11 = local_34;
    if (local_40 == 2) {
      puVar14 = (uint *)((uint)local_34 >> 0x1f);
    }
    else {
      puVar14 = (uint *)0x0;
      if (local_40 != 1) goto LAB_00a70d98;
    }
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar9 + 1;
    FUN_0157e384(&local_b8,puVar18,param_2);
    if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
      *(uint *)(param_1 + 4) = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      *param_1 = 6;
      return;
    }
    puVar17 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar17);
    }
    if (puVar17 == (uint *)0x0) {
      puVar18 = (uint *)0x0;
      puVar14 = (uint *)0x1;
    }
    else {
      puVar14 = (uint *)thunk_FUN_016d4a50(puVar17);
      if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar17);
      }
      puVar18 = puVar17;
    }
    FUN_016dd1aa(puVar14,CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_),puVar17);
    local_b8 = 3;
    local_40 = extraout_r1_00;
    uVar11 = extraout_r2_00;
    goto LAB_00a70ff0;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar9 + 1;
    puVar14 = (uint *)0x0;
    FUN_00a6daa0(&local_40,param_2,0);
    uVar11 = local_40 ^ 3;
    if (uVar11 == 0 && local_3c == (uint *)0x0) goto LAB_00a70b30;
    if (local_40 == 0) {
LAB_00a70d98:
      local_40 = (uint)local_34 & 0x7fffffff;
      local_b8 = 0;
      uVar11 = 0x7fefffff;
      if (local_40 < 0x7ff00000) {
        local_b8 = 0;
        FUN_00a358c8(&local_b8);
        local_b8 = 2;
        local_40 = extraout_r1;
        uVar11 = extraout_r2;
      }
      puVar14 = (uint *)0x2;
      unaff_r10 = local_38;
      unaff_r11 = local_34;
    }
    else {
      local_b8 = 2;
      unaff_r10 = local_38;
      unaff_r11 = local_34;
      if (local_40 != 1) {
        puVar14 = (uint *)((uint)local_34 >> 0x1f);
      }
    }
    break;
  default:
    puVar14 = &switchD_00a70628::switchdataD_00a7062c;
    switch(uVar12) {
    case 0x5b:
      cVar5 = *(char *)(param_2 + 0x24);
      *(char *)(param_2 + 0x24) = cVar5 + -1;
      if (cVar5 != '\x01') {
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
        local_50 = (uint *)0x0;
        local_d4 = (uint *)0x8;
        local_54 = (uint *)0x8;
        local_58 = (uint *)0x0;
        if (uVar16 <= uVar9) goto LAB_00a70870;
        bVar19 = true;
        local_d4 = (uint *)0x8;
        goto LAB_00a7073c;
      }
      goto LAB_00a71390;
    default:
      goto switchD_00a70554_caseD_b;
    case 0x66:
      uVar13 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar16;
      if (uVar16 < uVar13) {
        uVar12 = uVar13;
      }
      if (uVar16 <= uVar13) goto LAB_00a70c90;
      cVar5 = *(char *)(uVar11 + uVar13);
      uVar16 = uVar9 + 2;
      *(uint *)(param_2 + 0x14) = uVar16;
      if (cVar5 == 'a') {
        if (uVar16 == uVar12) goto LAB_00a70c90;
        cVar5 = *(char *)(uVar11 + uVar16);
        uVar16 = uVar9 + 3;
        *(uint *)(param_2 + 0x14) = uVar16;
        if (cVar5 == 'l') {
          if (uVar16 == uVar12) goto LAB_00a70c90;
          cVar5 = *(char *)(uVar11 + uVar16);
          uVar16 = uVar9 + 4;
          *(uint *)(param_2 + 0x14) = uVar16;
          if (cVar5 == 's') {
            if (uVar16 == uVar12) goto LAB_00a70c90;
            cVar5 = *(char *)(uVar11 + uVar16);
            local_40 = uVar9 + 5;
            *(uint *)(param_2 + 0x14) = local_40;
            if (cVar5 == 'e') {
              local_b8 = 1;
              uVar11 = 0;
              puVar17 = (uint *)0x73;
              goto LAB_00a70ff0;
            }
          }
        }
      }
      break;
    case 0x6e:
      uVar13 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar16;
      if (uVar16 < uVar13) {
        uVar12 = uVar13;
      }
      if (uVar16 <= uVar13) goto LAB_00a70c90;
      cVar5 = *(char *)(uVar11 + uVar13);
      uVar16 = uVar9 + 2;
      *(uint *)(param_2 + 0x14) = uVar16;
      if (cVar5 != 'u') break;
      if (uVar16 == uVar12) goto LAB_00a70c90;
      cVar5 = *(char *)(uVar11 + uVar16);
      uVar16 = uVar9 + 3;
      *(uint *)(param_2 + 0x14) = uVar16;
      if (cVar5 == 'l') {
        if (uVar16 == uVar12) goto LAB_00a70c90;
        cVar5 = *(char *)(uVar11 + uVar16);
        local_40 = uVar9 + 4;
        *(uint *)(param_2 + 0x14) = local_40;
        if (cVar5 == 'l') {
          local_b8 = 0;
          puVar17 = (uint *)&DAT_0000006c;
          goto LAB_00a70ff0;
        }
      }
      break;
    case 0x74:
      uVar13 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
      uVar12 = uVar16;
      if (uVar16 < uVar13) {
        uVar12 = uVar13;
      }
      if (uVar16 <= uVar13) {
LAB_00a70c90:
        local_b8 = 5;
LAB_00a70c94:
        bStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        uVar6 = FUN_005b8c9c(param_2,&local_b8);
        goto LAB_00a70ca4;
      }
      cVar5 = *(char *)(uVar11 + uVar13);
      uVar16 = uVar9 + 2;
      *(uint *)(param_2 + 0x14) = uVar16;
      if (cVar5 != 'r') break;
      if (uVar16 == uVar12) goto LAB_00a70c90;
      cVar5 = *(char *)(uVar11 + uVar16);
      uVar16 = uVar9 + 3;
      *(uint *)(param_2 + 0x14) = uVar16;
      if (cVar5 == 'u') {
        if (uVar16 == uVar12) goto LAB_00a70c90;
        cVar5 = *(char *)(uVar11 + uVar16);
        local_40 = uVar9 + 4;
        *(uint *)(param_2 + 0x14) = local_40;
        if (cVar5 == 'e') {
          uVar11 = 1;
          local_b8 = 1;
          puVar17 = (uint *)0x75;
          goto LAB_00a70ff0;
        }
      }
      break;
    case 0x7b:
      cVar5 = *(char *)(param_2 + 0x24) + -1;
      *(char *)(param_2 + 0x24) = cVar5;
      if (cVar5 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        local_94 = 1;
        local_98 = param_2;
        FUN_0134d8a0(&local_b8,&local_98);
        iVar2 = local_98;
        if (local_b8 == 1) {
          puVar14 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        }
        else {
          if (bStack_b7 != 1) {
            local_c4 = (uint *)0x0;
            local_cc = (uint *)0x0;
            local_d0 = 5;
            goto LAB_00a70e28;
          }
          *(undefined4 *)(local_98 + 8) = 0;
          *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
          FUN_0157e384(&local_40,local_98 + 0xc,local_98);
          puVar17 = local_38;
          puVar14 = local_3c;
          if (local_40 != 2) {
            if (local_38 == (uint *)0x1e) {
              uVar9 = 0x1e;
              iVar7 = thunk_FUN_016dd50a(local_3c,&DAT_003c519d,0x1e);
              if (iVar7 != 0) {
                iVar7 = thunk_FUN_016d4a50(0x1e);
                bVar19 = iVar7 == 0;
                if (bVar19) {
                  uVar9 = 1;
                  iVar7 = 0x1e;
                }
                puStack_ad._0_1_ = (char)((uint)iVar7 >> 0x18);
                puStack_b5._1_3_ = (uint3)uVar9;
                puStack_b1 = (uint *)(iVar7 << 8);
                if (bVar19) goto LAB_00a70d50;
                goto LAB_00a71078;
              }
            }
            else {
              FUN_00a8a700(&local_b8,local_38,0,1,1);
              uVar9 = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
              if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 1)
              {
LAB_00a70d50:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar9,CONCAT13((char)puStack_ad,puStack_b1._1_3_));
              }
LAB_00a71078:
              puVar3 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
              FUN_016dd1aa(puVar3,puVar14,puVar17);
              if (uVar9 != 0x80000000) {
                local_88 = (uint *)0x0;
                local_90 = (uint *)0x0;
                local_40 = uVar9;
                local_3c = puVar3;
                local_38 = puVar17;
                FUN_00a71708(&local_d0,&local_98);
                if (local_d0 == 6) {
                  if (uVar9 != 0) {
                    thunk_FUN_016d3fb4(puVar3);
                  }
                  goto LAB_00a71370;
                }
                FUN_00a40030(&local_b8,&local_90,&local_40,&local_d0);
                if (local_b8 != 6) {
                  FUN_00a358c8(&local_b8);
                }
                puVar8 = (undefined4 *)((uint)&local_80 | 4);
                puVar14 = (uint *)((uint)&local_b8 | 4);
                goto LAB_00a7119c;
              }
            }
            local_cc = (uint *)FUN_00a715c4(iVar2);
            if (local_cc == (uint *)0x0) {
              FUN_00a65238(&local_b8,iVar2);
              iVar2 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
              if (iVar2 != 0) {
                iVar7 = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
                FUN_00a70244(&local_b8,iVar2,iVar7);
                if (local_b8 == 6) {
                  local_cc = (uint *)FUN_00a7036c(CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_));
                  local_d0 = 6;
                }
                else {
                  uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
                  local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
                  local_c8 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
                  local_c4 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
                  local_d0 = local_b8;
                  bStack_cf = bStack_b7;
                  puStack_c0 = puStack_a8;
                  puStack_bc = puStack_a4;
                }
                if (iVar7 != 0) {
                  thunk_FUN_016d3fb4(iVar2);
                }
                goto LAB_00a70e28;
              }
              local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
            }
            local_d0 = 6;
            goto LAB_00a70e28;
          }
        }
        local_d0 = 6;
        local_cc = puVar14;
        goto LAB_00a70e28;
      }
LAB_00a71390:
      local_b8 = 0x18;
      goto LAB_00a70600;
    }
    local_b8 = 9;
    goto LAB_00a70c94;
  }
  puVar17 = (uint *)0x0;
  goto LAB_00a70ff0;
LAB_00a7119c:
  FUN_0134d8a0(&local_b8,&local_98);
  iVar2 = local_98;
  if (local_b8 != 1) {
    if (bStack_b7 != 1) {
      local_d0 = 5;
      puStack_ad = local_88;
      puStack_b1 = puStack_8c;
      puStack_b5 = local_90;
      bStack_cf = local_b8;
      uStack_ce = (ushort)(CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)) >> 8);
      local_cc = local_90;
      local_c8 = puStack_8c;
      local_c4 = local_88;
      goto LAB_00a70e28;
    }
    FUN_00a7f164(&local_b8,local_98);
    iVar7 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    if (iVar7 == -0x80000000) goto LAB_00a712b8;
    uVar6 = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    uVar4 = CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    puVar17 = (uint *)FUN_00a715c4(iVar2);
    if (puVar17 != (uint *)0x0) {
LAB_00a71350:
      if (iVar7 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      goto LAB_00a71364;
    }
    FUN_00a70514(&local_b8,iVar2);
    if (local_b8 == 6) {
      puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      goto LAB_00a71350;
    }
    local_40 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    local_3c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    local_38 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_34 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    puStack_30 = puStack_a8;
    puStack_2c = puStack_a4;
    *puVar14 = local_40;
    puVar14[1] = (uint)local_3c;
    puVar14[2] = (uint)local_38;
    puVar14[3] = (uint)local_34;
    puVar14[4] = (uint)puStack_a8;
    puVar14[5] = (uint)puStack_a4;
    local_80 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    uStack_7c = CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    uStack_78 = CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_74 = CONCAT13(uStack_a9,puStack_ad._1_3_);
    puStack_70 = puStack_a8;
    puStack_6c = puStack_a4;
    puStack_68 = local_a0;
    local_58 = (uint *)*puVar8;
    local_54 = (uint *)puVar8[1];
    local_50 = (uint *)puVar8[2];
    uStack_4c = puVar8[3];
    uStack_48 = puVar8[4];
    uStack_44 = puVar8[5];
    local_64 = iVar7;
    local_60 = uVar6;
    local_5c = uVar4;
    FUN_00a40030(&local_b8,&local_90,&local_64);
    if (local_b8 != 6) {
      FUN_00a358c8(&local_b8);
    }
    goto LAB_00a7119c;
  }
LAB_00a712b8:
  puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
LAB_00a71364:
  local_d0 = 6;
  local_cc = puVar17;
LAB_00a71370:
  FUN_00a5be54(&local_90);
LAB_00a70e28:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
LAB_00a70e44:
    switch(*(char *)(*puVar18 + uVar9)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_00a70e5c_caseD_9;
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
      goto switchD_00a70e5c_caseD_b;
    case ',':
      local_40 = 0x15;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
      goto LAB_00a70f14;
    default:
      if (*(char *)(*puVar18 + uVar9) == '}') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        local_b8 = local_d0;
        bStack_b7 = bStack_cf;
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
        if (local_d0 == 6) goto LAB_00a70f90;
        uVar16 = (uint)uStack_ce;
        unaff_r10 = puStack_c0;
        unaff_r11 = puStack_bc;
        local_b8 = local_d0;
        puVar18 = local_cc;
        puVar14 = local_c8;
        puVar17 = local_c4;
        uVar9 = local_40;
        goto joined_r0x00a70fe0;
      }
switchD_00a70e5c_caseD_b:
      local_40 = 0x16;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
      goto LAB_00a70f14;
    }
  }
LAB_00a70f00:
  local_40 = 3;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_40);
LAB_00a70f14:
  puVar18 = local_cc;
  local_b8 = local_d0;
  bStack_b7 = bStack_cf;
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
  local_a0 = puVar14;
  if (local_d0 == 6) {
    FUN_005c3974(puVar14);
    goto LAB_00a70f40;
  }
  goto LAB_00a70f5c;
switchD_00a70e5c_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (*(uint *)(param_2 + 0x10) == uVar9) goto LAB_00a70f00;
  goto LAB_00a70e44;
LAB_00a7073c:
  do {
    puVar14 = local_50;
    while( true ) {
      uVar11 = (uint)*(byte *)(*puVar18 + uVar9);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar16 == uVar9) goto LAB_00a70870;
    }
    if (uVar11 == 0x5d) {
      bVar10 = 4;
      local_34 = local_50;
      local_38 = local_54;
      local_3c = local_58;
      goto LAB_00a70b64;
    }
    if (!bVar19) {
      if (uVar11 != 0x2c) {
        local_b8 = 7;
        bStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_34 = extraout_r3_04;
        goto LAB_00a70888;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar16 <= uVar9) {
LAB_00a712f8:
        local_b8 = 5;
        bStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_34 = extraout_r3_03;
        goto LAB_00a70888;
      }
      while( true ) {
        uVar11 = (uint)*(byte *)(*puVar18 + uVar9);
        uVar12 = uVar11 - 9;
        if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) break;
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
        if (uVar16 == uVar9) goto LAB_00a712f8;
      }
      if (uVar11 == 0x5d) {
        local_b8 = 0x15;
        bStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
        local_34 = extraout_r3_05;
        goto LAB_00a70888;
      }
    }
    FUN_00a70514(&local_b8,param_2);
    if (local_b8 == 6) {
      puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      local_34 = extraout_r3;
      goto LAB_00a70888;
    }
    local_38 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_34 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    uVar1 = *(undefined2 *)((uint)&local_b8 | 1);
    *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_40 | 1) = uVar1;
    local_3c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    puStack_30 = puStack_a8;
    puStack_2c = puStack_a4;
    local_40 = CONCAT31(local_40._1_3_,local_b8);
    if (puVar14 == local_58) {
      FUN_0157eb1c(&local_58);
      local_d4 = local_54;
    }
    puVar17 = local_d4 + (int)puVar14 * 6;
    *puVar17 = local_40;
    puVar17[1] = (uint)local_3c;
    puVar17[2] = (uint)local_38;
    puVar17[3] = (uint)local_34;
    puVar17[4] = (uint)puStack_30;
    puVar17[5] = (uint)puStack_2c;
    local_50 = (uint *)((int)puVar14 + 1);
    uVar16 = *(uint *)(param_2 + 0x10);
    bVar19 = false;
    uVar9 = *(uint *)(param_2 + 0x14);
  } while (uVar9 < uVar16);
LAB_00a70870:
  puVar14 = local_50;
  local_b8 = 2;
  bStack_b7 = 0;
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  puVar17 = (uint *)FUN_008f9984(param_2,&local_b8);
  local_34 = extraout_r3_00;
LAB_00a70888:
  puVar15 = (undefined1 *)((int)puVar14 + 1);
  puVar14 = local_d4;
  while (puVar15 = puVar15 + -1, puVar15 != (undefined1 *)0x0) {
    FUN_00a5ed8c(puVar14);
    puVar14 = puVar14 + 6;
    local_34 = extraout_r3_01;
  }
  if (local_58 != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_d4);
    local_34 = extraout_r3_02;
  }
  uVar16 = *(uint *)(param_2 + 0x10);
  bVar10 = 6;
  uVar9 = *(uint *)(param_2 + 0x14);
  local_38 = (uint *)0x0;
  local_3c = puVar17;
LAB_00a70b64:
  uVar11 = local_40;
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_40 = CONCAT31(local_40._1_3_,bVar10);
  if (uVar9 < uVar16) {
LAB_00a70b8c:
    cVar5 = *(char *)(*puVar18 + uVar9);
    switch(cVar5) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_00a70ba4_caseD_9;
    case ',':
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
      if (uVar16 <= uVar9) goto LAB_00a71470;
      goto LAB_00a7140c;
    default:
      if (cVar5 == ']') {
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        bStack_b7 = (byte)(uVar11 >> 8);
        uStack_b6 = (undefined1)(uVar11 >> 0x10);
        puStack_b5._0_1_ = (undefined1)(uVar11 >> 0x18);
        puStack_b5._1_3_ = (uint3)local_3c;
        puStack_b1._0_1_ = (undefined1)((uint)local_3c >> 0x18);
        puStack_b1._1_3_ = SUB43(local_38,0);
        puStack_ad._0_1_ = (char)((uint)local_38 >> 0x18);
        puStack_ad._1_3_ = SUB43(local_34,0);
        uStack_a9 = (undefined1)((uint)local_34 >> 0x18);
        puStack_a8 = puStack_30;
        puStack_a4 = puStack_2c;
        local_b8 = bVar10;
        if (bVar10 == 6) {
LAB_00a70f90:
          puVar18 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
          uVar9 = local_40;
        }
        else {
          uVar16 = uVar11 >> 0x10;
          unaff_r10 = puStack_30;
          unaff_r11 = puStack_2c;
          puVar18 = local_3c;
          puVar14 = local_38;
          puVar17 = local_34;
          uVar9 = local_40;
joined_r0x00a70fe0:
          local_40 = uVar16;
          uVar11 = (uint)bStack_b7;
          puStack_a8 = unaff_r10;
          puStack_a4 = unaff_r11;
          if (local_b8 != 6) {
LAB_00a70ff0:
            *param_1 = local_b8;
            *(short *)(param_1 + 2) = (short)local_40;
            param_1[1] = (byte)uVar11;
            *(uint **)(param_1 + 4) = puVar18;
            *(uint **)(param_1 + 8) = puVar14;
            *(uint **)(param_1 + 0xc) = puVar17;
            *(uint **)(param_1 + 0x10) = unaff_r10;
            *(uint **)(param_1 + 0x14) = unaff_r11;
            return;
          }
        }
        goto LAB_00a713b0;
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
      local_58 = (uint *)&DAT_00000016;
      puVar14 = (uint *)FUN_008f9984(param_2,&local_58);
    }
    goto LAB_00a70c5c;
  }
LAB_00a70c48:
  local_58 = (uint *)&SUB_00000002;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_58);
  goto LAB_00a70c5c;
switchD_00a70ba4_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar16 == uVar9) goto LAB_00a70c48;
  goto LAB_00a70b8c;
switchD_00a70554_caseD_9:
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar16 == uVar9) goto LAB_00a705fc;
  goto LAB_00a7053c;
  while( true ) {
    uVar9 = uVar9 + 1;
    *(uint *)(param_2 + 0x14) = uVar9;
    if (uVar16 == uVar9) break;
LAB_00a7140c:
    uVar11 = (uint)*(byte *)(*puVar18 + uVar9);
    uVar12 = uVar11 - 9;
    if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
      if (uVar11 == 0x5d) {
        local_58 = (uint *)&DAT_00000015;
        puVar14 = (uint *)FUN_008f9984(param_2,&local_58);
        goto LAB_00a70c5c;
      }
      break;
    }
  }
LAB_00a71470:
  local_58 = (uint *)&DAT_00000016;
  puVar14 = (uint *)FUN_008f9984(param_2,&local_58);
LAB_00a70c5c:
  puVar18 = local_3c;
  local_b8 = (byte)local_40;
  bStack_b7 = (byte)(local_40 >> 8);
  uStack_b6 = (undefined1)(local_40 >> 0x10);
  puStack_b5._0_1_ = (undefined1)(local_40 >> 0x18);
  puStack_b5._1_3_ = (uint3)local_3c;
  puStack_b1._0_1_ = (undefined1)((uint)local_3c >> 0x18);
  puStack_b1._1_3_ = SUB43(local_38,0);
  puStack_ad._0_1_ = (char)((uint)local_38 >> 0x18);
  puStack_ad._1_3_ = SUB43(local_34,0);
  uStack_a9 = (undefined1)((uint)local_34 >> 0x18);
  puStack_a8 = puStack_30;
  puStack_a4 = puStack_2c;
  local_a0 = puVar14;
  if (local_b8 == 6) {
    FUN_005c3974(puVar14);
LAB_00a70f40:
    thunk_FUN_016d3fb4(puVar14);
    uVar9 = local_40;
  }
  else {
LAB_00a70f5c:
    puVar18 = local_a0;
    FUN_00a358c8(&local_b8);
    uVar9 = local_40;
  }
LAB_00a713b0:
  local_40 = uVar9;
  local_38 = (uint *)FUN_00a6da54(puVar18,param_2);
LAB_00a70b30:
  *(uint **)(param_1 + 4) = local_38;
  *param_1 = 6;
  return;
}

