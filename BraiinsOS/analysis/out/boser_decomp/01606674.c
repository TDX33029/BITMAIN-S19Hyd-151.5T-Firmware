// FUN_01606674 @ 01606674 size=6228 calls_out=10 calls_in=2
// strings: 

void FUN_01606674(int *param_1,int param_2,ushort *param_3,uint param_4,int param_5,uint param_6,
                 uint param_7,uint param_8)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  ushort *local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  byte local_38;
  uint local_30 [3];
  
  uVar15 = param_6 - 1;
  if (param_6 == 0) {
    uVar15 = 0;
  }
  if ((param_8 & 4) != 0) {
    uVar15 = 0xffffffff;
  }
  if ((param_6 < param_7) || ((uVar15 + 1 & uVar15) != 0)) {
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xfd;
    return;
  }
  local_54 = param_5;
  local_50 = param_6;
  local_4c = param_7;
  local_38 = *(byte *)(param_2 + 0x28ec);
  local_40 = *(uint *)(param_2 + 0x28d4);
  uVar11 = 1;
  if ((param_8 & 1) == 0) {
    uVar11 = 3;
  }
  uVar5 = 1;
  if ((param_8 & 2) == 0) {
    uVar5 = 0xfffffffc;
  }
  iVar6 = param_2 + 0xa00;
  iVar7 = param_2 + 0x200;
  uVar20 = (uint)*(byte *)(param_2 + 0x2900);
  local_5c = param_3;
  local_58 = param_4;
  local_48 = *(uint *)(param_2 + 0x28dc);
  local_44 = *(uint *)(param_2 + 0x28c0);
  uVar17 = *(uint *)(param_2 + 0x28d8);
switchD_01606f18_caseD_3:
  local_3c = uVar17;
  uVar17 = local_3c;
  uVar4 = local_40;
  uVar18 = local_50;
  iVar13 = local_54;
  uVar12 = local_58;
  puVar10 = local_5c;
  uVar21 = (undefined1)uVar20;
  uVar16 = 0;
  uVar9 = local_4c;
  switch(uVar20 & 0xff) {
  case 0:
    FUN_01bed93e(&local_48,0,0x11);
    *(undefined4 *)(param_2 + 0x28c4) = 0;
    *(undefined4 *)(param_2 + 0x28c8) = 0;
    *(undefined4 *)(param_2 + 0x28cc) = 1;
    *(undefined4 *)(param_2 + 0x28d0) = 1;
    uVar20 = uVar11;
    uVar17 = local_3c;
    goto switchD_01606f18_caseD_3;
  case 1:
    if (local_58 != 0) {
      local_58 = local_58 - 1;
      *(uint *)(param_2 + 0x28c4) = (uint)(byte)*local_5c;
      uVar20 = 2;
      local_5c = (ushort *)((int)local_5c + 1);
      goto switchD_01606f18_caseD_3;
    }
    uVar22 = 1;
    break;
  case 2:
    if (local_58 != 0) {
      uVar20 = *(uint *)(param_2 + 0x28c4);
      local_58 = local_58 - 1;
      puVar10 = (ushort *)((int)local_5c + 1);
      bVar3 = (byte)*local_5c;
      *(uint *)(param_2 + 0x28c8) = (uint)bVar3;
      bVar23 = (uVar20 & 0xf) != 8 ||
               (((uint)bVar3 | uVar20 << 8) % 0x1f != 0 || (bVar3 & 0x20) != 0);
      uVar16 = (uVar20 >> 4) + 8 & 0x1f;
      if ((param_8 & 4) == 0) {
        bVar23 = uVar15 + 1 >> uVar16 == 0 || bVar23;
      }
      uVar20 = 3;
      if (bVar23) {
        uVar20 = 0x1d;
      }
      local_5c = puVar10;
      if (0xf < uVar16) {
        uVar20 = 0x1d;
      }
      goto switchD_01606f18_caseD_3;
    }
    uVar22 = 2;
    break;
  case 3:
    if (local_44 < 3) {
      if (local_58 == 0) {
        uVar22 = 3;
        break;
      }
      local_58 = local_58 - 1;
      local_48 = local_48 | (uint)(byte)*local_5c << (local_44 & 0xff);
      local_44 = local_44 | 8;
      local_5c = (ushort *)((int)local_5c + 1);
    }
    uVar16 = (local_48 & 7) >> 1;
    bVar3 = (byte)local_48;
    local_48 = local_48 >> 3;
    local_44 = local_44 - 3;
    *(char *)(param_2 + 0x28eb) = (char)uVar16;
    *(byte *)(param_2 + 0x28ea) = bVar3 & 1;
    uVar20 = 0x19;
    switch(uVar16) {
    case 0:
      uVar20 = 4;
      break;
    case 1:
      *(undefined4 *)(param_2 + 0x28e4) = 0x200120;
      FUN_01bed93e(param_2 + 0x2780,8,0x90);
      FUN_01bed93e(param_2 + 0x2810,9,0x70);
      FUN_01bed93e(param_2 + 0x2880,7,0x18);
      *(undefined4 *)(param_2 + 0x2898) = 0x8080808;
      *(undefined4 *)(param_2 + 0x289c) = 0x8080808;
      FUN_01bed93e(param_2 + 0x28a0,5,0x20);
      uVar27 = FUN_01607f84(param_2,&local_48);
      uVar20 = (uint)((ulonglong)uVar27 >> 0x20);
      uVar12 = (uint)uVar27 & 0xff;
      uVar17 = local_3c;
      if (uVar12 != 1) {
        uVar16 = 0xff;
        if (uVar12 != 2) goto switchD_016067bc_caseD_18;
        uVar26 = CONCAT44(3,uVar20);
        goto LAB_01607c68;
      }
      break;
    case 2:
      uVar20 = 8;
      local_3c = 0;
      uVar17 = local_3c;
    }
    goto switchD_01606f18_caseD_3;
  case 4:
    local_3c = 0;
    local_48 = local_48 >> (local_44 & 7);
    uVar20 = 5;
    local_44 = local_44 & 0xfffffff8;
    uVar17 = local_3c;
    goto switchD_01606f18_caseD_3;
  case 5:
    uVar16 = local_44;
    uVar20 = local_48;
    uVar17 = local_58;
    uVar12 = local_3c;
    if (local_3c < 5) {
      uVar12 = 4;
    }
    while (uVar12 != local_3c) {
      if (uVar16 == 0) {
        if (uVar17 == 0) {
LAB_01607c30:
          uVar22 = 5;
          goto LAB_01607c64;
        }
        puVar8 = (ushort *)((int)puVar10 + 1);
        uVar17 = uVar17 - 1;
        *(byte *)(param_2 + 0x28e0 + local_3c) = (byte)*puVar10;
        uVar16 = 0;
        local_5c = puVar8;
        local_58 = uVar17;
      }
      else {
        puVar8 = puVar10;
        if (uVar16 < 8) {
          if (uVar17 == 0) goto LAB_01607c30;
          puVar8 = (ushort *)((int)puVar10 + 1);
          uVar17 = uVar17 - 1;
          uVar20 = uVar20 | (uint)(byte)*puVar10 << (uVar16 & 0xff);
          uVar16 = uVar16 | 8;
          local_5c = puVar8;
          local_58 = uVar17;
        }
        *(char *)(param_2 + 0x28e0 + local_3c) = (char)uVar20;
        uVar20 = uVar20 >> 8;
        uVar16 = uVar16 - 8;
        local_48 = uVar20;
        local_44 = uVar16;
      }
      local_3c = local_3c + 1;
      puVar10 = puVar8;
    }
    local_3c = (uint)*(ushort *)(param_2 + 0x28e0);
    uVar20 = 0x1f;
    uVar17 = local_3c;
    if ((*(ushort *)(param_2 + 0x28e2) ^ *(ushort *)(param_2 + 0x28e0)) == 0xffff) {
      uVar20 = 0x14;
      if (local_3c != 0) {
        uVar20 = 0x11;
        goto LAB_01606904;
      }
    }
    goto switchD_01606f18_caseD_3;
  case 6:
    uVar20 = 0x14;
    if (local_3c != 0) {
      uVar20 = 7;
      if (local_50 == local_4c) goto LAB_01607dec;
    }
    goto switchD_01606f18_caseD_3;
  case 7:
    if (local_58 != 0) {
      uVar16 = local_50 - local_4c;
      if (local_58 < local_50 - local_4c) {
        uVar16 = local_58;
      }
      if (local_3c < uVar16) {
        uVar16 = local_3c;
      }
      uVar18 = uVar16 + local_4c;
      if ((CARRY4(uVar16,local_4c)) || (local_50 < uVar18)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(local_4c,uVar18,local_50,&DAT_01d05b60);
      }
      FUN_01bed4e2(local_54 + local_4c,local_5c,uVar16);
      local_58 = uVar12 - uVar16;
      uVar20 = 6;
      local_5c = (ushort *)((int)puVar10 + uVar16);
      local_4c = uVar18;
      uVar17 = uVar17 - uVar16;
      goto switchD_01606f18_caseD_3;
    }
    uVar22 = 7;
    break;
  case 8:
    if (local_3c < 3) {
      uVar20 = local_58;
      do {
        local_30[2] = 4;
        local_30[1] = 5;
        local_30[0] = 5;
        uVar17 = local_30[local_3c];
        if (local_44 < uVar17) {
          iVar19 = 0;
          iVar13 = 1;
          do {
            if (uVar20 + iVar19 == 0) {
              uVar22 = 8;
              goto LAB_01607c64;
            }
            pbVar1 = (byte *)((int)puVar10 - iVar19);
            local_58 = (uVar20 - 1) + iVar19;
            local_5c = (ushort *)((int)puVar10 + iVar13);
            uVar16 = local_44 + 8;
            iVar13 = iVar13 + 1;
            iVar19 = iVar19 + -1;
            local_48 = local_48 | (uint)*pbVar1 << (local_44 & 0x1f);
            local_44 = uVar16;
          } while (uVar16 < uVar17);
          puVar10 = (ushort *)((int)puVar10 - iVar19);
          uVar20 = uVar20 + iVar19;
        }
        uVar2 = (ushort)local_48;
        iVar13 = local_3c * 2;
        local_48 = local_48 >> (uVar17 & 0x1f);
        iVar19 = local_3c * 2;
        local_3c = local_3c + 1;
        *(ushort *)(param_2 + 0x28e4 + iVar19) =
             *(short *)(&DAT_004baeaa + iVar13) + (uVar2 & ~(ushort)(-1 << (uVar17 & 0x1f)));
        local_44 = local_44 - uVar17;
      } while (local_3c != 3);
    }
    FUN_01bed93e(param_2 + 0x28ed,0,0x13);
    uVar20 = 0x1b;
    local_3c = 0;
    if (*(ushort *)(param_2 + 0x28e6) < 0x1f) {
      uVar20 = 9;
    }
    uVar17 = local_3c;
    if (0x11e < *(ushort *)(param_2 + 0x28e4)) {
      uVar20 = 0x1b;
    }
    goto switchD_01606f18_caseD_3;
  case 9:
    uVar17 = local_58;
    do {
      if (local_3c < *(ushort *)(param_2 + 0x28e8)) {
        puVar8 = puVar10;
        if (local_44 < 3) {
          if (uVar17 == 0) {
            uVar22 = 9;
            goto LAB_01607c64;
          }
          puVar8 = (ushort *)((int)puVar10 + 1);
          uVar17 = uVar17 - 1;
          local_48 = local_48 | (uint)(byte)*puVar10 << (local_44 & 0xff);
          local_44 = local_44 | 8;
          local_5c = puVar8;
          local_58 = uVar17;
        }
        local_44 = local_44 - 3;
        uVar20 = local_48 >> 3;
        if (0x12 < local_3c) {
          local_48 = uVar20;
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_3c,0x13,&DAT_01d05bd0);
        }
        uVar16 = (uint)(byte)(&DAT_004bae5a)[local_3c];
        if (0x12 < uVar16) {
          local_48 = uVar20;
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar16,0x13,&DAT_01d05be0);
        }
        local_3c = local_3c + 1;
        *(byte *)(param_2 + 0x28ed + uVar16) = (byte)local_48 & 7;
        uVar25 = (ulonglong)uVar16 << 0x20;
        puVar10 = puVar8;
        local_48 = uVar20;
      }
      else {
        *(undefined2 *)(param_2 + 0x28e8) = 0x13;
        uVar25 = FUN_01607f84(param_2,&local_48);
        if (((uint)uVar25 & 0xff) == 3) {
          uVar21 = 9;
          goto switchD_016067bc_default;
        }
      }
      uVar20 = (uint)(uVar25 >> 0x20);
    } while ((uVar25 & 0xff) == 0);
    uVar26 = CONCAT44(9,uVar20);
    uVar17 = local_3c;
    if (((uint)uVar25 & 0xff) != 1) {
LAB_01607c68:
      uVar16 = (uint)uVar26;
      cVar14 = (char)uVar26;
      uVar21 = (undefined1)(uVar26 >> 0x20);
      uVar15 = 0;
      if ((uVar16 & 0xff) == 1) {
        bVar23 = true;
        if (local_50 == local_4c) {
          cVar14 = '\x02';
          if (((uint)(uVar26 >> 0x20) & 0xff) == 0x17) {
            cVar14 = '\x01';
          }
        }
        else {
          cVar14 = '\x01';
        }
      }
      else {
        bVar23 = true;
        if ((uVar16 & 0xff) != 0xfc) {
switchD_016067bc_caseD_18:
          cVar14 = (char)uVar16;
          uVar15 = param_4 - local_58;
          if (local_44 >> 3 <= uVar15) {
            uVar15 = local_44 >> 3;
          }
          local_44 = local_44 + uVar15 * -8;
          bVar23 = false;
          if ((uVar16 & 0xff) != 0) {
            bVar23 = true;
          }
        }
      }
      uVar11 = local_4c;
      *(undefined1 *)(param_2 + 0x2900) = uVar21;
      *(uint *)(param_2 + 0x28c0) = local_44;
      *(byte *)(param_2 + 0x28ec) = local_38;
      *(uint *)(param_2 + 0x28d4) = local_40;
      *(uint *)(param_2 + 0x28d8) = local_3c;
      *(uint *)(param_2 + 0x28dc) = local_48 & ~(-1 << (local_44 & 0x1f));
      if (((param_8 < 0x40) && ((param_8 & 9) != 0)) && (-1 < cVar14)) {
        if ((local_4c < param_7) || (local_50 < local_4c)) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(param_7,local_4c,local_50,&DAT_01d05bb0);
        }
        uVar27 = FUN_019797b8(*(uint *)(param_2 + 0x28d0),*(uint *)(param_2 + 0x28d0) >> 0x10,
                              local_54 + param_7,local_4c - param_7);
        iVar6 = ((uint)uVar27 & 0xffff) + (int)((ulonglong)uVar27 >> 0x20) * 0x10000;
        *(int *)(param_2 + 0x28d0) = iVar6;
        if (((~param_8 & 1) == 0 && !bVar23) && (iVar6 != *(int *)(param_2 + 0x28cc))) {
          cVar14 = -2;
        }
      }
      *(char *)(param_1 + 1) = cVar14;
      param_1[2] = uVar11 - param_7;
      *param_1 = param_4 - (uVar15 + local_58);
      return;
    }
    goto switchD_01606f18_caseD_3;
  case 10:
    uVar17 = local_58;
    do {
      uVar16 = (uint)*(ushort *)(param_2 + 0x28e4);
      uVar20 = *(ushort *)(param_2 + 0x28e6) + uVar16;
      if (local_3c < uVar20) {
        if (local_44 < 0xf) {
          if (uVar17 < 2) {
            bVar23 = uVar17 == 0;
            puVar8 = puVar10;
            do {
              uVar2 = *(ushort *)(param_2 + 0x1b00 + (local_48 & 0x3ff) * 2);
              uVar20 = (uint)(short)uVar2;
              if ((int)uVar20 < 0) {
                if (10 < local_44) {
                  uVar12 = 0xb;
                  do {
                    uVar16 = (local_48 >> (uVar12 - 1 & 0x1f) & 1) + ~uVar20;
                    if (8 < uVar16 >> 6) goto LAB_01607edc;
                    uVar20 = (uint)*(short *)(param_2 + 0x2300 + uVar16 * 2);
                    if (uVar20 < 0x80000000) goto LAB_01606af8;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 <= local_44);
                }
              }
              else {
                if (0x1ff < uVar2) {
                  uVar20 = uVar20 >> 9;
                }
                if (0x1ff < uVar2 && uVar20 <= local_44) {
LAB_01606af8:
                  uVar20 = local_44;
                  puVar10 = puVar8;
                  break;
                }
              }
              if (bVar23) {
                uVar22 = 10;
                goto LAB_01607c64;
              }
              puVar10 = (ushort *)((int)puVar8 + 1);
              uVar20 = local_44 + 8;
              uVar17 = 0;
              bVar24 = local_44 < 7;
              local_58 = 0;
              local_48 = local_48 | (uint)(byte)*puVar8 << (local_44 & 0xff);
              bVar23 = true;
              puVar8 = puVar10;
              local_5c = puVar10;
              local_44 = uVar20;
            } while (bVar24);
          }
          else {
            local_5c = puVar10 + 1;
            uVar17 = uVar17 - 2;
            local_48 = local_48 | (uint)*puVar10 << (local_44 & 0xff);
            uVar20 = local_44 | 0x10;
            puVar10 = local_5c;
            local_58 = uVar17;
          }
        }
        else {
          uVar20 = local_44;
        }
        local_40 = (uint)*(short *)(param_2 + 0x1b00 + (local_48 & 0x3ff) * 2);
        if ((int)local_40 < 0) {
          uVar16 = 10;
          do {
            uVar12 = uVar16;
            uVar16 = (local_48 >> (uVar12 & 0x1f) & 1) + ~local_40;
            if (0x23f < uVar16) {
              local_40 = 0x7fff;
              break;
            }
            local_40 = (uint)*(short *)(param_2 + 0x2300 + uVar16 * 2);
            uVar16 = uVar12 + 1;
          } while ((int)local_40 < 0);
          uVar16 = uVar12 + 1 & 0xff;
        }
        else {
          uVar16 = local_40 >> 9;
          local_40 = local_40 & 0x1ff;
        }
        local_44 = uVar20 - uVar16;
        local_48 = local_48 >> (uVar16 & 0x1f);
        if (0xf < local_40) {
          uVar20 = local_3c;
          if (local_3c == 0) {
            uVar20 = 0x20;
          }
          uVar17 = local_3c;
          if (local_3c != 0 || local_40 != 0x10) {
            local_30[0] = 0x70302;
            local_38 = *(byte *)((int)local_30 + (local_40 & 3));
            uVar20 = 0xb;
          }
          goto switchD_01606f18_caseD_3;
        }
        uVar26 = (ulonglong)(local_3c & 0x1ff) << 0x20;
        *(char *)(param_2 + (local_3c & 0x1ff)) = (char)local_40;
        local_3c = local_3c + 1;
      }
      else {
        if (local_3c != uVar20) {
          uVar20 = 0x1a;
          uVar17 = local_3c;
          goto switchD_01606f18_caseD_3;
        }
        if (0x120 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar16,0x120,&DAT_01d05b70);
        }
        FUN_01bed4e2(param_2 + 0x2780,param_2);
        uVar20 = *(ushort *)(param_2 + 0x28e4) & 0x1ff;
        uVar16 = (uint)*(ushort *)(param_2 + 0x28e6) + (uint)*(ushort *)(param_2 + 0x28e4) & 0x1ff;
        if (uVar16 < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar20,uVar16,0x200,&DAT_01d05b80);
        }
        uVar12 = *(ushort *)(param_2 + 0x28e6) & 0x1f;
        if (uVar16 - uVar20 != uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_013070f0(uVar12,uVar16 - uVar20,&DAT_01d05b90);
        }
        FUN_01bed4e2(param_2 + 0x28a0,param_2 + uVar20);
        *(char *)(param_2 + 0x28eb) = *(char *)(param_2 + 0x28eb) + -1;
        uVar26 = FUN_01607f84(param_2,&local_48);
        if (((uint)uVar26 & 0xff) == 3) {
          uVar21 = 10;
          goto switchD_016067bc_default;
        }
      }
      uVar20 = (uint)(uVar26 >> 0x20);
    } while ((uVar26 & 0xff) == 0);
    uVar17 = local_3c;
    if (((uint)uVar26 & 0xff) != 1) {
      uVar26 = CONCAT44(10,uVar20);
      goto LAB_01607c68;
    }
    goto switchD_01606f18_caseD_3;
  case 0xb:
    uVar20 = (uint)local_38;
    if (local_44 < uVar20) {
      do {
        uVar17 = local_58 - 1;
        if (uVar17 == 0xffffffff) {
          uVar22 = 0xb;
          goto LAB_01607c64;
        }
        uVar16 = local_44 + 8;
        puVar10 = (ushort *)((int)local_5c + 1);
        local_48 = local_48 | (uint)(byte)*local_5c << (local_44 & 0x1f);
        local_5c = puVar10;
        local_58 = uVar17;
        local_44 = uVar16;
      } while (uVar16 < uVar20);
    }
    local_44 = local_44 - uVar20;
    uVar16 = local_48 >> (uVar20 & 0x1f);
    local_30[2] = 0xb;
    local_30[1] = 3;
    local_30[0] = 3;
    uVar21 = 0;
    if (local_40 == 0x10) {
      uVar21 = *(undefined1 *)(param_2 + (local_3c - 1 & 0x1ff));
    }
    uVar17 = local_30[local_40 & 2] + (local_48 & ~(-1 << (uVar20 & 0x1f))) + local_3c;
    uVar20 = local_3c & 0x1ff;
    uVar12 = uVar17 & 0x1ff;
    local_48 = uVar16;
    if (uVar12 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar20,uVar12,0x200,&DAT_01d05bc0);
    }
    FUN_01bed93e(param_2 + uVar20,uVar21,uVar12 - uVar20);
    uVar20 = 10;
    goto switchD_01606f18_caseD_3;
  case 0xc:
    goto switchD_016067bc_caseD_c;
  case 0xd:
    uVar20 = 0x15;
    if (local_3c < 0x100) {
      if (local_50 == local_4c) {
LAB_01607dec:
        uVar16 = 2;
        goto switchD_016067bc_caseD_18;
      }
      if (local_50 <= local_4c) {
LAB_01607f10:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,local_50,&DAT_01d05b50);
      }
      *(char *)(local_54 + local_4c) = (char)local_3c;
      uVar20 = 0xc;
      local_4c = local_4c + 1;
    }
    goto switchD_01606f18_caseD_3;
  case 0xe:
    uVar17 = (uint)local_38;
    if (local_44 < uVar17) {
      do {
        if (local_58 == 0) {
          uVar22 = 0xe;
          goto LAB_01607c60;
        }
        puVar8 = (ushort *)((int)puVar10 + 1);
        uVar20 = local_44 + 8;
        local_58 = local_58 - 1;
        local_48 = local_48 | (uint)(byte)*puVar10 << (local_44 & 0x1f);
        puVar10 = puVar8;
        local_44 = uVar20;
      } while (uVar20 < uVar17);
      local_5c = puVar8;
    }
    uVar16 = local_48 & ~(-1 << (uVar17 & 0x1f));
    uVar20 = 0xf;
    local_48 = local_48 >> (uVar17 & 0x1f);
    local_44 = local_44 - uVar17;
    uVar17 = local_3c + uVar16;
    goto switchD_01606f18_caseD_3;
  case 0xf:
    if (local_44 < 0xf) {
      if (local_58 < 2) {
        bVar23 = local_58 == 0;
        uVar20 = local_58;
        do {
          uVar2 = *(ushort *)(param_2 + 0xe80 + (local_48 & 0x3ff) * 2);
          uVar16 = (uint)(short)uVar2;
          if ((int)uVar16 < 0) {
            if (10 < local_44) {
              uVar12 = 0xb;
              do {
                uVar16 = (local_48 >> (uVar12 - 1 & 0x1f) & 1) + ~uVar16;
                if (8 < uVar16 >> 6) {
LAB_01607edc:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar16,0x240,&DAT_01d05c00);
                }
                uVar16 = (uint)*(short *)(param_2 + 0x1680 + uVar16 * 2);
                if (uVar16 < 0x80000000) {
                  local_5c = puVar10;
                  goto LAB_01607a90;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 <= local_44);
            }
          }
          else {
            if (0x1ff < uVar2) {
              uVar16 = uVar16 >> 9;
            }
            if (0x1ff < uVar2 && uVar16 <= local_44) {
              uVar16 = local_44;
              puVar8 = puVar10;
              break;
            }
          }
          if (bVar23) {
            uVar22 = 0xf;
            local_58 = uVar20;
            goto LAB_01607c64;
          }
          puVar8 = (ushort *)((int)puVar10 + 1);
          uVar16 = local_44 + 8;
          bVar23 = true;
          uVar20 = 0;
          local_48 = local_48 | (uint)(byte)*puVar10 << (local_44 & 0xff);
          bVar24 = local_44 < 7;
          puVar10 = puVar8;
          local_44 = uVar16;
        } while (bVar24);
        local_44 = uVar16;
        local_5c = puVar8;
LAB_01607a90:
        local_58 = uVar20;
      }
      else {
        local_58 = local_58 - 2;
        local_48 = local_48 | (uint)*local_5c << (local_44 & 0xff);
        local_44 = local_44 | 0x10;
        local_5c = local_5c + 1;
      }
    }
    uVar16 = (uint)*(short *)(param_2 + 0xe80 + (local_48 & 0x3ff) * 2);
    if ((int)uVar16 < 0) {
      uVar20 = 10;
      do {
        uVar12 = uVar20;
        uVar20 = (local_48 >> (uVar12 & 0x1f) & 1) + ~uVar16;
        if (0x23f < uVar20) {
          uVar16 = 0x7fff;
          break;
        }
        uVar16 = (uint)*(short *)(param_2 + 0x1680 + uVar20 * 2);
        uVar20 = uVar12 + 1;
      } while ((int)uVar16 < 0);
      uVar20 = uVar12 + 1 & 0xff;
    }
    else {
      uVar20 = uVar16 >> 9;
      uVar16 = uVar16 & 0x1ff;
    }
    local_44 = local_44 - uVar20;
    local_48 = local_48 >> (uVar20 & 0x1f);
    uVar20 = 0x22;
    if (uVar16 < 0x1e) {
      local_38 = UnsignedSaturate((char)((uVar16 & 0xff) >> 1) + -1,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      uVar20 = 0x10;
      local_40 = (uint)*(ushort *)(&DAT_004bae6e + uVar16 * 2);
      if (uVar16 < 4) {
        uVar20 = 0x16;
      }
    }
    goto switchD_01606f18_caseD_3;
  case 0x10:
    uVar16 = (uint)local_38;
    if (local_44 < uVar16) {
      if (local_58 == 0) {
LAB_01607c58:
        uVar22 = 0x10;
LAB_01607c60:
        local_58 = 0;
        break;
      }
      uVar20 = local_44;
      while( true ) {
        local_58 = local_58 - 1;
        local_48 = local_48 | (uint)(byte)*puVar10 << (uVar20 & 0x1f);
        local_44 = uVar20 + 8;
        if (uVar16 <= local_44) break;
        uVar20 = uVar20 + 8;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (local_58 == 0) {
          local_44 = uVar20;
          goto LAB_01607c58;
        }
      }
      local_5c = (ushort *)((int)puVar10 + 1);
    }
    local_40 = local_40 + (local_48 & ~(-1 << (uVar16 & 0x1f)));
    uVar20 = 0x16;
    local_48 = local_48 >> (uVar16 & 0x1f);
    local_44 = local_44 - uVar16;
    goto switchD_01606f18_caseD_3;
  case 0x11:
    if (local_44 < 8) {
      if (local_58 == 0) {
        uVar22 = 0x11;
        break;
      }
      local_58 = local_58 - 1;
      local_48 = local_48 | (uint)(byte)*local_5c << (local_44 & 0xff);
      local_44 = local_44 | 8;
      local_5c = (ushort *)((int)local_5c + 1);
    }
    local_40 = local_48 & 0xff;
    uVar20 = 0x12;
    local_48 = local_48 >> 8;
    local_44 = local_44 - 8;
    goto switchD_01606f18_caseD_3;
  case 0x12:
    if (local_50 == local_4c) goto LAB_01607dec;
    if (local_50 <= local_4c) goto LAB_01607f10;
    *(char *)(local_54 + local_4c) = (char)local_40;
    local_4c = local_4c + 1;
    uVar16 = local_3c - 1;
    uVar20 = 0x11;
    local_3c = uVar16;
    if (local_44 == 0) {
      uVar20 = 6;
    }
LAB_01606904:
    uVar17 = local_3c;
    if (uVar16 == 0) {
      uVar20 = 6;
    }
    goto switchD_01606f18_caseD_3;
  case 0x13:
    uVar17 = local_4c;
    do {
      uVar20 = local_3c;
      if (uVar18 == uVar17) {
        uVar21 = 0x13;
        uVar16 = 2;
        local_4c = uVar18;
        goto switchD_016067bc_caseD_18;
      }
      uVar12 = uVar18 - uVar17;
      uVar16 = uVar12;
      if (local_3c < uVar12) {
        uVar16 = local_3c;
      }
      FUN_016089b4(iVar13,uVar18,uVar17 - uVar4 & uVar15,uVar17,uVar16,uVar15);
      local_3c = uVar20 - uVar16;
      uVar17 = uVar16 + uVar17;
    } while (uVar12 < uVar20);
    uVar20 = 0xc;
    local_4c = uVar17;
    uVar17 = local_3c;
    goto switchD_01606f18_caseD_3;
  case 0x14:
    uVar20 = 3;
    if (*(char *)(param_2 + 0x28ea) != '\0') {
      uVar16 = param_4 - local_58;
      uVar20 = uVar16;
      if (local_44 >> 3 <= uVar16) {
        uVar20 = local_44 >> 3;
      }
      uVar12 = (local_44 & 0xfffffff8) + uVar20 * -8;
      uVar16 = uVar16 - uVar20;
      if (param_4 < uVar16) {
        local_44 = uVar12;
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar16,param_4,param_4,&DAT_01d05ba0);
      }
      local_58 = param_4 - uVar16;
      local_48 = local_48 >> (local_44 & 7) & ~(-1 << (uVar12 & 0x18));
      uVar20 = 0x18;
      local_5c = (ushort *)((int)param_3 + uVar16);
      local_44 = uVar12;
      if ((param_8 & 1) != 0) {
        uVar20 = 0x17;
        local_3c = 0;
        uVar17 = local_3c;
      }
    }
    goto switchD_01606f18_caseD_3;
  case 0x15:
    uVar17 = local_3c & 0x1ff;
    uVar20 = 0x14;
    if (uVar17 != 0x100) {
      uVar20 = 0x21;
      if (uVar17 >> 1 < 0x8f) {
        uVar17 = local_3c - 1 & 0x1f;
        local_38 = (&DAT_0056b3e8)[uVar17];
        uVar20 = 0xe;
        uVar17 = (uint)*(ushort *)(&DAT_004bae1a + uVar17 * 2);
        if (local_38 == 0) {
          uVar20 = 0xf;
        }
      }
    }
    goto switchD_01606f18_caseD_3;
  case 0x16:
    uVar20 = 0x1e;
    if ((param_8 & 4) != 0) {
      if (local_4c < local_40) goto switchD_01606f18_caseD_3;
    }
    if (local_40 <= local_50) {
      uVar16 = local_3c + local_4c;
      if ((local_50 < uVar16) ||
         ((uVar20 = local_4c - local_40 & uVar15, local_4c <= uVar20 &&
          (uVar20 - local_4c < local_3c)))) {
        uVar20 = 0x13;
        if (local_3c == 0) {
          uVar20 = 0xc;
        }
      }
      else {
        FUN_01608e60(local_54,local_50,local_4c,local_40,local_3c,uVar15);
        uVar20 = 0xc;
        local_4c = uVar16;
        uVar17 = local_3c;
      }
    }
    goto switchD_01606f18_caseD_3;
  case 0x17:
    uVar20 = local_3c;
    if (local_3c < 5) {
      uVar20 = 4;
    }
    uVar12 = *(uint *)(param_2 + 0x28cc);
    uVar17 = local_44;
    uVar16 = local_48;
    while (uVar20 != local_3c) {
      if (uVar17 == 0) {
        if (local_58 == 0) {
LAB_01607c24:
          uVar22 = 0x17;
          goto LAB_01607c60;
        }
        puVar8 = (ushort *)((int)puVar10 + 1);
        local_58 = local_58 - 1;
        uVar12 = (uint)(byte)*puVar10 | uVar12 << 8;
        uVar17 = 0;
      }
      else {
        if (uVar17 < 8) {
          if (local_58 == 0) goto LAB_01607c24;
          local_58 = local_58 - 1;
          uVar16 = uVar16 | (uint)(byte)*puVar10 << (uVar17 & 0xff);
          uVar17 = uVar17 | 8;
          puVar10 = (ushort *)((int)puVar10 + 1);
        }
        local_48 = uVar16 >> 8;
        uVar17 = uVar17 - 8;
        uVar12 = uVar16 & 0xff | uVar12 << 8;
        puVar8 = puVar10;
        uVar16 = local_48;
        local_44 = uVar17;
      }
      local_3c = local_3c + 1;
      *(uint *)(param_2 + 0x28cc) = uVar12;
      puVar10 = puVar8;
    }
    uVar20 = 0x18;
    local_5c = puVar10;
    uVar17 = local_3c;
    goto switchD_01606f18_caseD_3;
  case 0x18:
    goto switchD_016067bc_caseD_18;
  default:
switchD_016067bc_default:
    uVar16 = 0xff;
    goto switchD_016067bc_caseD_18;
  }
LAB_01607c64:
  uVar26 = CONCAT44(uVar22,uVar5);
  goto LAB_01607c68;
switchD_016067bc_caseD_c:
  uVar20 = local_58;
  if (3 < local_58) {
    do {
      uVar17 = local_50 - uVar9;
      if (uVar17 < 2) break;
      bVar23 = uVar20 == 0xe;
      if (0xd < uVar20) {
        uVar16 = 0x102;
        bVar23 = uVar17 == 0x102;
      }
      if ((0xd < uVar20 && uVar16 <= uVar17) && !bVar23) {
        local_5c = puVar10;
        local_4c = uVar9;
        uVar26 = FUN_016083ec(param_2,&local_5c,&local_54,param_8,&local_48,uVar15);
        uVar20 = (uint)(uVar26 >> 0x20);
        uVar17 = local_3c;
        if ((uVar26 & 0xff) != 0) goto LAB_01607c68;
        goto switchD_01606f18_caseD_3;
      }
      puVar8 = puVar10;
      if (local_44 < 0xf) {
        puVar8 = puVar10 + 1;
        uVar20 = uVar20 - 2;
        local_48 = local_48 | (uint)*puVar10 << (local_44 & 0xff);
        local_44 = local_44 | 0x10;
        local_58 = uVar20;
      }
      local_3c = (uint)*(short *)(iVar7 + (local_48 & 0x3ff) * 2);
      if ((int)local_3c < 0) {
        uVar17 = 10;
        do {
          uVar16 = uVar17;
          uVar17 = (local_48 >> (uVar16 & 0x1f) & 1) + ~local_3c;
          if (0x23f < uVar17) {
            local_3c = 0x7fff;
            break;
          }
          local_3c = (uint)*(short *)(iVar6 + uVar17 * 2);
          uVar17 = uVar16 + 1;
        } while ((int)local_3c < 0);
        uVar17 = uVar16 + 1 & 0xff;
      }
      else {
        uVar17 = local_3c >> 9;
      }
      local_44 = local_44 - uVar17;
      local_48 = local_48 >> (uVar17 & 0x1f);
      if ((local_3c & 0x100) != 0) {
        uVar20 = 0x15;
        local_5c = puVar8;
        local_4c = uVar9;
        uVar17 = local_3c;
        goto switchD_01606f18_caseD_3;
      }
      puVar10 = puVar8;
      if (local_44 < 0xf) {
        puVar10 = puVar8 + 1;
        uVar20 = uVar20 - 2;
        local_48 = local_48 | (uint)*puVar8 << (local_44 & 0xff);
        local_44 = local_44 | 0x10;
        local_58 = uVar20;
      }
      uVar17 = (uint)*(short *)(iVar7 + (local_48 & 0x3ff) * 2);
      if ((int)uVar17 < 0) {
        uVar16 = 10;
        do {
          uVar12 = uVar16;
          uVar17 = (local_48 >> (uVar12 & 0x1f) & 1) + ~uVar17;
          if (0x23f < uVar17) {
            uVar17 = 0x7fff;
            break;
          }
          uVar17 = (uint)*(short *)(iVar6 + uVar17 * 2);
          uVar16 = uVar12 + 1;
        } while ((int)uVar17 < 0);
        uVar16 = uVar12 + 1 & 0xff;
      }
      else {
        uVar16 = uVar17 >> 9;
      }
      local_44 = local_44 - uVar16;
      local_48 = local_48 >> (uVar16 & 0x1f);
      if (local_50 <= uVar9) goto LAB_01607f10;
      *(char *)(local_54 + uVar9) = (char)local_3c;
      uVar16 = uVar9 + 1;
      if ((uVar17 & 0x100) != 0) {
        uVar20 = 0x15;
        local_5c = puVar10;
        local_4c = uVar16;
        goto switchD_01606f18_caseD_3;
      }
      if (local_50 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar16,local_50,&DAT_01d05b50);
      }
      uVar9 = uVar9 + 2;
      *(char *)(local_54 + uVar16) = (char)uVar17;
    } while (3 < uVar20);
    local_5c = puVar10;
  }
  local_4c = uVar9;
  if (local_44 < 0xf) {
    if (uVar20 < 2) {
      bVar23 = uVar20 == 0;
      puVar10 = local_5c;
      do {
        uVar2 = *(ushort *)(iVar7 + (local_48 & 0x3ff) * 2);
        uVar20 = (uint)(short)uVar2;
        if ((int)uVar20 < 0) {
          if (10 < local_44) {
            uVar17 = 0xb;
            do {
              uVar20 = (local_48 >> (uVar17 - 1 & 0x1f) & 1) + ~uVar20;
              if (8 < uVar20 >> 6) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar20,0x240,&DAT_01d05c00);
              }
              uVar20 = (uint)*(short *)(iVar6 + uVar20 * 2);
              if (uVar20 < 0x80000000) {
                local_5c = puVar10;
                goto LAB_01607b5c;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 <= local_44);
          }
        }
        else {
          if (0x1ff < uVar2) {
            uVar20 = uVar20 >> 9;
          }
          if (0x1ff < uVar2 && uVar20 <= local_44) {
            uVar20 = local_44;
            puVar8 = puVar10;
            break;
          }
        }
        if (bVar23) {
          uVar22 = 0xc;
          goto LAB_01607c64;
        }
        puVar8 = (ushort *)((int)puVar10 + 1);
        uVar20 = local_44 + 8;
        bVar23 = true;
        local_58 = 0;
        local_48 = local_48 | (uint)(byte)*puVar10 << (local_44 & 0xff);
        bVar24 = local_44 < 7;
        puVar10 = puVar8;
        local_44 = uVar20;
      } while (bVar24);
      local_44 = uVar20;
      local_5c = puVar8;
LAB_01607b5c:
    }
    else {
      local_58 = uVar20 - 2;
      local_48 = local_48 | (uint)*local_5c << (local_44 & 0xff);
      local_44 = local_44 | 0x10;
      local_5c = local_5c + 1;
    }
  }
  uVar17 = (uint)*(short *)(iVar7 + (local_48 & 0x3ff) * 2);
  if ((int)uVar17 < 0) {
    uVar20 = 10;
    do {
      uVar16 = uVar20;
      uVar20 = (local_48 >> (uVar16 & 0x1f) & 1) + ~uVar17;
      if (0x23f < uVar20) {
        uVar17 = 0x7fff;
        break;
      }
      uVar17 = (uint)*(short *)(iVar6 + uVar20 * 2);
      uVar20 = uVar16 + 1;
    } while ((int)uVar17 < 0);
    uVar16 = uVar16 + 1 & 0xff;
  }
  else {
    uVar16 = uVar17 >> 9;
    uVar17 = uVar17 & 0x1ff;
  }
  local_48 = local_48 >> (uVar16 & 0x1f);
  uVar20 = 0xd;
  local_44 = local_44 - uVar16;
  goto switchD_01606f18_caseD_3;
}

