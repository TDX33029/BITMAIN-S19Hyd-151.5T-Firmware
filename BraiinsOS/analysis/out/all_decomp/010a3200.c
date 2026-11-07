// FUN_010a3200 @ 010a3200 size=2060 calls_out=8 calls_in=4
// strings: 

void FUN_010a3200(uint *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  byte bVar12;
  uint *local_9c;
  uint local_94;
  uint local_90;
  byte *local_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_38;
  byte *local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar4 = param_2[2];
  if (0xfffe < uVar4) {
    *(undefined2 *)param_1 = 0x803;
LAB_010a3458:
                    /* WARNING: Could not recover jumptable at 0x010a3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1]);
    return;
  }
  if ((uVar4 & 0xffff) == 0) {
    *(undefined2 *)param_1 = 0x903;
    goto LAB_010a3458;
  }
  if (uVar4 == 1) {
    if (*(char *)param_2[1] == '*') {
      pcVar3 = "*";
    }
    else {
      if (*(char *)param_2[1] != '/') {
        local_50 = *param_2;
        local_4c = param_2[1];
        uStack_48 = param_2[2];
        local_44 = param_2[3];
        FUN_010a6934(&local_38,&local_50);
        if (local_38 == 0) {
          *(undefined1 *)((int)param_1 + 1) = local_34._0_1_;
          *(undefined1 *)param_1 = 3;
          return;
        }
        *(uint *)((int)param_1 + 0xd) = CONCAT13((undefined1)uStack_30,local_34._1_3_);
        param_1[5] = uStack_2c;
        *(uint *)((int)param_1 + 0x11) = CONCAT13((undefined1)uStack_2c,uStack_30._1_3_);
        *(undefined2 *)(param_1 + 10) = 0xffff;
        param_1[6] = (uint)&PTR_LAB_01884310;
        param_1[7] = 1;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined1 *)(param_1 + 3) = local_34._0_1_;
        param_1[2] = local_38;
        *(undefined1 *)param_1 = 0;
        return;
      }
      pcVar3 = &DAT_00418645;
    }
    *(undefined2 *)(param_1 + 10) = 0xffff;
    *(undefined1 *)param_1 = 0;
    param_1[2] = (uint)&PTR_LAB_01884310;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = (uint)&PTR_LAB_01884310;
    param_1[7] = (uint)pcVar3;
    param_1[8] = 1;
    param_1[9] = 0;
    goto LAB_010a3458;
  }
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01884324);
  }
  if (*(char *)param_2[1] == '/') {
    local_38 = *param_2;
    local_34 = (byte *)param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_010a5eb0(&local_50,&local_38);
    if (local_50 == 0) {
      *(undefined1 *)((int)param_1 + 1) = (undefined1)local_4c;
      *(undefined1 *)param_1 = 3;
      return;
    }
    *(uint *)((int)param_1 + 0x21) = CONCAT13((undefined1)local_44,uStack_48._1_3_);
    *(uint *)((int)param_1 + 0x1d) = CONCAT13((undefined1)uStack_48,local_4c._1_3_);
    param_1[10] = local_40;
    *(uint *)((int)param_1 + 0x25) = CONCAT13((undefined1)local_40,local_44._1_3_);
    *(undefined1 *)(param_1 + 7) = (undefined1)local_4c;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (uint)&PTR_LAB_01884310;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = local_50;
    return;
  }
  local_90 = *param_2;
  local_88 = param_2[2];
  local_8c = (byte *)param_2[1];
  uStack_84 = param_2[3];
  if (local_88 < 7) {
    if (3 < local_88) goto LAB_010a3500;
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*local_8c;
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
    if (uVar4 == 0x68) {
      uVar4 = (uint)local_8c[1];
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar4 == 0x74) {
        uVar4 = (uint)local_8c[2];
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 == 0x74) {
          uVar4 = (uint)local_8c[3];
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x70) goto LAB_010a3804;
          uVar4 = (uint)local_8c[4];
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x3a) goto LAB_010a3804;
          uVar4 = (uint)local_8c[5];
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x2f) goto LAB_010a3804;
          uVar4 = (uint)local_8c[6];
          iVar8 = 0;
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 != 0x2f) goto LAB_010a3804;
LAB_010a33d8:
          uVar5 = 7;
          if (iVar8 != 0) {
            uVar5 = 8;
          }
          FUN_00f5effc(&local_50,&local_90,uVar5);
          (**(code **)(local_50 + 0x10))(&local_44,local_4c,uStack_48);
          uVar4 = iVar8 << 8 | 1;
          goto LAB_010a35a4;
        }
LAB_010a3804:
        if (local_88 != 7) {
          uVar4 = (uint)local_8c[2];
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          if (uVar4 == 0x74) {
            uVar4 = (uint)local_8c[3];
            if (uVar4 - 0x41 < 0x1a) {
              uVar4 = uVar4 | 0x20;
            }
            if (uVar4 == 0x70) {
              uVar4 = (uint)local_8c[4];
              if (uVar4 - 0x41 < 0x1a) {
                uVar4 = uVar4 | 0x20;
              }
              if (uVar4 == 0x73) {
                uVar4 = (uint)local_8c[5];
                if (uVar4 - 0x41 < 0x1a) {
                  uVar4 = uVar4 | 0x20;
                }
                if (uVar4 == 0x3a) {
                  uVar4 = (uint)local_8c[6];
                  if (uVar4 - 0x41 < 0x1a) {
                    uVar4 = uVar4 | 0x20;
                  }
                  if (uVar4 == 0x2f) {
                    uVar4 = (uint)local_8c[7];
                    iVar8 = 1;
                    if (uVar4 - 0x41 < 0x1a) {
                      uVar4 = uVar4 | 0x20;
                    }
                    if (uVar4 == 0x2f) goto LAB_010a33d8;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_010a3500:
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      if (local_88 == uVar9) goto LAB_010a35a4;
      if (""[local_8c[uVar9]] == '\0') {
        uVar4 = 0;
        goto LAB_010a35a4;
      }
      uVar6 = uVar9 + 1;
    } while (""[local_8c[uVar9]] != ':');
    if ((uVar9 + 3 <= local_88) && (*(short *)(local_8c + uVar9 + 1) == 0x2f2f)) {
      if (0x40 < uVar9) {
        *(undefined2 *)param_1 = 0xa03;
        goto LAB_010a3a64;
      }
      FUN_00f5effc(&local_38,&local_90,uVar9 + 3);
      FUN_00f5f114(&local_50,&local_38,uVar9);
      (**(code **)(local_50 + 0x10))(&local_44,local_4c,uStack_48);
      local_80 = local_38;
      uStack_7c = (uint)local_34;
      uStack_78 = uStack_30;
      uStack_74 = uStack_2c;
      local_9c = (uint *)thunk_FUN_016d4a50(0x10);
      if (local_9c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *local_9c = local_38;
      uVar4 = 2;
      local_9c[1] = (uint)local_34;
      local_9c[2] = uStack_30;
      local_9c[3] = uStack_2c;
    }
  }
LAB_010a35a4:
  if (local_88 == 0) {
    uVar7 = 4;
    if ((uVar4 & 0xff) == 0) goto LAB_010a3768;
  }
  else {
    uVar9 = 0;
    bVar12 = 0;
    bVar11 = false;
    bVar2 = false;
    bVar1 = 0;
    uVar6 = 0;
    do {
      switch(""[local_8c[uVar6]]) {
      case '#':
      case '/':
      case '?':
        goto switchD_010a3610_caseD_23;
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ';':
      case '<':
      case '=':
      case '>':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '\\':
        break;
      case ':':
        if (7 < uVar9) {
LAB_010a37f8:
          uVar7 = 2;
          goto LAB_010a3a2c;
        }
        uVar9 = uVar9 + 1;
        break;
      case '@':
        bVar1 = 1;
        local_94 = uVar6;
        goto LAB_010a35e4;
      case '[':
        if ((bool)(bVar2 | bVar12)) goto LAB_010a37f8;
        bVar12 = 1;
        bVar2 = false;
        break;
      case ']':
        if (bVar12 != 0xff || bVar11) goto LAB_010a37f8;
        bVar11 = true;
LAB_010a35e4:
        bVar2 = false;
        uVar9 = 0;
        break;
      default:
        if ((""[local_8c[uVar6]] == '\0') && (bVar2 = true, local_8c[uVar6] != 0x25)) {
          uVar7 = 0;
          goto LAB_010a3a2c;
        }
      }
      uVar6 = uVar6 + 1;
    } while (local_88 != uVar6);
    uVar6 = local_88;
switchD_010a3610_caseD_23:
    uVar7 = 2;
    if ((!(bool)(bVar11 ^ bVar12)) && (uVar9 < 2)) {
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else if ((bool)(bVar1 & local_94 - uVar6 == -1)) goto LAB_010a3a2c;
      if (!bVar2) {
        if ((uVar4 & 0xff) == 0) {
          uVar7 = 4;
          if (uVar6 == local_88) {
LAB_010a3768:
            *(undefined2 *)(param_1 + 10) = 0xffff;
            param_1[8] = 0;
            param_1[9] = 0;
            *param_1 = uVar4;
            param_1[1] = (uint)local_9c;
            param_1[2] = local_90;
            param_1[3] = (uint)local_8c;
            param_1[4] = local_88;
            param_1[5] = uStack_84;
            param_1[6] = (uint)&PTR_LAB_01884310;
            param_1[7] = 1;
            return;
          }
        }
        else {
          if (uVar6 != 0) {
            FUN_00f5effc(&local_70,&local_90,uVar6);
            local_54 = local_64;
            local_58 = local_68;
            local_5c = local_6c;
            local_60 = local_70;
            local_34 = local_8c;
            uStack_30 = local_88;
            uStack_2c = uStack_84;
            local_38 = local_90;
            FUN_010a5eb0(&local_50,&local_38);
            if (local_50 != 0) {
              *(uint *)((int)param_1 + 0x21) = CONCAT13((undefined1)local_44,uStack_48._1_3_);
              param_1[10] = local_40;
              *(uint *)((int)param_1 + 0x25) = CONCAT13((undefined1)local_40,local_44._1_3_);
              *(uint *)((int)param_1 + 0x1d) = CONCAT13((undefined1)uStack_48,local_4c._1_3_);
              *(undefined1 *)(param_1 + 7) = (undefined1)local_4c;
              *param_1 = uVar4;
              param_1[1] = (uint)local_9c;
              param_1[2] = local_70;
              param_1[3] = local_6c;
              param_1[4] = local_68;
              param_1[5] = local_64;
              param_1[6] = local_50;
              return;
            }
            *(undefined1 *)param_1 = 3;
            pcVar10 = *(code **)(local_60 + 0x10);
            *(undefined1 *)((int)param_1 + 1) = (undefined1)local_4c;
            (*pcVar10)(&local_54,local_5c,local_58);
            if ((uVar4 & 0xff) == 1) {
              return;
            }
            (**(code **)(*local_9c + 0x10))(local_9c + 3,local_9c[1],local_9c[2]);
            thunk_FUN_016d3fb4(local_9c);
            return;
          }
          uVar7 = 4;
        }
      }
    }
  }
LAB_010a3a2c:
  *(undefined1 *)param_1 = 3;
  *(undefined1 *)((int)param_1 + 1) = uVar7;
  if ((uVar4 & 0xfe) != 0) {
    (**(code **)(*local_9c + 0x10))(local_9c + 3,local_9c[1],local_9c[2]);
    thunk_FUN_016d3fb4(local_9c);
  }
LAB_010a3a64:
  (**(code **)(local_90 + 0x10))(&uStack_84,local_8c,local_88);
  return;
}

