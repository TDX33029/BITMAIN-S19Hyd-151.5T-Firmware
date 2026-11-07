// FUN_005b9324 @ 005b9324 size=3856 calls_out=21 calls_in=0
// strings: kernel_state | efuse_state | uboot_state | is_persistent | kernel_state | kernel_version

void FUN_005b9324(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int **ppiVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 uVar21;
  int *piVar22;
  byte bVar23;
  int *unaff_r11;
  int *piVar24;
  undefined4 local_94;
  int *local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int **local_74;
  undefined4 *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  char local_48;
  int *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  bVar23 = (byte)unaff_r11;
  local_48 = -0x80;
  local_54 = 0;
  local_58 = 0;
  local_64 = 0;
  local_68 = 1;
  local_6c = 0;
  local_60 = param_2;
  local_5c = param_3;
  local_50 = param_2;
  local_4c = param_3;
  if (param_3 != 0) {
    do {
      uVar18 = (uint)*(byte *)(param_2 + local_58);
      if ((0x17 < uVar18 - 9) || ((1 << (uVar18 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar18 != 0x5b) {
          if (uVar18 != 0x7b) {
            puVar5 = (undefined4 *)FUN_005b8238(&local_6c,&uStack_25,&DAT_018568e8);
            goto LAB_005ba158;
          }
          local_58 = local_58 + 1;
          local_48 = '\x7f';
          local_40 = 1;
          local_44 = &local_6c;
          local_7c = 2;
          local_80 = 3;
          local_90 = (int *)0x35a965;
          local_8c = 3;
          local_88 = 3;
          local_84 = 2;
          local_74 = (int **)&DAT_80000000;
          goto LAB_005b9424;
        }
        local_58 = local_58 + 1;
        local_48 = '\x7f';
        local_2c = CONCAT31(local_2c._1_3_,1);
        local_30 = &local_6c;
        FUN_005e5d80(&local_3c,&local_30);
        if ((char)local_3c == '\x01') {
LAB_005b9eb4:
          ppiVar16 = (int **)&DAT_80000000;
          uVar17 = 0;
          uVar12 = 0;
          uVar21 = 0;
          local_70 = local_38;
        }
        else {
          bVar14 = 0;
          if (local_3c._1_1_ == '\x01') {
            FUN_00e76a88(&local_3c,local_30);
            if ((char)local_3c == '\x01') goto LAB_005b9eb4;
            bVar14 = local_3c._1_1_;
          }
          FUN_005e5d80(&local_3c,&local_30);
          if ((char)local_3c == '\x01') goto LAB_005b9eb4;
          bVar23 = 0;
          bVar3 = 0;
          if (local_3c._1_1_ == '\x01') {
            FUN_00e76a88(&local_3c,local_30);
            if ((char)local_3c == '\x01') goto LAB_005b9eb4;
            bVar3 = (byte)((uint)local_3c >> 8);
          }
          bVar23 = bVar3;
          FUN_005e5d80(&local_3c,&local_30);
          if ((char)local_3c == '\x01') goto LAB_005b9eb4;
          if (local_3c._1_1_ == '\x01') {
            FUN_00f171e4(&local_3c,local_30);
            local_70 = local_38;
            if (local_3c == (int **)&DAT_80000000) goto LAB_005b9eb4;
            local_94 = local_34;
            ppiVar16 = local_3c;
          }
          else {
            ppiVar16 = (int **)0x0;
            local_70 = (undefined4 *)0x1;
            local_94 = 0;
          }
          FUN_005e5d80(&local_3c,&local_30);
          if ((char)local_3c == '\x01') {
LAB_005ba06c:
            puVar5 = local_38;
            uVar17 = 0;
            if (ppiVar16 != (int **)0x0) {
              thunk_FUN_016d3fb4(local_70);
            }
            uVar12 = 0;
            uVar21 = 0;
            local_70 = puVar5;
            ppiVar16 = (int **)&DAT_80000000;
          }
          else {
            uVar21 = 0;
            if (local_3c._1_1_ == '\x01') {
              FUN_00ed7eac(&local_3c,local_30);
              if ((char)local_3c == '\x01') goto LAB_005ba06c;
              uVar21 = local_3c._1_1_;
            }
            FUN_005e5d80(&local_3c,&local_30);
            if ((char)local_3c == '\x01') goto LAB_005ba06c;
            uVar12 = 0;
            if (local_3c._1_1_ == '\x01') {
              FUN_00ed7eac(&local_3c,local_30);
              if ((char)local_3c == '\x01') goto LAB_005ba06c;
              uVar12 = local_3c._1_1_;
            }
            FUN_005e5d80(&local_3c,&local_30);
            if ((char)local_3c == '\x01') goto LAB_005ba06c;
            uVar17 = 0;
            if (local_3c._1_1_ == '\x01') {
              FUN_00ed7eac(&local_3c,local_30);
              if ((char)local_3c == '\x01') goto LAB_005ba06c;
              uVar17 = local_3c._1_1_;
            }
            local_74._0_1_ = bVar23 & 1;
            bVar23 = bVar14 & 1;
          }
        }
        local_48 = local_48 + '\x01';
        puVar5 = (undefined4 *)FUN_008fad50(&local_6c);
        if (ppiVar16 != (int **)&DAT_80000000) goto LAB_005ba138;
        if (puVar5 == (undefined4 *)0x0) goto LAB_005ba154;
        FUN_005c3974(puVar5);
        goto LAB_005ba12c;
      }
      local_58 = local_58 + 1;
    } while (param_3 != local_58);
  }
  local_3c = (int **)&DAT_00000005;
  uVar4 = FUN_008f9984(&local_6c,&local_3c);
  goto LAB_005ba168;
LAB_005b9424:
  FUN_008fa450(&local_3c,&local_44);
  piVar24 = local_44;
  if ((char)local_3c != '\x01') {
    if (local_3c._1_1_ != '\x01') {
      uVar17 = 0;
      if (local_88 != 3) {
        uVar17 = (undefined1)local_88;
      }
      uVar12 = 0;
      if (local_8c != 3) {
        uVar12 = (undefined1)local_8c;
      }
      uVar21 = 0;
      if (local_80 != 3) {
        uVar21 = (undefined1)local_80;
      }
      if (local_74 == (int **)&DAT_80000000) {
        ppiVar16 = (int **)0x0;
        local_94 = 0;
        local_70 = (undefined4 *)0x1;
      }
      else {
        ppiVar16 = local_74;
      }
      local_74 = (int **)(local_7c & 1);
      bVar23 = (byte)local_84 & 1;
      goto LAB_005ba0fc;
    }
    piVar22 = local_44 + 3;
    piVar1 = local_44 + 5;
    local_44[2] = 0;
    piVar24[5] = *piVar1 + 1;
    FUN_0157e384(&local_3c,piVar22,piVar24);
    uVar4 = local_34;
    puVar5 = local_38;
    if (local_3c == (int **)&SUB_00000002) goto LAB_005ba0d0;
    unaff_r11 = piVar24;
    switch(local_34) {
    case 0xb:
      iVar8 = thunk_FUN_016dd50a(local_38,"efuse_state",0xb);
      if (iVar8 == 0) {
        if (local_80 == 3) {
          puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
          if (puVar5 != (undefined4 *)0x0) goto LAB_005ba0d0;
          FUN_00ed7eac(&local_3c,piVar24);
          if ((char)local_3c == '\x01') goto LAB_005b9f4c;
          local_80 = (uint)local_3c >> 8 & 0xff;
          goto LAB_005b9424;
        }
        local_90 = (int *)0x35a94f;
      }
      else {
        iVar8 = thunk_FUN_016dd50a(puVar5,"uboot_state",0xb);
        if (iVar8 != 0) goto switchD_005b949c_caseD_f;
        if (local_8c == 3) {
          puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
          if (puVar5 != (undefined4 *)0x0) goto LAB_005ba0d0;
          FUN_00ed7eac(&local_3c,piVar24);
          if ((char)local_3c == '\x01') goto LAB_005b9f4c;
          local_8c = (uint)local_3c >> 8 & 0xff;
          goto LAB_005b9424;
        }
        local_90 = (int *)0x35a95a;
      }
      break;
    case 0xc:
      iVar8 = thunk_FUN_016dd50a(local_38,"kernel_state",0xc);
      if (iVar8 != 0) goto switchD_005b949c_caseD_f;
      if (local_88 == 3) {
        puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
        if (puVar5 != (undefined4 *)0x0) goto LAB_005ba0d0;
        FUN_00ed7eac(&local_3c,piVar24);
        if ((char)local_3c == '\x01') goto LAB_005b9f4c;
        local_88 = (uint)local_3c >> 8 & 0xff;
        goto LAB_005b9424;
      }
      break;
    case 0xd:
      iVar8 = thunk_FUN_016dd50a(local_38,"is_persistent",0xd);
      if (iVar8 != 0) goto switchD_005b949c_caseD_f;
      if (local_84 == 2) {
        puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
        if (puVar5 != (undefined4 *)0x0) goto LAB_005ba0d0;
        FUN_00e76a88(&local_3c,piVar24);
        if ((char)local_3c == '\x01') goto LAB_005b9f4c;
        local_84 = (uint)local_3c >> 8 & 0xff;
        goto LAB_005b9424;
      }
      local_90 = (int *)0x35a920;
      break;
    case 0xe:
      iVar8 = thunk_FUN_016dd50a(local_38,"kernel_version",0xe);
      if (iVar8 != 0) goto switchD_005b949c_caseD_f;
      if (local_74 == (int **)&DAT_80000000) {
        local_70 = (undefined4 *)FUN_01114eb4(piVar24);
        if (local_70 != (undefined4 *)0x0) goto LAB_005ba0f4;
        FUN_00f171e4(&local_3c,piVar24);
        local_70 = local_38;
        if (local_3c == (int **)&DAT_80000000) goto LAB_005ba0f4;
        local_94 = local_34;
        local_74 = local_3c;
        goto LAB_005b9424;
      }
      local_90 = (int *)0x35a941;
      break;
    default:
switchD_005b949c_caseD_f:
      puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
      if (puVar5 == (undefined4 *)0x0) {
        uVar6 = piVar24[4];
        uVar18 = piVar24[5];
        piVar24[2] = 0;
        if (uVar18 < uVar6) {
          iVar8 = piVar24[3];
          uVar13 = 0;
          uVar20 = 0;
LAB_005b96d4:
          uVar15 = (uint)*(byte *)(iVar8 + uVar18);
          switch(uVar15) {
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            uVar18 = uVar18 + 1;
            piVar24[5] = uVar18;
            if (uVar6 == uVar18) goto LAB_005b9ef8;
            goto LAB_005b96d4;
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
switchD_005b96ec_caseD_b:
            if (9 < uVar15 - 0x30) {
              local_3c = (int **)&DAT_0000000a;
              puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
              goto LAB_005ba0cc;
            }
            puVar5 = (undefined4 *)FUN_008fa214(piVar24);
            break;
          case 0x22:
            piVar24[5] = uVar18 + 1;
            puVar5 = (undefined4 *)FUN_0157d450(piVar22);
            break;
          case 0x2d:
            piVar24[5] = uVar18 + 1;
            puVar5 = (undefined4 *)FUN_008fa214(piVar24);
            break;
          default:
            switch(uVar15) {
            case 0x5b:
            case 0x7b:
              iVar8 = piVar24[2];
              if ((uint)(*piVar24 - iVar8) < uVar13) {
                FUN_00edff4c(piVar24,iVar8,uVar13,1,1);
                iVar8 = piVar24[2];
              }
              bVar10 = false;
              if (uVar13 != 0) {
                *(char *)(piVar24[1] + iVar8) = (char)uVar20;
                iVar8 = iVar8 + 1;
              }
              piVar24[2] = iVar8;
              piVar24[5] = piVar24[5] + 1;
              goto LAB_005b9a38;
            default:
              goto switchD_005b96ec_caseD_b;
            case 0x66:
              uVar11 = uVar18 + 1;
              piVar24[5] = uVar11;
              uVar15 = uVar6;
              if (uVar6 < uVar11) {
                uVar15 = uVar11;
              }
              if (uVar11 < uVar6) {
                cVar2 = *(char *)(iVar8 + uVar11);
                uVar6 = uVar18 + 2;
                piVar24[5] = uVar6;
                if (cVar2 == 'a') {
                  if (uVar6 == uVar15) goto LAB_005ba27c;
                  cVar2 = *(char *)(iVar8 + uVar6);
                  uVar6 = uVar18 + 3;
                  piVar24[5] = uVar6;
                  if (cVar2 == 'l') {
                    if (uVar6 == uVar15) goto LAB_005ba27c;
                    cVar2 = *(char *)(iVar8 + uVar6);
                    uVar6 = uVar18 + 4;
                    piVar24[5] = uVar6;
                    if (cVar2 == 's') {
                      if (uVar6 == uVar15) goto LAB_005ba27c;
                      cVar2 = *(char *)(iVar8 + uVar6);
                      piVar24[5] = uVar18 + 5;
                      if (cVar2 == 'e') goto LAB_005b9a04;
                    }
                  }
                }
                local_3c = (int **)&DAT_00000009;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
              else {
LAB_005ba27c:
                local_3c = (int **)&DAT_00000005;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
              break;
            case 0x6e:
              uVar11 = uVar18 + 1;
              piVar24[5] = uVar11;
              uVar15 = uVar6;
              if (uVar6 < uVar11) {
                uVar15 = uVar11;
              }
              if (uVar11 < uVar6) {
                cVar2 = *(char *)(iVar8 + uVar11);
                uVar6 = uVar18 + 2;
                piVar24[5] = uVar6;
                if (cVar2 == 'u') {
                  if (uVar6 == uVar15) goto LAB_005ba2bc;
                  cVar2 = *(char *)(iVar8 + uVar6);
                  uVar6 = uVar18 + 3;
                  piVar24[5] = uVar6;
                  if (cVar2 != 'l') goto LAB_005ba364;
                  if (uVar6 == uVar15) goto LAB_005ba2bc;
                  cVar2 = *(char *)(iVar8 + uVar6);
                  piVar24[5] = uVar18 + 4;
                  if (cVar2 != 'l') goto LAB_005ba364;
                  goto LAB_005b9a04;
                }
LAB_005ba364:
                local_3c = (int **)&DAT_00000009;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
              else {
LAB_005ba2bc:
                local_3c = (int **)&DAT_00000005;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
              break;
            case 0x74:
              uVar11 = uVar18 + 1;
              piVar24[5] = uVar11;
              uVar15 = uVar6;
              if (uVar6 < uVar11) {
                uVar15 = uVar11;
              }
              if (uVar11 < uVar6) {
                cVar2 = *(char *)(iVar8 + uVar11);
                uVar6 = uVar18 + 2;
                piVar24[5] = uVar6;
                if (cVar2 == 'r') {
                  if (uVar6 == uVar15) goto LAB_005ba29c;
                  cVar2 = *(char *)(iVar8 + uVar6);
                  uVar6 = uVar18 + 3;
                  piVar24[5] = uVar6;
                  if (cVar2 == 'u') {
                    if (uVar6 == uVar15) goto LAB_005ba29c;
                    cVar2 = *(char *)(iVar8 + uVar6);
                    piVar24[5] = uVar18 + 4;
                    if (cVar2 == 'e') goto LAB_005b9a04;
                  }
                }
                local_3c = (int **)&DAT_00000009;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
              else {
LAB_005ba29c:
                local_3c = (int **)&DAT_00000005;
                puVar5 = (undefined4 *)FUN_005b8c9c(piVar24,&local_3c);
              }
            }
            goto LAB_005ba0cc;
          }
          if (puVar5 != (undefined4 *)0x0) goto LAB_005ba270;
LAB_005b9a04:
          bVar10 = true;
          if (uVar13 == 0) {
            if (piVar24[2] == 0) {
              goto LAB_005b9424;
            }
            iVar8 = piVar24[2] + -1;
            piVar24[2] = iVar8;
            uVar15 = (uint)*(byte *)(piVar24[1] + iVar8);
          }
          else {
            uVar15 = uVar20;
          }
LAB_005b9a38:
          uVar6 = piVar24[4];
          uVar18 = piVar24[5];
          if (uVar18 < uVar6) {
            iVar8 = piVar24[3];
            iVar19 = piVar24[2];
            do {
              cVar2 = *(char *)(iVar8 + uVar18);
              switch(cVar2) {
              case '\t':
              case '\n':
              case '\r':
              case ' ':
                uVar18 = uVar18 + 1;
                piVar24[5] = uVar18;
                if (uVar6 == uVar18) goto LAB_005ba09c;
                break;
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
                goto switchD_005b9a68_caseD_b;
              case ',':
                if (bVar10) {
                  uVar18 = uVar18 + 1;
                  piVar24[5] = uVar18;
                }
                goto joined_r0x005b9cec;
              default:
                if (cVar2 == ']') {
                  if (uVar15 != 0x5b) goto switchD_005b9a68_caseD_b;
                }
                else if (cVar2 != '}' || uVar15 != 0x7b) goto switchD_005b9a68_caseD_b;
                uVar18 = uVar18 + 1;
                piVar24[5] = uVar18;
                if (iVar19 == 0) {
                  goto LAB_005b9424;
                }
                iVar19 = iVar19 + -1;
                piVar24[2] = iVar19;
                bVar10 = true;
                uVar15 = (uint)*(byte *)(piVar24[1] + iVar19);
                if (uVar6 <= uVar18) goto LAB_005ba09c;
              }
            } while( true );
          }
LAB_005ba09c:
          local_3c = (int **)&SUB_00000002;
          if (uVar15 != 0x5b) {
            if (uVar15 != 0x7b) {
              puVar9 = &DAT_018a9324;
              goto LAB_005ba4b4;
            }
            local_3c = (int **)0x3;
          }
          puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
          goto LAB_005ba0cc;
        }
LAB_005b9ef8:
        local_3c = (int **)&DAT_00000005;
        puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
        goto LAB_005ba0cc;
      }
      goto LAB_005ba0d0;
    case 0x14:
      iVar8 = thunk_FUN_016dd50a(local_38,"persistence_possible",0x14);
      if (iVar8 != 0) goto switchD_005b949c_caseD_f;
      if (local_7c != 2) {
        local_90 = (int *)0x35a92d;
        break;
      }
      puVar5 = (undefined4 *)FUN_01114eb4(piVar24);
      if (puVar5 != (undefined4 *)0x0) goto LAB_005ba0d0;
      FUN_00e76a88(&local_3c,piVar24);
      if ((char)local_3c != '\x01') goto code_r0x005b9db8;
      goto LAB_005b9f4c;
    }
    local_38 = &DAT_0157d360;
    local_3c = &local_30;
    local_2c = uVar4;
    local_30 = local_90;
    puVar5 = (undefined4 *)FUN_00f56780(&DAT_00582dbd,&local_3c);
LAB_005ba0cc:
    goto LAB_005ba0d0;
  }
  goto LAB_005b9f4c;
code_r0x005b9db8:
  local_7c = (uint)local_3c >> 8 & 0xff;
  goto LAB_005b9424;
switchD_005b9a68_caseD_b:
  if (bVar10) {
    local_3c = (int **)&DAT_00000007;
    if (uVar15 != 0x5b) {
      if (uVar15 != 0x7b) {
        puVar9 = &DAT_018a9334;
LAB_005ba4b4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,puVar9);
      }
      local_3c = (int **)&DAT_00000008;
    }
    puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
    goto LAB_005ba0cc;
  }
joined_r0x005b9cec:
  uVar20 = uVar15;
  if (uVar15 == 0x7b) {
    if (uVar6 <= uVar18) {
LAB_005ba230:
      local_3c = (int **)0x3;
      puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
      goto LAB_005ba0cc;
    }
    while( true ) {
      uVar13 = *(byte *)(iVar8 + uVar18) - 9;
      if (0x19 < uVar13) goto LAB_005ba3fc;
      if ((1 << (uVar13 & 0xff) & 0x800013U) == 0) break;
      uVar18 = uVar18 + 1;
      piVar24[5] = uVar18;
      if (uVar6 == uVar18) goto LAB_005ba230;
    }
    if (uVar13 != 0x19) {
LAB_005ba3fc:
      local_3c = (int **)&DAT_00000011;
      puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
      goto LAB_005ba0cc;
    }
    piVar24[5] = uVar18 + 1;
    puVar5 = (undefined4 *)FUN_0157d450(piVar22);
    if (puVar5 == (undefined4 *)0x0) {
      uVar6 = piVar24[4];
      uVar18 = piVar24[5];
      if (uVar18 < uVar6) {
        iVar8 = *piVar22;
        do {
          switch(*(undefined1 *)(iVar8 + uVar18)) {
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            uVar18 = uVar18 + 1;
            piVar24[5] = uVar18;
            if (uVar6 == uVar18) goto LAB_005ba250;
            break;
          default:
            local_3c = (int **)&DAT_00000006;
            puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
            goto LAB_005ba0cc;
          case 0x3a:
            goto switchD_005b9bf8_caseD_3a;
          }
        } while( true );
      }
LAB_005ba250:
      local_3c = (int **)0x3;
      puVar5 = (undefined4 *)FUN_008f9984(piVar24,&local_3c);
      goto LAB_005ba0cc;
    }
LAB_005ba270:
    goto LAB_005ba0d0;
  }
  uVar13 = 1;
  if (uVar6 <= uVar18) goto LAB_005b9ef8;
  goto LAB_005b96d4;
switchD_005b9bf8_caseD_3a:
  uVar18 = uVar18 + 1;
  piVar24[5] = uVar18;
  uVar13 = 1;
  if (uVar6 <= uVar18) goto LAB_005b9ef8;
  goto LAB_005b96d4;
LAB_005b9f4c:
  piVar24 = unaff_r11;
  puVar5 = local_38;
LAB_005ba0d0:
  if (((uint)local_74 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_70);
  }
  local_70 = puVar5;
LAB_005ba0f4:
  bVar23 = (byte)piVar24;
  uVar21 = 0;
  ppiVar16 = (int **)&DAT_80000000;
  uVar12 = 0;
  uVar17 = 0;
LAB_005ba0fc:
  local_48 = local_48 + '\x01';
  puVar5 = (undefined4 *)FUN_008fb5ec(&local_6c);
  if (ppiVar16 == (int **)&DAT_80000000) {
    if (puVar5 == (undefined4 *)0x0) {
LAB_005ba154:
      puVar5 = local_70;
    }
    else {
      FUN_005c3974(puVar5);
LAB_005ba12c:
      puVar7 = puVar5;
      puVar5 = local_70;
LAB_005ba14c:
      thunk_FUN_016d3fb4(puVar7);
    }
  }
  else {
LAB_005ba138:
    if (puVar5 == (undefined4 *)0x0) {
      *(byte *)((int)param_1 + 0xd) = (byte)local_74;
      param_1[1] = local_70;
      *(undefined1 *)(param_1 + 4) = uVar17;
      *(undefined1 *)((int)param_1 + 0xf) = uVar12;
      *(undefined1 *)((int)param_1 + 0xe) = uVar21;
      *(byte *)(param_1 + 3) = bVar23;
      *param_1 = ppiVar16;
      param_1[2] = local_94;
      if (local_58 < local_5c) {
        do {
          uVar18 = *(byte *)(local_60 + local_58) - 9;
          if ((0x17 < uVar18) || ((1 << (uVar18 & 0xff) & 0x800013U) == 0)) {
            local_3c = (int **)&DAT_00000016;
            uVar4 = FUN_008f9984(&local_6c,&local_3c);
            *param_1 = 0x80000000;
            param_1[1] = uVar4;
            if (ppiVar16 != (int **)0x0) {
              thunk_FUN_016d3fb4(local_70);
            }
            break;
          }
          local_58 = local_58 + 1;
        } while (local_5c != local_58);
      }
      goto LAB_005ba170;
    }
    puVar7 = local_70;
    if (ppiVar16 != (int **)0x0) goto LAB_005ba14c;
  }
LAB_005ba158:
  uVar4 = FUN_00e959bc(puVar5,&local_6c);
LAB_005ba168:
  *param_1 = 0x80000000;
  param_1[1] = uVar4;
LAB_005ba170:
  if (local_6c != 0) {
    thunk_FUN_016d3fb4(local_68);
  }
  return;
}

